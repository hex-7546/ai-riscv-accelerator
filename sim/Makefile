SIM ?= verilator
TOPLEVEL_LANG ?= verilog

# Automatically find ALL Verilog files in the rtl folder and subfolders
VERILOG_SOURCES += $(shell find $(shell pwd)/../rtl -name '*.v')

TOPLEVEL = soc_top
MODULE = test_soc

COMPILE_ARGS += --trace --trace-structs -Wno-fatal
COMPILE_ARGS += -DFIRMWARE_PATH=\"$(shell pwd)/../firmware/firmware.hex\"

include $(shell cocotb-config --makefiles)/Makefile.sim

firmware:
	@echo "Compiling RISC-V Firmware..."
	riscv64-unknown-elf-gcc -O2 -mabi=ilp32 -march=rv32i -ffreestanding -nostdlib \
		-T ../firmware/sections.lds ../firmware/start.S ../firmware/main.c \
		-o ../firmware/firmware.elf -lgcc
	riscv64-unknown-elf-objcopy -O verilog ../firmware/firmware.elf ../firmware/firmware.hex
	@echo "Firmware compilation complete."

clean_all: clean
	rm -f ../firmware/firmware.elf ../firmware/firmware.hex
