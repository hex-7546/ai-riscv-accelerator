import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge

@cocotb.test()
async def test_riscv_mac_integration(dut):
    """ Test Full Multi-Layer AI Inference with Auto-Reset Handling """
    
    # 1. Start the system clock generator (50 MHz)
    cocotb.start_soon(Clock(dut.clk, 20, unit="ns").start())
    
    # 2. Dynamic Reset Controller Block
    reset_pin = None
    for name in ["resetn", "rst_n", "rst", "reset"]:
        if hasattr(dut, name):
            reset_pin = getattr(dut, name)
            break
            
    if reset_pin is not None:
        # Determine if pin is active-low (contains 'n') or active-high
        is_active_low = "n" in reset_pin._name.lower()
        dut._log.info(f"Identified reset line: '{reset_pin._name}' (Active-{'Low' if is_active_low else 'High'})")
        
        # Drive Reset Active
        reset_pin.value = 0 if is_active_low else 1
        await Timer(100, unit="ns")
        
        # Release Reset Active
        reset_pin.value = 1 if is_active_low else 0
        dut._log.info("Hardware reset signal toggled successfully.")
    else:
        dut._log.warning("No top-level reset signal identified on the DUT wrapper.")
        await Timer(100, unit="ns")
    
    # Wait for the internal hardware reset stretcher circuit to cycle through
    dut._log.info("Waiting for hardware reset stretcher to finish...")
    await Timer(6000, unit="ns") 
    dut._log.info("CPU Awake. Executing Neural Network Inference...")

    # 3. Cycle-Accurate Polling Engine
    max_cycles = 150000
    for i in range(max_cycles):
        await RisingEdge(dut.clk)
        
        # Break immediately if the CPU hits the software ebreak trap
        if dut.cpu.picorv32_core.trap.value == 1:
            dut._log.info(f"CPU Trapped at cycle {i} - Inference Complete!")
            break
            
    # 4. Post-Inference Failure Diagnostics
    if dut.cpu.picorv32_core.trap.value != 1:
        current_pc = hex(dut.cpu.picorv32_core.reg_pc.value.to_unsigned())
        dut._log.error("==================================================")
        dut._log.error(" 🚨 DIAGNOSTIC CRASH DUMP")
        dut._log.error(f" CPU failed to finish! Final Program Counter (PC): {current_pc}")
        dut._log.error(f" Hardware Trap State: {dut.cpu.picorv32_core.trap.value}")
        dut._log.error("==================================================")
        assert False, f"Simulation timed out after {max_cycles} cycles!"

    # 5. Harvest Final Target Output Metrics
    positive_score = dut.s1_mac.wgt_reg.value.signed_integer
    negative_score = dut.s1_mac.act_reg.value.signed_integer

    dut._log.info("==================================================")
    dut._log.info(" 📝 AI TEXT INFERENCE RESULTS")
    dut._log.info(" Input: 'This hardware project is excellent'")
    dut._log.info("--------------------------------------------------")
    dut._log.info(f" Positive Class Score : {positive_score}")
    dut._log.info(f" Negative Class Score : {negative_score}")
    dut._log.info("==================================================")
    
    if positive_score > negative_score:
        dut._log.info(" 🤖 AI PREDICTION: ➔ POSITIVE SENTIMENT")
    else:
        dut._log.info(" 🤖 AI PREDICTION: ➔ NEGATIVE SENTIMENT")
        
    dut._log.info("==================================================")

    assert positive_score > negative_score, "Network failed to classify correctly!"
