// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__resetn__0 = vlSelfRef.resetn;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__reset_counter = 0U;
    vlSelfRef.soc_top__DOT__cpu_resetn = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

extern const VlWide<14>/*447:0*/ Vtop__ConstPool__CONST_h020d7b90_0;

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_int_wr = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_int_rd = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_int_wait = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_int_ready = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs = 0U;
    vlSelfRef.soc_top__DOT__s2_axi_awready = 1U;
    vlSelfRef.soc_top__DOT__s2_axi_wready = 1U;
    vlSelfRef.soc_top__DOT__s2_axi_arready = 1U;
    vlSelfRef.soc_top__DOT__s2_axi_bresp = 0U;
    vlSelfRef.soc_top__DOT__s2_axi_rresp = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awprot = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_mul_wr = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_mul_wait = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_mul_ready = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_div_wr = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_div_wait = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_div_ready = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_firstword = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_firstword_xfer = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word = 0U;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__i = 0U;
    while (VL_GTS_III(32, 0x8000U, vlSelfRef.soc_top__DOT__s0_ram__DOT__i)) {
        vlSelfRef.soc_top__DOT__s0_ram__DOT__mem_8bit[(0x7fffU 
                                                       & vlSelfRef.soc_top__DOT__s0_ram__DOT__i)] = 0U;
        vlSelfRef.soc_top__DOT__s0_ram__DOT__i = ((IData)(1U) 
                                                  + vlSelfRef.soc_top__DOT__s0_ram__DOT__i);
    }
    VL_READMEM_N(true, 8, 32768, 0, VL_CVT_PACK_STR_NW(14, Vtop__ConstPool__CONST_h020d7b90_0)
                 ,  &(vlSelfRef.soc_top__DOT__s0_ram__DOT__mem_8bit)
                 , 0, ~0ULL);
    vlSelfRef.soc_top__DOT__s0_ram__DOT__i = 0U;
    while (VL_GTS_III(32, 0x2000U, vlSelfRef.soc_top__DOT__s0_ram__DOT__i)) {
        vlSelfRef.soc_top__DOT__s0_ram__DOT__mem[(0x1fffU 
                                                  & vlSelfRef.soc_top__DOT__s0_ram__DOT__i)] 
            = (((vlSelfRef.soc_top__DOT__s0_ram__DOT__mem_8bit
                 [(0x7fffU & ((IData)(3U) + VL_MULS_III(32, (IData)(4U), vlSelfRef.soc_top__DOT__s0_ram__DOT__i)))] 
                 << 0x18U) | (vlSelfRef.soc_top__DOT__s0_ram__DOT__mem_8bit
                              [(0x7fffU & ((IData)(2U) 
                                           + VL_MULS_III(32, (IData)(4U), vlSelfRef.soc_top__DOT__s0_ram__DOT__i)))] 
                              << 0x10U)) | ((vlSelfRef.soc_top__DOT__s0_ram__DOT__mem_8bit
                                             [(0x7fffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(4U), vlSelfRef.soc_top__DOT__s0_ram__DOT__i)))] 
                                             << 8U) 
                                            | vlSelfRef.soc_top__DOT__s0_ram__DOT__mem_8bit
                                            [(0x7fffU 
                                              & VL_MULS_III(32, (IData)(4U), vlSelfRef.soc_top__DOT__s0_ram__DOT__i))]));
        vlSelfRef.soc_top__DOT__s0_ram__DOT__i = ((IData)(1U) 
                                                  + vlSelfRef.soc_top__DOT__s0_ram__DOT__i);
    }
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_BRESP = 0U;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_RRESP = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_mul_rd = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_div_rd = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/hex/Desktop/INT_ACCEL/sim/../rtl/mac/soc_top.v", 13, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge resetn)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge resetn)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->resetn = VL_RAND_RESET_I(1);
    vlSelf->trap = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu_axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->soc_top__DOT__cpu_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu_axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu_axi_wstrb = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__cpu_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__cpu_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu_axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu_axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->soc_top__DOT__cpu_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu_axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu_axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__mem_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__mem_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__mem_axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__mem_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->soc_top__DOT__mem_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__mem_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__mem_axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__mem_axi_wstrb = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__mem_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__mem_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__mem_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__mem_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__mem_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__mem_axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__mem_axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->soc_top__DOT__mem_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__mem_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__mem_axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__mem_axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__s0_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s0_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__s0_axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__s1_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__s1_axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__s2_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s2_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s2_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s2_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s2_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s2_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s2_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s2_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s2_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s2_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s2_axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s2_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__s2_axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__reset_counter = VL_RAND_RESET_I(8);
    vlSelf->soc_top__DOT__cpu_resetn = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__dma_bus_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__dma_bus_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__dma_bus_read = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__dma_bus_write = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__dma_busy = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__dma_done = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__dma_src_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__dma_dst_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__dma_len = VL_RAND_RESET_I(16);
    vlSelf->soc_top__DOT__dma_start = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__dma_mode = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT____Vcellinp__u_dma__bus_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__w_route = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__cur_w_route = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__r_route = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__cur_r_route = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__s2_bvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s2_rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s2_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_dma__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_dma__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_dma__DOT__cpu_src_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_dma__DOT__cpu_dst_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_dma__DOT__cpu_transfer_len = VL_RAND_RESET_I(16);
    vlSelf->soc_top__DOT__u_dma__DOT__cpu_mode = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_dma__DOT__cpu_start = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_dma__DOT__dma_busy = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_dma__DOT__dma_done = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_dma__DOT__bus_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_dma__DOT__bus_read = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_dma__DOT__bus_write = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_dma__DOT__bus_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_dma__DOT__bus_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_dma__DOT__bus_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__u_dma__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->soc_top__DOT__u_dma__DOT__src_ptr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_dma__DOT__dst_ptr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_dma__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->soc_top__DOT__u_dma__DOT__holding_reg = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__u_dma__DOT__unpack_cnt = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__u_dma__DOT__unpack_mode = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_wstrb = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__mem_axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__pcpi_insn = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__pcpi_rs1 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__pcpi_rs2 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__pcpi_wr = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__pcpi_rd = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__pcpi_wait = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__pcpi_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__irq = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__eoi = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__trace_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__trace_data = VL_RAND_RESET_Q(36);
    vlSelf->soc_top__DOT__cpu__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__cpu__DOT__mem_instr = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awaddr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wstrb = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_araddr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_instr = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_awvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_arvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_wvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__axi_adapter__DOT__xfer_done = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_instr = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_read = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_write = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wstrb = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_insn = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_rs1 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_rs2 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_wr = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_rd = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_wait = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__eoi = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__trace_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__trace_data = VL_RAND_RESET_Q(36);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_cycle = VL_RAND_RESET_Q(64);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_instr = VL_RAND_RESET_Q(64);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_pc = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_instr = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_delay = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_active = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_mask = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_pending = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__timer = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_mul_wr = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_mul_rd = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_mul_wait = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_mul_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_div_wr = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_div_rd = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_div_wait = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_div_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_int_wr = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_int_rd = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_int_wait = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_int_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_word = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_xfer = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_secondword = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_firstword_reg = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__last_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_firstword = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_firstword_xfer = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__clear_prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_16bit_buffer = VL_RAND_RESET_I(16);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_busy = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_done = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lui = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_auipc = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jal = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jalr = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_beq = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bne = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_blt = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bge = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bltu = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bgeu = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lb = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lh = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lw = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lbu = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lhu = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sb = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sh = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sw = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_addi = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slti = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xori = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_ori = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_andi = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slli = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srli = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srai = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_add = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sub = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sll = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slt = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltu = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xor = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srl = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sra = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_or = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_and = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycle = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycleh = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstr = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_ecall_ebreak = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_fence = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_getq = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_setq = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_retirq = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_maskirq = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_waitirq = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_timer = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_trap = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rd = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs1 = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs2 = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm_j = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__compressed_instr = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_slli_srli_srai = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sb_sh_sw = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sll_srl_sra = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_slti_blt_slt = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lbu_lhu_lw = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_imm = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_reg = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_compare = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs1val = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs2val = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs1val_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs2val_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_next = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__launch_next_insn = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_valid_insn = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_ascii_instr = VL_RAND_RESET_Q(64);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_imm = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_opcode = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_rs1 = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_rs2 = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_rd = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = VL_RAND_RESET_I(8);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_state);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__set_mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__set_mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__set_mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_store = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_stalu = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_compr = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_trace = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_rd = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_timeout = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_irq_pending = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__do_waitirq = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_wait = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_wait_2 = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_add_sub = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_shl = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_shr = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_eq = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_ltu = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_lts = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__clear_prefetched_high_word_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_write = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_wrdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs1 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs2 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs = VL_RAND_RESET_I(5);
    vlSelf->soc_top__DOT__cpu__DOT__picorv32_core__DOT____VdfgRegularize_h50a03892_0_0 = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_ACLK = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_ARESETN = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_AWADDR = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_AWPROT = VL_RAND_RESET_I(3);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_AWVALID = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_AWREADY = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_WDATA = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_WSTRB = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_WVALID = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_WREADY = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_BRESP = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_BREADY = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_ARADDR = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_ARPROT = VL_RAND_RESET_I(3);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_ARVALID = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_ARREADY = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_RDATA = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_RRESP = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_RVALID = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s0_ram__DOT__S_AXI_RREADY = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->soc_top__DOT__s0_ram__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->soc_top__DOT__s0_ram__DOT__mem_8bit[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->soc_top__DOT__s0_ram__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_ACLK = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_ARESETN = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_AWADDR = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_AWPROT = VL_RAND_RESET_I(3);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_AWVALID = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_AWREADY = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_WDATA = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_WSTRB = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_WVALID = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_WREADY = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_BRESP = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_BVALID = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_BREADY = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_ARADDR = VL_RAND_RESET_I(4);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_ARPROT = VL_RAND_RESET_I(3);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_ARVALID = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_ARREADY = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_RDATA = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_RRESP = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_RVALID = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__S_AXI_RREADY = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__axi_awready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__axi_wready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__axi_arready = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__axi_rdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->soc_top__DOT__s1_mac__DOT__wgt_sram_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->soc_top__DOT__s1_mac__DOT__wgt_sram_1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->soc_top__DOT__s1_mac__DOT__act_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->soc_top__DOT__s1_mac__DOT__active_bank = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__wgt_wr_ptr = VL_RAND_RESET_I(9);
    vlSelf->soc_top__DOT__s1_mac__DOT__act_wr_ptr = VL_RAND_RESET_I(8);
    vlSelf->soc_top__DOT__s1_mac__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->soc_top__DOT__s1_mac__DOT__compute_ptr = VL_RAND_RESET_I(8);
    vlSelf->soc_top__DOT__s1_mac__DOT__vector_len = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__clear_pes = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            vlSelf->soc_top__DOT__s1_mac__DOT__act_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->soc_top__DOT__s1_mac__DOT__wgt_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->soc_top__DOT__s1_mac__DOT__acc_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->soc_top__DOT__s1_mac__DOT__act_d1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->soc_top__DOT__s1_mac__DOT__act_d2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->soc_top__DOT__s1_mac__DOT__act_d3[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->soc_top__DOT__s1_mac__DOT__wgt_d1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->soc_top__DOT__s1_mac__DOT__wgt_d2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->soc_top__DOT__s1_mac__DOT__wgt_d3[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->soc_top__DOT__s1_mac__DOT__cur_a0 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__cur_a1 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__cur_a2 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__cur_a3 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__cur_w0 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__cur_w1 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__cur_w2 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__cur_w3 = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__slv_reg_wren = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__act_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__wgt_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__act_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__wgt_out = VL_RAND_RESET_I(32);
    vlSelf->soc_top__DOT__s1_mac__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__pe__DOT__acc_out = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__soc_top__DOT__s2_bvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__soc_top__DOT__dma_start = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__resetn__0 = VL_RAND_RESET_I(1);
}
