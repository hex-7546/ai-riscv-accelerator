// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr CData/*2:0*/ Vtop___024root::soc_top__DOT__u_dma__DOT__IDLE;
constexpr CData/*2:0*/ Vtop___024root::soc_top__DOT__u_dma__DOT__READ_REQ;
constexpr CData/*2:0*/ Vtop___024root::soc_top__DOT__u_dma__DOT__READ_WAIT;
constexpr CData/*2:0*/ Vtop___024root::soc_top__DOT__u_dma__DOT__WRITE_REQ;
constexpr CData/*2:0*/ Vtop___024root::soc_top__DOT__u_dma__DOT__WRITE_WAIT;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__ENABLE_COUNTERS;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__ENABLE_COUNTERS64;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__ENABLE_REGS_16_31;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__ENABLE_REGS_DUALPORT;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__TWO_STAGE_SHIFT;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__BARREL_SHIFTER;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__TWO_CYCLE_COMPARE;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__TWO_CYCLE_ALU;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__COMPRESSED_ISA;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__CATCH_MISALIGN;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__CATCH_ILLINSN;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__ENABLE_PCPI;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__ENABLE_MUL;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__ENABLE_FAST_MUL;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__ENABLE_DIV;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__ENABLE_IRQ;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__ENABLE_IRQ_QREGS;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__ENABLE_IRQ_TIMER;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__ENABLE_TRACE;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__REGS_INIT_ZERO;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__ENABLE_COUNTERS;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__ENABLE_COUNTERS64;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__ENABLE_REGS_16_31;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__ENABLE_REGS_DUALPORT;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__LATCHED_MEM_RDATA;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__TWO_STAGE_SHIFT;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__BARREL_SHIFTER;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__TWO_CYCLE_COMPARE;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__TWO_CYCLE_ALU;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__COMPRESSED_ISA;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__CATCH_MISALIGN;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__CATCH_ILLINSN;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__ENABLE_PCPI;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__ENABLE_MUL;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__ENABLE_FAST_MUL;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__ENABLE_DIV;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__ENABLE_IRQ;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__ENABLE_IRQ_QREGS;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__ENABLE_IRQ_TIMER;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__ENABLE_TRACE;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__REGS_INIT_ZERO;
constexpr CData/*0:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__WITH_PCPI;
constexpr CData/*7:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state_trap;
constexpr CData/*7:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state_fetch;
constexpr CData/*7:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state_ld_rs1;
constexpr CData/*7:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state_ld_rs2;
constexpr CData/*7:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state_exec;
constexpr CData/*7:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state_shift;
constexpr CData/*7:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state_stmem;
constexpr CData/*7:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state_ldmem;
constexpr CData/*1:0*/ Vtop___024root::soc_top__DOT__s1_mac__DOT__STATE_IDLE;
constexpr CData/*1:0*/ Vtop___024root::soc_top__DOT__s1_mac__DOT__STATE_COMPUTE;
constexpr CData/*1:0*/ Vtop___024root::soc_top__DOT__s1_mac__DOT__STATE_DONE;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__MASKED_IRQ;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__LATCHED_IRQ;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__PROGADDR_RESET;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__PROGADDR_IRQ;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__STACKADDR;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__MASKED_IRQ;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__LATCHED_IRQ;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__PROGADDR_RESET;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__PROGADDR_IRQ;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__STACKADDR;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_timer;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_ebreak;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_buserror;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__irqregs_offset;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__regfile_size;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__regindex_bits;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__s0_ram__DOT__MEM_SIZE;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__s1_mac__DOT__C_S_AXI_DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__s1_mac__DOT__C_S_AXI_ADDR_WIDTH;
constexpr QData/*35:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__TRACE_BRANCH;
constexpr QData/*35:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__TRACE_ADDR;
constexpr QData/*35:0*/ Vtop___024root::soc_top__DOT__cpu__DOT__picorv32_core__DOT__TRACE_IRQ;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
