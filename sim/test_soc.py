import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge

@cocotb.test()
async def test_riscv_vector_mac_integration(dut):
    """ Test Vector DMA AI Inference """
    cocotb.start_soon(Clock(dut.clk, 20, unit="ns").start())
    
    reset_pin = None
    for name in ["resetn", "rst_n", "rst", "reset"]:
        if hasattr(dut, name):
            reset_pin = getattr(dut, name)
            break
            
    if reset_pin is not None:
        is_active_low = "n" in reset_pin._name.lower()
        reset_pin.value = 0 if is_active_low else 1
        await Timer(100, unit="ns")
        reset_pin.value = 1 if is_active_low else 0
        
    dut._log.info("Reset released. Waiting for hardware reset stretcher...")
    await Timer(6500, unit="ns")
    dut._log.info("CPU Awake. Executing DMA-Accelerated Vector AI Inference...")

    max_cycles = 150000
    ai_cycles = 0
    trapped = False
    
    for i in range(max_cycles):
        await RisingEdge(dut.clk)
        ai_cycles += 1
        if dut.cpu.picorv32_core.trap.value == 1:
            trapped = True
            break
            
    assert trapped, "Simulation timed out!"

    positive_score = dut.s1_mac.wgt_buffer[0].value.to_signed()
    negative_score = dut.s1_mac.act_buffer[0].value.to_signed()

    dut._log.info("==================================================")
    dut._log.info(" 🚀 VECTOR DMA INFERENCE PERFORMANCE METRICS")
    dut._log.info("--------------------------------------------------")
    dut._log.info(f" ⏱️ Net AI Compute Time : {ai_cycles} Clock Cycles")
    dut._log.info(f" 🎯 Output Logits       : Pos={positive_score} / Neg={negative_score}")
    dut._log.info("==================================================")
    
    assert positive_score > negative_score, "Network failed to classify correctly!"
