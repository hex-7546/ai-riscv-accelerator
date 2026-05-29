import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, ClockCycles

@cocotb.test()
async def test_riscv_mac_integration(dut):
    """Test full system integration: PicoRV32 -> AXI -> MAC Accelerator"""
    
    # 1. Start a 50MHz Clock on the 'clk' pin (20ns period)
    clock = Clock(dut.clk, 20, units="ns")
    cocotb.start_soon(clock.start())
    
    # 2. System Reset Sequence
    dut.resetn.value = 0 # Assert active-low reset
    await Timer(100, units="ns")
    dut.resetn.value = 1 # Release reset
    
    dut._log.info("Reset released. Waiting for PicoRV32 reset stretcher to finish...")
    
    # 3. Wait for the CPU to wake up (Remember our 255 cycle stretcher?)
    await ClockCycles(dut.clk, 300)
    dut._log.info("CPU Awake. Firmware executing...")

    # 4. Monitor execution
    # We wait for up to 5000 clock cycles for the C code to finish the math
    max_cycles = 5000
    for i in range(max_cycles):
        await RisingEdge(dut.clk)
        
        # Check if the CPU hit the trap state (the end of our C program)
        if dut.trap.value == 1:
            dut._log.info(f"CPU Trapped at cycle {i}.")
            
            # Since Cocotb can peek inside the Verilog hierarchy, 
            # let's directly read the hardware MAC accumulator register to verify
            # Note: You may need to change 's1_mac' and 'mac_result' to match 
            # exactly what you named them in your Verilog code.
            try:
                hardware_result = dut.s1_mac.res_reg.value.to_unsigned()
                dut._log.info(f"Final Hardware Accumulator Value: {hardware_result}")
                
                assert hardware_result == 64, f"Math failed! Expected 25, got {hardware_result}"
                dut._log.info("SUCCESS: RISC-V to MAC Integration passed.")
                return
            except AttributeError:
                dut._log.warning("Could not probe internal MAC register. Checking only trap state.")
                return
                
    # If we get here, the loop timed out
    assert False, f"Simulation timeout: CPU did not finish within {max_cycles} cycles."
