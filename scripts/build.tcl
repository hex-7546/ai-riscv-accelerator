# scripts/build.tcl
# Headless Vivado build script for PicoRV32 + MAC Accelerator

# 1. Define target part
set part_name "xc7a100tcsg324-1" 
set design_name "soc_top"

# 2. Read Verilog RTL
read_verilog [glob rtl/*.v]

# CRITICAL: Define the missing macro for the physical compiler.
# Since we are running from the project root, the path is simply firmware/firmware.hex
set_property verilog_define "FIRMWARE_PATH=\"firmware/firmware.hex\"" [current_fileset]

# 3. Synthesize Design
synth_design -top $design_name -part $part_name

# 4. Place and Route
opt_design
place_design
route_design

# 5. Generate Reports
report_timing_summary -file post_route_timing.rpt
report_utilization -file post_route_util.rpt

# Exit Vivado
exit
