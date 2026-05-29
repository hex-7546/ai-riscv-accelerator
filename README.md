# RISC-V MAC Accelerator SoC

A hardware/software co-designed System-on-Chip: PicoRV32 RISC-V processor,
custom INT8 Matrix Multiply-Accumulate accelerator, AXI4-Lite interconnect,
bare-metal C firmware, and physical FPGA synthesis.

## Overview

This project builds the full stack of a hardware accelerator system, from
RTL to firmware to automated verification. It is not a standalone RTL but a real processor which executes real firmware, issues real AXI
transactions to a real accelerator, and the result is checked automatically
on every commit through two independent CI pipelines.

The system is deliberately minimal in scope. Every
layer is explicit:

- The interconnect is standard AXI4-Lite
- The firmware uses volatile pointers
- Verification intercepts a hardware trap signal
- Physical synthesis runs headless from a Tcl script

---

## System Architecture

```text
                         SOC_TOP
                             |
             ┌───────────────────────────┐
             │     PicoRV32 RV32I CPU    │ <── 100 MHz sys_clk
             │          (Master)         │ <── ARESETN
             └───────────────────────────┘
                             |
                    [AXI4-Lite Master]
                             |
        ┌────────────────────────────────────────┐
        │          AXI4-Lite Interconnect         │
        └──────────────┬─────────────────┬────────┘
                       |                 |
           0x00000000──┘                 └──0x30000000
                       |                 |
          ┌────────────────────┐  ┌────────────────────┐
          │   axi4_lite_ram    │  │   axi4_lite_mac    │
          │   8KB Sync BRAM    │  │  INT8 MAC Engine   │
          │  ($readmemh init)  │  │  (4-reg MMIO map)  │
          └────────────────────┘  └────────────────────┘
```

**PicoRV32 (RV32I)** — AXI4-Lite bus master. Executes bare-metal firmware
from RAM, issues all read and write transactions to both slaves. Small
footprint, well-characterised, natively AXI4-Lite.

**AXI4-Lite Interconnect** — Address-decoded fabric. Transactions to
`0x00000000–0x00001FFF` route to RAM. Transactions to `0x30000000–0x3000000C`
route to the MAC accelerator. No custom bus protocol. No registered pipeline
stages on the interconnect path.

**8KB Synchronous RAM** — Byte-accurate slave. Loaded at elaboration via
`$readmemh` with the cross-compiled firmware hex. Serves both instruction
fetch and data access. Maps cleanly into 2 physical Block RAM tiles on
Artix-7.

**INT8 MAC Accelerator** — Fixed-point Multiply-Accumulate core. Accepts
signed 8-bit weight and activation operands through write-only MMIO
registers. Accumulates into a 32-bit output register to prevent intermediate
overflow on extended dot products. Start/done handshake through `ctrl_reg`.
The entire compute engine maps into fabric LUTs — zero DSP48E1 blocks
consumed.

---

## Accelerator Register Map

Base address: `0x30000000`

| Offset | Register   | Access | Description                                                                                   |
|--------|------------|--------|-----------------------------------------------------------------------------------------------|
| `0x00` | `ctrl_reg` | R/W    | Bit 0: Start — assert to begin MAC execution. Bit 1: Done — hardware-asserted on completion, polled by firmware. |
| `0x04` | `wgt_reg`  | W      | Signed 8-bit weight operand. Upper bits ignored.                                              |
| `0x08` | `act_reg`  | W      | Signed 8-bit activation operand. Upper bits ignored.                                          |
| `0x0C` | `res_reg`  | R      | 32-bit accumulated result.                                                                    |

---

## Simulation Output
![alt text](image.png)
![alt text](image-1.png)


The 6 µs gap after reset is the PicoRV32 reset stretcher running to
completion before the CPU begins fetching instructions. The trap fires at
cycle 222 — covering firmware boot, AXI weight and activation writes, MAC
execution, done-poll, result readback, and `ebreak`, end to end in 222
clock cycles at 100 MHz.

---

## Synthesis Results

Target: Xilinx Artix-7 `xc7a100tcsg324-1`. Full implementation flow:
synthesis, optimisation, placement, routing. All timing constraints met.

### Resource Utilisation

| Resource        | Used  | Available | Utilisation |
|-----------------|-------|-----------|-------------|
| Slice LUTs      | 1,097 | 63,400    | 1.73%       |
| Slice Registers | 740   | 126,800   | 0.58%       |
| Block RAM Tiles | 2     | 135       | 1.48%       |
| DSP Blocks      | 0     | 240       | 0.00%       |

The INT8 MAC multiplier maps entirely into fabric LUTs. No DSP48E1 blocks
are consumed, leaving the full arithmetic slice allocation free for future
SIMD or DMA extensions.

### Timing Closure (100 MHz)

| Path  | Failing Endpoints | Worst Slack (ns) | Total Violation (ns) |
|-------|-------------------|------------------|----------------------|
| Setup | 0                 | +2.295           | 0.000                |
| Hold  | 0                 | +0.129           | 0.000                |
| PW    | 0                 | +3.750           | 0.000                |

All user-specified timing constraints are met.

WNS of +2.295 ns indicates signals are <b>arriving 2.295 ns ahead of the
10 ns clock period deadline.</b> Hold slack of +0.129 ns confirms no race
conditions on any physical path. The design closes with meaningful setup
margin — not at the edge.

---

## Repository Structure
├── rtl/ <br> 
│   ├── soc_top.v              <br>
│   ├── picorv32.v                
│   ├── axi4_lite_ram.v           
│   └── axi4_lite_mac.v           
├── firmware/ <br>
│   ├── main.c                 <br>
│   ├── start.S                <br>
│   └── sections.lds           <br>
├── scripts/ <br>
│   └── build.tcl              <br>
├── sim/ <br>
│   ├── test_soc.py            <br>
│   └── Makefile               <br>
└── README.md

---

## Running the accelerator

### Functional Simulation (Local)

**Dependencies:** Verilator >= 5.0, Python >= 3.9, `cocotb`, `pytest`,
`gcc-riscv64-unknown-elf` with `rv32i`/`ilp32` multilib support.

```bash
# Step 1 — Cross-compile firmware
riscv64-unknown-elf-gcc \
  -march=rv32i -mabi=ilp32 \
  -nostdlib -nostartfiles \
  -T firmware/sections.lds \
  firmware/start.S firmware/main.c \
  -o firmware/firmware.elf

riscv64-unknown-elf-objcopy \
  -O ihex firmware/firmware.elf firmware/firmware.hex

# Step 2 — Elaborate RTL and run testbench
cd sim
make clean
make
```

Alternatively, if the Makefile handles firmware compilation internally:

```bash
cd sim
make clean
make firmware
make
```

### Physical Synthesis (Local, requires Vivado)

```bash
# Source toolchain if not already in PATH
source /tools/Xilinx/Vivado/<version>/settings64.sh

# Run full non-project implementation flow
vivado -mode batch -source scripts/build.tcl
```

Executes synthesis, optimisation, placement, routing, and report
generation in a single headless pass. Outputs `post_route_timing.rpt`
and `post_route_util.rpt` to the repository root. No GUI session or
persistent project file is created.
