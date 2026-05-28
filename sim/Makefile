# Makefile for Cocotb + Verilator Simulation

# Set default simulator
SIM ?= verilator
TOPLEVEL_LANG ?= verilog

# Set absolute paths (assuming Makefile is inside the /sim directory)
PWD := $(shell pwd)
RTL_DIR := $(PWD)/../rtl
FW_DIR := $(PWD)/../firmware

# Source Verilog Files
VERILOG_SOURCES += $(RTL_DIR)/soc_top.v
VERILOG_SOURCES += $(RTL_DIR)/picorv32.v
VERILOG_SOURCES += $(RTL_DIR)/axi4_lite_ram.v
VERILOG_SOURCES += $(RTL_DIR)/axi4_lite_mac.v

# Top level Verilog module name
TOPLEVEL = soc_top

# Python testbench file name (without .py extension)
MODULE = test_soc

# Verilator specific flags: Enable tracing (for waveforms) and ignore unused wire warnings
#EXTRA_ARGS += --trace --trace-structs -Wno-fatal
# Inject the absolute path to the firmware directory directly into Verilog
EXTRA_ARGS += --trace --trace-structs -Wno-fatal -DFIRMWARE_PATH=\"$(FW_DIR)/firmware.hex\"

# Tell Cocotb to include our directory
export PYTHONPATH := $(PWD)

# Include the standard Cocotb makefile
include $(shell cocotb-config --makefiles)/Makefile.sim

# Custom target to compile the firmware before running the simulation
.PHONY: firmware
firmware:
	@echo "Compiling RISC-V Firmware..."
	riscv64-unknown-elf-gcc -O2 -mabi=ilp32 -march=rv32i -ffreestanding -nostdlib -T $(FW_DIR)/sections.lds $(FW_DIR)/start.S $(FW_DIR)/main.c -o $(FW_DIR)/firmware.elf
	riscv64-unknown-elf-objcopy -O verilog $(FW_DIR)/firmware.elf $(FW_DIR)/firmware.hex
	@echo "Firmware compilation complete."

