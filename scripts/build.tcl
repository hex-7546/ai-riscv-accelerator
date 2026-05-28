# scripts/build.tcl
# Headless Vivado build script for PicoRV32 + MAC Accelerator

# 1. Define target part and top module
set part_name "xc7a100tcsg324-1" 
set design_name "soc_top"

# 2. Read Verilog RTL
read_verilog [glob rtl/*.v]

# 3. Apply Physical Constraints
# Inject a 100MHz clock constraint for Static Timing Analysis (STA)
create_clock -period 10.000 -name sys_clk_pin -waveform {0.000 5.000} [get_ports clk]

# 4. Synthesize Design
# CRITICAL: Pass the macro directly to the synthesis engine in non-project mode
synth_design -top $design_name -part $part_name -verilog_define "FIRMWARE_PATH=\"firmware/firmware.hex\""

# 5. Place and Route
opt_design
place_design
route_design

# 6. Generate Implementation Reports
report_timing_summary -file post_route_timing.rpt
report_utilization -file post_route_util.rpt

# Exit Vivado cleanly to release system memory
exit
