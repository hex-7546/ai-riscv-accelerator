# scripts/build.tcl
# Headless Vivado build script for PicoRV32 + MAC Accelerator

# 1. Define target part (Change this if targeting your ZCU102 instead)
set part_name "xc7a100tcsg324-1" 
set design_name "soc_top"

# 2. Read Verilog RTL
read_verilog [glob rtl/*.v]

# 3. Synthesize Design
synth_design -top $design_name -part $part_name

# 4. Place and Route
opt_design
place_design
route_design

# 5. Generate Reports
report_timing_summary -file post_route_timing.rpt
report_utilization -file post_route_util.rpt

# 6. (Optional) Write Bitstream
# write_bitstream -force ${design_name}.bit

# Exit Vivado
exit
