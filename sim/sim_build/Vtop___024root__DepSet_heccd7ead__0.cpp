// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vtop__ConstPool__TABLE_hc6df3ca5_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __VdfgRegularize_hd87f99a1_1_0;
    __VdfgRegularize_hd87f99a1_1_0 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.soc_top__DOT__u_dma__DOT__cpu_src_addr 
        = vlSelfRef.soc_top__DOT__dma_src_addr;
    vlSelfRef.soc_top__DOT__u_dma__DOT__cpu_dst_addr 
        = vlSelfRef.soc_top__DOT__dma_dst_addr;
    vlSelfRef.soc_top__DOT__u_dma__DOT__cpu_transfer_len 
        = vlSelfRef.soc_top__DOT__dma_len;
    vlSelfRef.soc_top__DOT__u_dma__DOT__cpu_mode = vlSelfRef.soc_top__DOT__dma_mode;
    vlSelfRef.soc_top__DOT__u_dma__DOT__cpu_start = vlSelfRef.soc_top__DOT__dma_start;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_wr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__pcpi_wr;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_rd 
        = vlSelfRef.soc_top__DOT__cpu__DOT__pcpi_rd;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_wait 
        = vlSelfRef.soc_top__DOT__cpu__DOT__pcpi_wait;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_ready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__pcpi_ready;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq 
        = vlSelfRef.soc_top__DOT__cpu__DOT__irq;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__clear 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__clear_pes;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__clear 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__clear_pes;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__clear 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__clear_pes;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__clear 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__clear_pes;
    vlSelfRef.trap = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trap;
    vlSelfRef.soc_top__DOT__trap = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trap;
    vlSelfRef.soc_top__DOT__cpu__DOT__trap = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trap;
    vlSelfRef.soc_top__DOT__dma_busy = vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy;
    vlSelfRef.soc_top__DOT__dma_bus_read = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_read;
    vlSelfRef.soc_top__DOT__dma_bus_write = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_write;
    vlSelfRef.soc_top__DOT__s1_axi_rvalid = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rvalid;
    vlSelfRef.soc_top__DOT__s0_axi_rvalid = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RVALID;
    vlSelfRef.soc_top__DOT__s1_axi_bvalid = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_bvalid;
    vlSelfRef.soc_top__DOT__s0_axi_bvalid = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BVALID;
    vlSelfRef.soc_top__DOT__dma_bus_addr = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_addr;
    vlSelfRef.soc_top__DOT__cpu_axi_awaddr = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu_axi_awprot = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awprot;
    vlSelfRef.soc_top__DOT__dma_bus_wdata = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_wdata;
    vlSelfRef.soc_top__DOT__cpu_axi_wdata = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wdata;
    vlSelfRef.soc_top__DOT__cpu_axi_wstrb = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb;
    vlSelfRef.soc_top__DOT__cpu_axi_araddr = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__s1_axi_awready = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_awready;
    vlSelfRef.soc_top__DOT__s0_axi_awready = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_AWREADY;
    vlSelfRef.soc_top__DOT__s1_axi_wready = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_wready;
    vlSelfRef.soc_top__DOT__s0_axi_wready = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_WREADY;
    vlSelfRef.soc_top__DOT__s1_axi_bresp = vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_BRESP;
    vlSelfRef.soc_top__DOT__s0_axi_bresp = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BRESP;
    vlSelfRef.soc_top__DOT__s1_axi_arready = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_arready;
    vlSelfRef.soc_top__DOT__s0_axi_arready = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_ARREADY;
    vlSelfRef.soc_top__DOT__s1_axi_rdata = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rdata;
    vlSelfRef.soc_top__DOT__s0_axi_rdata = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RDATA;
    vlSelfRef.soc_top__DOT__s1_axi_rresp = vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_RRESP;
    vlSelfRef.soc_top__DOT__s0_axi_rresp = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RRESP;
    vlSelfRef.soc_top__DOT__s2_axi_bvalid = vlSelfRef.soc_top__DOT__s2_bvalid_reg;
    vlSelfRef.soc_top__DOT__s2_axi_rvalid = vlSelfRef.soc_top__DOT__s2_rvalid_reg;
    vlSelfRef.soc_top__DOT__s2_axi_rdata = vlSelfRef.soc_top__DOT__s2_rdata_reg;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_awaddr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_awprot 
        = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awprot;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_wdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_wstrb 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_araddr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awaddr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wstrb 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_araddr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_rs1 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1;
    vlSelfRef.soc_top__DOT__cpu__DOT__pcpi_rs1 = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_valid 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_instr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_instr;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_addr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_wdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_wstrb 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_AWREADY 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_awready;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_WREADY 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_wready;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_BVALID 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_bvalid;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ARREADY 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_arready;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_RDATA 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rdata;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_RVALID 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rvalid;
    vlSelfRef.soc_top__DOT__dma_done = vlSelfRef.soc_top__DOT__u_dma__DOT__dma_done;
    vlSelfRef.soc_top__DOT__cpu__DOT__pcpi_valid = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_valid;
    vlSelfRef.soc_top__DOT__cpu__DOT__pcpi_insn = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_insn;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_rs2 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2;
    vlSelfRef.soc_top__DOT__cpu__DOT__pcpi_rs2 = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2;
    vlSelfRef.soc_top__DOT__cpu__DOT__eoi = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__eoi;
    vlSelfRef.soc_top__DOT__cpu__DOT__trace_valid = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trace_valid;
    vlSelfRef.soc_top__DOT__cpu__DOT__trace_data = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trace_data;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__acc_out_0 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__acc_out;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__acc_out_1 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__acc_out;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__acc_out_2 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__acc_out;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__acc_out_3 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__acc_out;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_shl 
        = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
           << (0x1fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs1))
            ? vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs
           [vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs1]
            : 0U);
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs2))
            ? vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs
           [vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs2]
            : 0U);
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state)) 
           & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_write = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_write 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu_resetn) 
           & ((~ (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state)))) 
              & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_wdata)));
    __Vtableidx1 = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_state[0U] 
        = Vtop__ConstPool__TABLE_hc6df3ca5_0[__Vtableidx1][0U];
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_state[1U] 
        = Vtop__ConstPool__TABLE_hc6df3ca5_0[__Vtableidx1][1U];
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_state[2U] 
        = Vtop__ConstPool__TABLE_hc6df3ca5_0[__Vtableidx1][2U];
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_state[3U] 
        = Vtop__ConstPool__TABLE_hc6df3ca5_0[__Vtableidx1][3U];
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_shr 
        = (IData)((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                   (((QData)((IData)(
                                                                     (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sra) 
                                                                       | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srai)) 
                                                                      & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                                                                         >> 0x1fU)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1))), 
                                                   (0x1fU 
                                                    & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2))));
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_valid = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_instr = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_instr;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_addr = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_wdata = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_wstrb = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycle) 
           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstr) 
                 | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstrh))));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_imm 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_imm;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_opcode 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_opcode;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs1 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_rs1;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs2 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_rs2;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rd 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_rd;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__clear_prefetched_high_word 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__prefetched_high_word)))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.soc_top__DOT__cpu_resetn))))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__wgt_in 
        = (0xffU & vlSelfRef.soc_top__DOT__s1_mac__DOT__wgt_sram
           [vlSelfRef.soc_top__DOT__s1_mac__DOT__compute_ptr]);
    vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe1__wgt_in 
        = (0xffU & vlSelfRef.soc_top__DOT__s1_mac__DOT__wgt_sram
           [(0xffU & ((IData)(0x40U) + (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__compute_ptr)))]);
    vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe2__wgt_in 
        = (0xffU & vlSelfRef.soc_top__DOT__s1_mac__DOT__wgt_sram
           [(0xffU & ((IData)(0x80U) + (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__compute_ptr)))]);
    vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe3__wgt_in 
        = (0xffU & vlSelfRef.soc_top__DOT__s1_mac__DOT__wgt_sram
           [(0xffU & ((IData)(0xc0U) + (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__compute_ptr)))]);
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu_resetn) 
           & ((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)) 
              & ((~ (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state)))) 
                 & ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
                    | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch) 
                       | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rdata))))));
    vlSelfRef.soc_top__DOT__cpu__DOT__resetn = vlSelfRef.soc_top__DOT__cpu_resetn;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch) {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_pc 
                   + ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch)))) {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_stalu)
                    ? vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_q
                    : vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out);
        }
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_pc 
        = (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch) 
            & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_store))
            ? (0xfffffffeU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out)
            : vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_next_pc);
    vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in 
        = (0xffU & vlSelfRef.soc_top__DOT__s1_mac__DOT__act_buffer
           [vlSelfRef.soc_top__DOT__s1_mac__DOT__compute_ptr]);
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT____VdfgRegularize_h50a03892_0_0 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_wdata)));
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arprot 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_instr)
            ? 4U : 0U);
    vlSelfRef.soc_top__DOT__resetn = vlSelfRef.resetn;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_eq 
        = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
           == vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1, vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_ltu 
        = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
           < vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
    vlSelfRef.soc_top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lui) 
                    | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_auipc) 
                       | (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jal) 
                           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jalr) 
                              | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_beq) 
                                 | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bne) 
                                    | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_blt) 
                                       | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bge) 
                                          | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bltu) 
                                             | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bgeu) 
                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lb) 
                                                   | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lh) 
                                                      | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lw) 
                                                         | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lbu) 
                                                            | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lhu) 
                                                               | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sb) 
                                                                  | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sh) 
                                                                     | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sw) 
                                                                        | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_addi) 
                                                                           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slti) 
                                                                              | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slt) 
                                                                                | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltu)))))))))))))))))))))))))))))) 
                          | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xor) 
                             | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srl) 
                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sra) 
                                   | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_or) 
                                      | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_and) 
                                         | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycle) 
                                            | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycleh) 
                                               | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstr) 
                                                  | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstrh) 
                                                     | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_fence) 
                                                        | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_getq) 
                                                           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_setq) 
                                                              | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_retirq) 
                                                                 | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_maskirq) 
                                                                    | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_timer) 
                                                                       | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_waitirq)))))))))))))))))))));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lui) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c7569ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_auipc) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6175697063ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jal) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6a616cULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jalr) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6a616c72ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_beq) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x626571ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bne) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x626e65ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_blt) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x626c74ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bge) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x626765ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bltu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x626c7475ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bgeu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x62676575ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lb) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c62ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lh) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c68ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lw) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c77ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lbu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c6275ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lhu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c6875ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sb) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x7362ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sh) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x7368ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sw) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x7377ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_addi) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x61646469ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slti) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c7469ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltiu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c746975ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xori) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x786f7269ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_ori) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6f7269ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_andi) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x616e6469ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slli) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c6c69ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srli) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x73726c69ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srai) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x73726169ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_add) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x616464ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sub) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_add_sub 
            = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
               - vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x737562ULL;
    } else {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_add_sub 
            = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
               + vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sll) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c6cULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slt) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c74ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c7475ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xor) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x786f72ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srl) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x73726cULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sra) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x737261ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_or) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6f72ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_and) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x616e64ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycle) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x72646379636c65ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycleh) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstr) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x7264696e737472ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstrh) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_fence) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x66656e6365ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_getq) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x67657471ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_setq) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x73657471ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_retirq) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x726574697271ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_maskirq) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6d61736b697271ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_waitirq) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x77616974697271ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_timer) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x74696d6572ULL;
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rready 
        = ((~ (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb)))) 
           & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid));
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bready 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid) 
           & (0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb)));
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_valid 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_valid;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_instr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_instr;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_addr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_wdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_wdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_wstrb 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_wstrb;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__wgt_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__wgt_in;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__wgt_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe1__wgt_in;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__wgt_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe2__wgt_in;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__wgt_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe3__wgt_in;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__resetn 
        = vlSelfRef.soc_top__DOT__cpu__DOT__resetn;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__resetn 
        = vlSelfRef.soc_top__DOT__cpu__DOT__resetn;
    if (vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy) {
        vlSelfRef.soc_top__DOT__mem_axi_awprot = 0U;
        vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_AWPROT 
            = vlSelfRef.soc_top__DOT__mem_axi_awprot;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_AWPROT 
            = vlSelfRef.soc_top__DOT__mem_axi_awprot;
        vlSelfRef.soc_top__DOT__mem_axi_wstrb = 0xfU;
        vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_WSTRB 
            = vlSelfRef.soc_top__DOT__mem_axi_wstrb;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_WSTRB 
            = vlSelfRef.soc_top__DOT__mem_axi_wstrb;
        vlSelfRef.soc_top__DOT__mem_axi_wdata = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_wdata;
    } else {
        vlSelfRef.soc_top__DOT__mem_axi_awprot = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awprot;
        vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_AWPROT 
            = vlSelfRef.soc_top__DOT__mem_axi_awprot;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_AWPROT 
            = vlSelfRef.soc_top__DOT__mem_axi_awprot;
        vlSelfRef.soc_top__DOT__mem_axi_wstrb = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb;
        vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_WSTRB 
            = vlSelfRef.soc_top__DOT__mem_axi_wstrb;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_WSTRB 
            = vlSelfRef.soc_top__DOT__mem_axi_wstrb;
        vlSelfRef.soc_top__DOT__mem_axi_wdata = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wdata;
    }
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_WDATA 
        = vlSelfRef.soc_top__DOT__mem_axi_wdata;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_WDATA 
        = vlSelfRef.soc_top__DOT__mem_axi_wdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_addr 
        = (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch) 
            | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst))
            ? (((vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_pc 
                 >> 2U) + (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_firstword_xfer)) 
               << 2U) : (0xfffffffcU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1));
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__act_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__act_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__act_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__act_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_busy 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch) 
           | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT____VdfgRegularize_h50a03892_0_0));
    vlSelfRef.soc_top__DOT__cpu_axi_arprot = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arprot;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arprot 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arprot;
    vlSelfRef.soc_top__DOT__u_dma__DOT__rst_n = vlSelfRef.soc_top__DOT__resetn;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_ARESETN 
        = vlSelfRef.soc_top__DOT__resetn;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ARESETN 
        = vlSelfRef.soc_top__DOT__resetn;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 = 0U;
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_beq) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_eq;
    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bne) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_eq)));
    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bge) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_lts)));
    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bgeu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_ltu)));
    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_slti_blt_slt) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_lts;
    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_ltu;
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out = 0U;
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_add_sub;
    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_compare) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xori) 
                | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xor))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out 
            = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
               ^ vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_ori) 
                | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_or))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out 
            = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
               | vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_andi) 
                | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_and))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out 
            = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
               & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
    }
    vlSelfRef.soc_top__DOT__u_dma__DOT__clk = vlSelfRef.soc_top__DOT__clk;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_ACLK 
        = vlSelfRef.soc_top__DOT__clk;
    vlSelfRef.soc_top__DOT__cpu__DOT__clk = vlSelfRef.soc_top__DOT__clk;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ACLK 
        = vlSelfRef.soc_top__DOT__clk;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_instr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_ascii_instr;
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_next) {
        if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_imm 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_imm;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_opcode 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_opcode;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs1 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_rs1;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs2 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_rs2;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rd 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_rd;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_instr 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_imm 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_insn_opcode))
                    ? vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_insn_opcode
                    : (0xffffU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_insn_opcode));
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs1 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs1;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs2 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs2;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rd 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rd;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_instr 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.soc_top__DOT__cpu_axi_rready = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rready;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_rready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rready;
    vlSelfRef.soc_top__DOT__mem_axi_rready = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rready) 
                                              | (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy));
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arvalid 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_arvalid)) 
           & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rready));
    vlSelfRef.soc_top__DOT__cpu_axi_bready = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bready;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_bready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bready;
    vlSelfRef.soc_top__DOT__mem_axi_bready = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bready) 
                                              | (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy));
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wvalid 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_wvalid)) 
           & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bready));
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awvalid 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_awvalid)) 
           & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bready));
    if (vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy) {
        vlSelfRef.soc_top__DOT__mem_axi_awaddr = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_addr;
        vlSelfRef.soc_top__DOT__mem_axi_arprot = 0U;
        vlSelfRef.soc_top__DOT__mem_axi_arvalid = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_read;
        vlSelfRef.soc_top__DOT__mem_axi_wvalid = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_write;
        vlSelfRef.soc_top__DOT__mem_axi_awvalid = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_write;
    } else {
        vlSelfRef.soc_top__DOT__mem_axi_awaddr = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
        vlSelfRef.soc_top__DOT__mem_axi_arprot = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arprot;
        vlSelfRef.soc_top__DOT__mem_axi_arvalid = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arvalid;
        vlSelfRef.soc_top__DOT__mem_axi_wvalid = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wvalid;
        vlSelfRef.soc_top__DOT__mem_axi_awvalid = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awvalid;
    }
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_AWADDR 
        = vlSelfRef.soc_top__DOT__mem_axi_awaddr;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_AWADDR 
        = (0xfU & (vlSelfRef.soc_top__DOT__mem_axi_awaddr 
                   >> 0U));
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ARADDR 
        = (0xfU & (vlSelfRef.soc_top__DOT__mem_axi_awaddr 
                   >> 0U));
    vlSelfRef.soc_top__DOT__mem_axi_araddr = vlSelfRef.soc_top__DOT__mem_axi_awaddr;
    __VdfgRegularize_hd87f99a1_1_0 = ((4U == (vlSelfRef.soc_top__DOT__mem_axi_awaddr 
                                              >> 0x1cU))
                                       ? 2U : ((3U 
                                                <= 
                                                (vlSelfRef.soc_top__DOT__mem_axi_awaddr 
                                                 >> 0x1cU))
                                                ? 1U
                                                : 0U));
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_ARPROT 
        = vlSelfRef.soc_top__DOT__mem_axi_arprot;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ARPROT 
        = vlSelfRef.soc_top__DOT__mem_axi_arprot;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ARESETN;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ARESETN;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ARESETN;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ARESETN;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__clk 
        = vlSelfRef.soc_top__DOT__cpu__DOT__clk;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__clk 
        = vlSelfRef.soc_top__DOT__cpu__DOT__clk;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__clk 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ACLK;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__clk 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ACLK;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__clk 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ACLK;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__clk 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ACLK;
    vlSelfRef.soc_top__DOT__cpu_axi_arvalid = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arvalid;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arvalid 
        = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arvalid;
    vlSelfRef.soc_top__DOT__cpu_axi_wvalid = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wvalid;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_wvalid 
        = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wvalid;
    vlSelfRef.soc_top__DOT__cpu_axi_awvalid = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awvalid;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_awvalid 
        = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awvalid;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_ARADDR 
        = vlSelfRef.soc_top__DOT__mem_axi_araddr;
    vlSelfRef.soc_top__DOT__cur_r_route = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_arvalid)
                                            ? (IData)(__VdfgRegularize_hd87f99a1_1_0)
                                            : (IData)(vlSelfRef.soc_top__DOT__r_route));
    vlSelfRef.soc_top__DOT__cur_w_route = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_awvalid)
                                            ? (IData)(__VdfgRegularize_hd87f99a1_1_0)
                                            : (IData)(vlSelfRef.soc_top__DOT__w_route));
    vlSelfRef.soc_top__DOT__s2_axi_arvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_arvalid) 
                                              & (2U 
                                                 == (IData)(vlSelfRef.soc_top__DOT__cur_r_route)));
    vlSelfRef.soc_top__DOT__s2_axi_rready = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_rready) 
                                             & (2U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_r_route)));
    vlSelfRef.soc_top__DOT__s0_axi_arvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_arvalid) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.soc_top__DOT__cur_r_route)));
    vlSelfRef.soc_top__DOT__s1_axi_arvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_arvalid) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.soc_top__DOT__cur_r_route)));
    vlSelfRef.soc_top__DOT__s0_axi_rready = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_rready) 
                                             & (0U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_r_route)));
    vlSelfRef.soc_top__DOT__s1_axi_rready = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_rready) 
                                             & (1U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_r_route)));
    if ((2U == (IData)(vlSelfRef.soc_top__DOT__cur_r_route))) {
        vlSelfRef.soc_top__DOT__cpu_axi_rresp = vlSelfRef.soc_top__DOT__s2_axi_rresp;
        vlSelfRef.soc_top__DOT__mem_axi_arready = vlSelfRef.soc_top__DOT__s2_axi_arready;
        vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata 
            = vlSelfRef.soc_top__DOT__s2_rdata_reg;
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__cur_r_route))) {
        vlSelfRef.soc_top__DOT__cpu_axi_rresp = vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_RRESP;
        vlSelfRef.soc_top__DOT__mem_axi_arready = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_arready;
        vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata 
            = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rdata;
    } else {
        vlSelfRef.soc_top__DOT__cpu_axi_rresp = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RRESP;
        vlSelfRef.soc_top__DOT__mem_axi_arready = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_ARREADY;
        vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata 
            = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RDATA;
    }
    if ((0U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wdata 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wstrb = 0xfU;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_word 
            = vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wdata 
            = ((vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2 
                << 0x10U) | (0xffffU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2));
        if ((2U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)) {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wstrb = 0xcU;
            if ((2U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)) {
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_word 
                    = (vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata 
                       >> 0x10U);
            }
        } else {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wstrb = 3U;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_word 
                = (0xffffU & vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata);
        }
    } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wdata 
            = ((vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2 
                << 0x18U) | ((0xff0000U & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2 
                                           << 0x10U)) 
                             | ((0xff00U & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2 
                                            << 8U)) 
                                | (0xffU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2))));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wstrb 
            = (0xfU & ((IData)(1U) << (3U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)
                ? ((1U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)
                    ? (vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata 
                       >> 0x18U) : (0xffU & (vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata 
                                             >> 0x10U)))
                : ((1U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)
                    ? (0xffU & (vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata 
                                >> 8U)) : (0xffU & vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata)));
    }
    vlSelfRef.soc_top__DOT__mem_axi_rvalid = ((2U == (IData)(vlSelfRef.soc_top__DOT__cur_r_route))
                                               ? (IData)(vlSelfRef.soc_top__DOT__s2_rvalid_reg)
                                               : ((1U 
                                                   == (IData)(vlSelfRef.soc_top__DOT__cur_r_route))
                                                   ? (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rvalid)
                                                   : (IData)(vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RVALID)));
    vlSelfRef.soc_top__DOT__s2_axi_awvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_awvalid) 
                                              & (2U 
                                                 == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s2_axi_wvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_wvalid) 
                                             & (2U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s2_axi_bready = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_bready) 
                                             & (2U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s0_axi_awvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_awvalid) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s0_axi_wvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_wvalid) 
                                             & (0U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s0_axi_bready = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_bready) 
                                             & (0U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s1_axi_bready = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_bready) 
                                             & (1U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    if ((2U == (IData)(vlSelfRef.soc_top__DOT__cur_w_route))) {
        vlSelfRef.soc_top__DOT__cpu_axi_bresp = vlSelfRef.soc_top__DOT__s2_axi_bresp;
        vlSelfRef.soc_top__DOT__mem_axi_awready = vlSelfRef.soc_top__DOT__s2_axi_awready;
        vlSelfRef.soc_top__DOT__mem_axi_wready = vlSelfRef.soc_top__DOT__s2_axi_wready;
        vlSelfRef.soc_top__DOT__mem_axi_bvalid = vlSelfRef.soc_top__DOT__s2_bvalid_reg;
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__cur_w_route))) {
        vlSelfRef.soc_top__DOT__cpu_axi_bresp = vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_BRESP;
        vlSelfRef.soc_top__DOT__mem_axi_awready = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_awready;
        vlSelfRef.soc_top__DOT__mem_axi_wready = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_wready;
        vlSelfRef.soc_top__DOT__mem_axi_bvalid = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_bvalid;
    } else {
        vlSelfRef.soc_top__DOT__cpu_axi_bresp = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BRESP;
        vlSelfRef.soc_top__DOT__mem_axi_awready = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_AWREADY;
        vlSelfRef.soc_top__DOT__mem_axi_wready = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_WREADY;
        vlSelfRef.soc_top__DOT__mem_axi_bvalid = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BVALID;
    }
    vlSelfRef.soc_top__DOT__s1_axi_awvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_awvalid) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s1_axi_wvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_wvalid) 
                                             & (1U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_ARVALID 
        = vlSelfRef.soc_top__DOT__s0_axi_arvalid;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ARVALID 
        = vlSelfRef.soc_top__DOT__s1_axi_arvalid;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RREADY 
        = vlSelfRef.soc_top__DOT__s0_axi_rready;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_RREADY 
        = vlSelfRef.soc_top__DOT__s1_axi_rready;
    vlSelfRef.soc_top__DOT__mem_axi_rresp = vlSelfRef.soc_top__DOT__cpu_axi_rresp;
    vlSelfRef.soc_top__DOT__cpu_axi_arready = ((~ (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy)) 
                                               & (IData)(vlSelfRef.soc_top__DOT__mem_axi_arready));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_rdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_rdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata;
    vlSelfRef.soc_top__DOT__mem_axi_rdata = vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata;
    vlSelfRef.soc_top__DOT__cpu_axi_rdata = vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata;
    vlSelfRef.soc_top__DOT__cpu_axi_rvalid = ((~ (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy)) 
                                              & (IData)(vlSelfRef.soc_top__DOT__mem_axi_rvalid));
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_AWVALID 
        = vlSelfRef.soc_top__DOT__s0_axi_awvalid;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_WVALID 
        = vlSelfRef.soc_top__DOT__s0_axi_wvalid;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BREADY 
        = vlSelfRef.soc_top__DOT__s0_axi_bready;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_BREADY 
        = vlSelfRef.soc_top__DOT__s1_axi_bready;
    vlSelfRef.soc_top__DOT__mem_axi_bresp = vlSelfRef.soc_top__DOT__cpu_axi_bresp;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_AWVALID 
        = vlSelfRef.soc_top__DOT__s1_axi_awvalid;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_WVALID 
        = vlSelfRef.soc_top__DOT__s1_axi_wvalid;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__slv_reg_wren 
        = ((IData)(vlSelfRef.soc_top__DOT__s1_axi_wvalid) 
           & ((IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_wready) 
              & ((IData)(vlSelfRef.soc_top__DOT__s1_axi_awvalid) 
                 & (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_awready))));
    vlSelfRef.soc_top__DOT__cpu_axi_awready = ((~ (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy)) 
                                               & (IData)(vlSelfRef.soc_top__DOT__mem_axi_awready));
    vlSelfRef.soc_top__DOT__cpu_axi_wready = ((~ (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy)) 
                                              & (IData)(vlSelfRef.soc_top__DOT__mem_axi_wready));
    vlSelfRef.soc_top__DOT____Vcellinp__u_dma__bus_ready 
        = (((IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__bus_read) 
            & (IData)(vlSelfRef.soc_top__DOT__mem_axi_rvalid)) 
           | ((IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__bus_write) 
              & (IData)(vlSelfRef.soc_top__DOT__mem_axi_bvalid)));
    vlSelfRef.soc_top__DOT__cpu_axi_bvalid = ((~ (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy)) 
                                              & (IData)(vlSelfRef.soc_top__DOT__mem_axi_bvalid));
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arready 
        = vlSelfRef.soc_top__DOT__cpu_axi_arready;
    vlSelfRef.soc_top__DOT__u_dma__DOT__bus_rdata = vlSelfRef.soc_top__DOT__mem_axi_rdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rdata 
        = vlSelfRef.soc_top__DOT__cpu_axi_rdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rvalid 
        = vlSelfRef.soc_top__DOT__cpu_axi_rvalid;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_awready 
        = vlSelfRef.soc_top__DOT__cpu_axi_awready;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_wready 
        = vlSelfRef.soc_top__DOT__cpu_axi_wready;
    vlSelfRef.soc_top__DOT__u_dma__DOT__bus_ready = vlSelfRef.soc_top__DOT____Vcellinp__u_dma__bus_ready;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bvalid 
        = vlSelfRef.soc_top__DOT__cpu_axi_bvalid;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_ready = ((IData)(vlSelfRef.soc_top__DOT__cpu_axi_bvalid) 
                                                   | (IData)(vlSelfRef.soc_top__DOT__cpu_axi_rvalid));
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arready;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_rdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_rvalid 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rvalid;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_awready;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_wready;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_bvalid 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bvalid;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_ready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_ready;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_ready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_ready;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_ready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_ready;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_xfer 
        = (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_ready) 
            & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid)) 
           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
              & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_xfer)
            ? vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata
            : vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q);
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_done 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu_resetn) 
           & ((((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_xfer) 
                & ((0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state)) 
                   & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT____VdfgRegularize_h50a03892_0_0))) 
               | ((3U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state)) 
                  & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst))) 
              & ((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_firstword)) 
                 | ((~ (IData)((3U == (3U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched)))) 
                    & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_xfer)))));
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__s2_rvalid_reg;
    __Vdly__soc_top__DOT__s2_rvalid_reg = 0;
    CData/*1:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state = 0;
    CData/*4:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_cycle;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_cycle = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst = 0;
    CData/*1:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lu;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lu = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lh;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lh = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lb;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lb = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_pc;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_pc = 0;
    QData/*63:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_instr;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_instr = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch = 0;
    CData/*7:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__s1_mac__DOT__axi_awready;
    __Vdly__soc_top__DOT__s1_mac__DOT__axi_awready = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__s1_mac__DOT__axi_wready;
    __Vdly__soc_top__DOT__s1_mac__DOT__axi_wready = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__s1_mac__DOT__axi_bvalid;
    __Vdly__soc_top__DOT__s1_mac__DOT__axi_bvalid = 0;
    CData/*1:0*/ __Vdly__soc_top__DOT__s1_mac__DOT__state;
    __Vdly__soc_top__DOT__s1_mac__DOT__state = 0;
    CData/*5:0*/ __Vdly__soc_top__DOT__s1_mac__DOT__compute_ptr;
    __Vdly__soc_top__DOT__s1_mac__DOT__compute_ptr = 0;
    CData/*5:0*/ __Vdly__soc_top__DOT__s1_mac__DOT__act_wr_ptr;
    __Vdly__soc_top__DOT__s1_mac__DOT__act_wr_ptr = 0;
    SData/*8:0*/ __Vdly__soc_top__DOT__s1_mac__DOT__wgt_wr_ptr;
    __Vdly__soc_top__DOT__s1_mac__DOT__wgt_wr_ptr = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__s1_mac__DOT__axi_arready;
    __Vdly__soc_top__DOT__s1_mac__DOT__axi_arready = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__s1_mac__DOT__axi_rvalid;
    __Vdly__soc_top__DOT__s1_mac__DOT__axi_rvalid = 0;
    IData/*31:0*/ __VdlyVal__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs__v0;
    __VdlyVal__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs__v0;
    __VdlyDim0__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs__v0;
    __VdlySet__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs__v0 = 0;
    CData/*7:0*/ __VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v0;
    __VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v0 = 0;
    SData/*12:0*/ __VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v0;
    __VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v0;
    __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v1;
    __VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v1 = 0;
    SData/*12:0*/ __VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v1;
    __VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v1;
    __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v2;
    __VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v2 = 0;
    SData/*12:0*/ __VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v2;
    __VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v2;
    __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v3;
    __VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v3 = 0;
    SData/*12:0*/ __VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v3;
    __VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v3;
    __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v3 = 0;
    IData/*31:0*/ __VdlyVal__soc_top__DOT__s1_mac__DOT__act_buffer__v0;
    __VdlyVal__soc_top__DOT__s1_mac__DOT__act_buffer__v0 = 0;
    CData/*5:0*/ __VdlyDim0__soc_top__DOT__s1_mac__DOT__act_buffer__v0;
    __VdlyDim0__soc_top__DOT__s1_mac__DOT__act_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__s1_mac__DOT__act_buffer__v0;
    __VdlySet__soc_top__DOT__s1_mac__DOT__act_buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__soc_top__DOT__s1_mac__DOT__wgt_sram__v0;
    __VdlyVal__soc_top__DOT__s1_mac__DOT__wgt_sram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__soc_top__DOT__s1_mac__DOT__wgt_sram__v0;
    __VdlyDim0__soc_top__DOT__s1_mac__DOT__wgt_sram__v0 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__s1_mac__DOT__wgt_sram__v0;
    __VdlySet__soc_top__DOT__s1_mac__DOT__wgt_sram__v0 = 0;
    // Body
    __Vdly__soc_top__DOT__s1_mac__DOT__axi_awready 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_awready;
    __Vdly__soc_top__DOT__s1_mac__DOT__axi_wready = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_wready;
    __Vdly__soc_top__DOT__s1_mac__DOT__axi_bvalid = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_bvalid;
    __Vdly__soc_top__DOT__s1_mac__DOT__act_wr_ptr = vlSelfRef.soc_top__DOT__s1_mac__DOT__act_wr_ptr;
    __VdlySet__soc_top__DOT__s1_mac__DOT__act_buffer__v0 = 0U;
    __Vdly__soc_top__DOT__s1_mac__DOT__wgt_wr_ptr = vlSelfRef.soc_top__DOT__s1_mac__DOT__wgt_wr_ptr;
    __VdlySet__soc_top__DOT__s1_mac__DOT__wgt_sram__v0 = 0U;
    __Vdly__soc_top__DOT__s1_mac__DOT__state = vlSelfRef.soc_top__DOT__s1_mac__DOT__state;
    vlSelfRef.__Vdly__soc_top__DOT__dma_start = vlSelfRef.soc_top__DOT__dma_start;
    __Vdly__soc_top__DOT__s1_mac__DOT__compute_ptr 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__compute_ptr;
    vlSelfRef.__Vdly__soc_top__DOT__s2_bvalid_reg = vlSelfRef.soc_top__DOT__s2_bvalid_reg;
    __Vdly__soc_top__DOT__s1_mac__DOT__axi_arready 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_arready;
    __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v0 = 0U;
    __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v1 = 0U;
    __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v2 = 0U;
    __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v3 = 0U;
    __Vdly__soc_top__DOT__s1_mac__DOT__axi_rvalid = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rvalid;
    __Vdly__soc_top__DOT__s2_rvalid_reg = vlSelfRef.soc_top__DOT__s2_rvalid_reg;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_cycle 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_cycle;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lu 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lu;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lh 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lh;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lb 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lb;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_instr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_instr;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_pc 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_pc;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1;
    __VdlySet__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs__v0 = 0U;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state;
    if ((((IData)(vlSelfRef.soc_top__DOT__cpu_resetn) 
          & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_rd)))) {
        __VdlyVal__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs__v0 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_wrdata;
        __VdlyDim0__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs__v0 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_rd;
        __VdlySet__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs__v0 = 1U;
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_wait_2 = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_wait = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trace_data = 0ULL;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trace_valid = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_rd 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rd;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_rs2 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs2;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_rs1 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs1;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_opcode 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_opcode;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_imm 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_imm;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_ascii_instr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_instr;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__clear_prefetched_high_word_q 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__clear_prefetched_high_word;
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__launch_next_insn) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_addr 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_pc;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs1val = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs2val = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs1val_valid = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs2val_valid = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0_q 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_next = 1U;
    } else {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0_q 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_next = 0U;
    }
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_AWREADY 
        = vlSelfRef.resetn;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_WREADY 
        = vlSelfRef.resetn;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_irq_pending = 0U;
    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu_resetn)))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_timeout = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_mask = 0xffffffffU;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_trace = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_irq_pending = 0U;
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_pending 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_irq_pending;
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger_q) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_ascii_instr 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_insn_opcode))
                ? vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_insn_opcode
                : (0xffffU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_insn_opcode));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_rd 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rd;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_rs1 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs1;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_rs2 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs2;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_imm 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm;
    }
    if ((1U & ((~ (IData)(vlSelfRef.soc_top__DOT__cpu_resetn)) 
               | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trap)))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_valid_insn = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__prefetched_high_word = 0U;
    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__launch_next_insn) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_valid_insn = 1U;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__clear_prefetched_high_word) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__prefetched_high_word = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlSelfRef.soc_top__DOT__cpu_resetn)) 
                  | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trap))))) {
        if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_write) {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wdata 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wdata;
        }
        if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_read) 
             | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_write))) {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_addr;
        }
    }
    if (vlSelfRef.resetn) {
        __Vdly__soc_top__DOT__s1_mac__DOT__axi_awready 
            = (((~ (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_awready)) 
                & (IData)(vlSelfRef.soc_top__DOT__s1_axi_awvalid)) 
               & (IData)(vlSelfRef.soc_top__DOT__s1_axi_wvalid));
        __Vdly__soc_top__DOT__s1_mac__DOT__axi_wready 
            = (((~ (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_wready)) 
                & (IData)(vlSelfRef.soc_top__DOT__s1_axi_wvalid)) 
               & (IData)(vlSelfRef.soc_top__DOT__s1_axi_awvalid));
        if ((((((IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_awready) 
                & (IData)(vlSelfRef.soc_top__DOT__s1_axi_awvalid)) 
               & (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_wready)) 
              & (IData)(vlSelfRef.soc_top__DOT__s1_axi_wvalid)) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_bvalid)))) {
            __Vdly__soc_top__DOT__s1_mac__DOT__axi_bvalid = 1U;
        } else if (((IData)(vlSelfRef.soc_top__DOT__s1_axi_bready) 
                    & (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_bvalid))) {
            __Vdly__soc_top__DOT__s1_mac__DOT__axi_bvalid = 0U;
        }
        vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_awready 
            = __Vdly__soc_top__DOT__s1_mac__DOT__axi_awready;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_wready 
            = __Vdly__soc_top__DOT__s1_mac__DOT__axi_wready;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_bvalid 
            = __Vdly__soc_top__DOT__s1_mac__DOT__axi_bvalid;
        if (vlSelfRef.soc_top__DOT__s1_mac__DOT__slv_reg_wren) {
            if ((0U == (0xfU & vlSelfRef.soc_top__DOT__mem_axi_awaddr))) {
                if ((0x10U & vlSelfRef.soc_top__DOT__mem_axi_wdata)) {
                    __Vdly__soc_top__DOT__s1_mac__DOT__act_wr_ptr = 0U;
                }
            } else if ((4U != (0xfU & vlSelfRef.soc_top__DOT__mem_axi_awaddr))) {
                if ((8U == (0xfU & vlSelfRef.soc_top__DOT__mem_axi_awaddr))) {
                    __VdlyVal__soc_top__DOT__s1_mac__DOT__act_buffer__v0 
                        = vlSelfRef.soc_top__DOT__mem_axi_wdata;
                    __VdlyDim0__soc_top__DOT__s1_mac__DOT__act_buffer__v0 
                        = vlSelfRef.soc_top__DOT__s1_mac__DOT__act_wr_ptr;
                    __VdlySet__soc_top__DOT__s1_mac__DOT__act_buffer__v0 = 1U;
                    __Vdly__soc_top__DOT__s1_mac__DOT__act_wr_ptr 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__act_wr_ptr)));
                }
            }
        }
    } else {
        __Vdly__soc_top__DOT__s1_mac__DOT__axi_awready = 0U;
        __Vdly__soc_top__DOT__s1_mac__DOT__axi_wready = 0U;
        __Vdly__soc_top__DOT__s1_mac__DOT__axi_bvalid = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_awready 
            = __Vdly__soc_top__DOT__s1_mac__DOT__axi_awready;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_wready 
            = __Vdly__soc_top__DOT__s1_mac__DOT__axi_wready;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_bvalid 
            = __Vdly__soc_top__DOT__s1_mac__DOT__axi_bvalid;
        __Vdly__soc_top__DOT__s1_mac__DOT__act_wr_ptr = 0U;
    }
    vlSelfRef.soc_top__DOT__s1_mac__DOT__act_wr_ptr 
        = __Vdly__soc_top__DOT__s1_mac__DOT__act_wr_ptr;
    if (__VdlySet__soc_top__DOT__s1_mac__DOT__act_buffer__v0) {
        vlSelfRef.soc_top__DOT__s1_mac__DOT__act_buffer[__VdlyDim0__soc_top__DOT__s1_mac__DOT__act_buffer__v0] 
            = __VdlyVal__soc_top__DOT__s1_mac__DOT__act_buffer__v0;
    }
    if (vlSelfRef.resetn) {
        if (vlSelfRef.soc_top__DOT__s1_mac__DOT__slv_reg_wren) {
            if ((0U == (0xfU & vlSelfRef.soc_top__DOT__mem_axi_awaddr))) {
                if ((0x10U & vlSelfRef.soc_top__DOT__mem_axi_wdata)) {
                    __Vdly__soc_top__DOT__s1_mac__DOT__wgt_wr_ptr = 0U;
                }
            } else if ((4U == (0xfU & vlSelfRef.soc_top__DOT__mem_axi_awaddr))) {
                __VdlyVal__soc_top__DOT__s1_mac__DOT__wgt_sram__v0 
                    = vlSelfRef.soc_top__DOT__mem_axi_wdata;
                __VdlyDim0__soc_top__DOT__s1_mac__DOT__wgt_sram__v0 
                    = (0xffU & (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__wgt_wr_ptr));
                __VdlySet__soc_top__DOT__s1_mac__DOT__wgt_sram__v0 = 1U;
                __Vdly__soc_top__DOT__s1_mac__DOT__wgt_wr_ptr 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__wgt_wr_ptr)));
            }
        }
    } else {
        __Vdly__soc_top__DOT__s1_mac__DOT__wgt_wr_ptr = 0U;
    }
    vlSelfRef.soc_top__DOT__s1_mac__DOT__wgt_wr_ptr 
        = __Vdly__soc_top__DOT__s1_mac__DOT__wgt_wr_ptr;
    if (__VdlySet__soc_top__DOT__s1_mac__DOT__wgt_sram__v0) {
        vlSelfRef.soc_top__DOT__s1_mac__DOT__wgt_sram[__VdlyDim0__soc_top__DOT__s1_mac__DOT__wgt_sram__v0] 
            = __VdlyVal__soc_top__DOT__s1_mac__DOT__wgt_sram__v0;
    }
    if (__VdlySet__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs__v0) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs[__VdlyDim0__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs__v0] 
            = __VdlyVal__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs__v0;
    }
    if (vlSelfRef.resetn) {
        if (vlSelfRef.soc_top__DOT__s1_mac__DOT__clear_pes) {
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__acc_out = 0U;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__acc_out = 0U;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__acc_out = 0U;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__acc_out = 0U;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__wgt_out = 0U;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__wgt_out = 0U;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__wgt_out = 0U;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__wgt_out = 0U;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__act_out = 0U;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__act_out = 0U;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__act_out = 0U;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__act_out = 0U;
        } else {
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__acc_out 
                = (vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in)), 
                                 VL_EXTENDS_II(32,8, (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__wgt_in))));
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__acc_out 
                = (vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in)), 
                                 VL_EXTENDS_II(32,8, (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe1__wgt_in))));
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__acc_out 
                = (vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in)), 
                                 VL_EXTENDS_II(32,8, (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe2__wgt_in))));
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__acc_out 
                = (vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__acc_out 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in)), 
                                 VL_EXTENDS_II(32,8, (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe3__wgt_in))));
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__wgt_out 
                = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__wgt_in;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__wgt_out 
                = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe1__wgt_in;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__wgt_out 
                = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe2__wgt_in;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__wgt_out 
                = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe3__wgt_in;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__act_out 
                = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__act_out 
                = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__act_out 
                = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__act_out 
                = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in;
        }
        if (((IData)(vlSelfRef.soc_top__DOT__s0_axi_arvalid) 
             & (IData)(vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_ARREADY))) {
            vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RDATA 
                = vlSelfRef.soc_top__DOT__s0_ram__DOT__mem
                [(0x1fffU & (vlSelfRef.soc_top__DOT__mem_axi_araddr 
                             >> 2U))];
            vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RVALID = 1U;
            vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RRESP = 0U;
        } else if (vlSelfRef.soc_top__DOT__s0_axi_rready) {
            vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RVALID = 0U;
        }
        if (((IData)(vlSelfRef.soc_top__DOT__mem_axi_arvalid) 
             & (IData)(vlSelfRef.soc_top__DOT__mem_axi_arready))) {
            vlSelfRef.soc_top__DOT__r_route = ((4U 
                                                == 
                                                (vlSelfRef.soc_top__DOT__mem_axi_araddr 
                                                 >> 0x1cU))
                                                ? 2U
                                                : (
                                                   (3U 
                                                    <= 
                                                    (vlSelfRef.soc_top__DOT__mem_axi_araddr 
                                                     >> 0x1cU))
                                                    ? 1U
                                                    : 0U));
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__s0_axi_awvalid) 
              & (IData)(vlSelfRef.soc_top__DOT__s0_axi_wvalid)) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BVALID)))) {
            if ((1U & (IData)(vlSelfRef.soc_top__DOT__mem_axi_wstrb))) {
                __VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v0 
                    = (0xffU & vlSelfRef.soc_top__DOT__mem_axi_wdata);
                __VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v0 
                    = (0x1fffU & (vlSelfRef.soc_top__DOT__mem_axi_awaddr 
                                  >> 2U));
                __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v0 = 1U;
            }
            vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BVALID = 1U;
            vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BRESP = 0U;
            if ((2U & (IData)(vlSelfRef.soc_top__DOT__mem_axi_wstrb))) {
                __VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v1 
                    = (0xffU & (vlSelfRef.soc_top__DOT__mem_axi_wdata 
                                >> 8U));
                __VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v1 
                    = (0x1fffU & (vlSelfRef.soc_top__DOT__mem_axi_awaddr 
                                  >> 2U));
                __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.soc_top__DOT__mem_axi_wstrb))) {
                __VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v2 
                    = (0xffU & (vlSelfRef.soc_top__DOT__mem_axi_wdata 
                                >> 0x10U));
                __VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v2 
                    = (0x1fffU & (vlSelfRef.soc_top__DOT__mem_axi_awaddr 
                                  >> 2U));
                __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.soc_top__DOT__mem_axi_wstrb))) {
                __VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v3 
                    = (vlSelfRef.soc_top__DOT__mem_axi_wdata 
                       >> 0x18U);
                __VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v3 
                    = (0x1fffU & (vlSelfRef.soc_top__DOT__mem_axi_awaddr 
                                  >> 2U));
                __VdlySet__soc_top__DOT__s0_ram__DOT__mem__v3 = 1U;
            }
        } else if (vlSelfRef.soc_top__DOT__s0_axi_bready) {
            vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BVALID = 0U;
        }
    } else {
        vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__acc_out = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__acc_out = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__acc_out = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__acc_out = 0U;
        vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RVALID = 0U;
        vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RDATA = 0U;
        vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RRESP = 0U;
        vlSelfRef.soc_top__DOT__r_route = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__wgt_out = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__wgt_out = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__wgt_out = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__wgt_out = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__act_out = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__act_out = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__act_out = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__act_out = 0U;
        vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BVALID = 0U;
        vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BRESP = 0U;
    }
    if (__VdlySet__soc_top__DOT__s0_ram__DOT__mem__v0) {
        vlSelfRef.soc_top__DOT__s0_ram__DOT__mem[__VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.soc_top__DOT__s0_ram__DOT__mem
                [__VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v0]) 
               | (IData)(__VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v0));
    }
    if (__VdlySet__soc_top__DOT__s0_ram__DOT__mem__v1) {
        vlSelfRef.soc_top__DOT__s0_ram__DOT__mem[__VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.soc_top__DOT__s0_ram__DOT__mem
                [__VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__soc_top__DOT__s0_ram__DOT__mem__v2) {
        vlSelfRef.soc_top__DOT__s0_ram__DOT__mem[__VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.soc_top__DOT__s0_ram__DOT__mem
                [__VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__soc_top__DOT__s0_ram__DOT__mem__v3) {
        vlSelfRef.soc_top__DOT__s0_ram__DOT__mem[__VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.soc_top__DOT__s0_ram__DOT__mem
                [__VdlyDim0__soc_top__DOT__s0_ram__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__soc_top__DOT__s0_ram__DOT__mem__v3) 
                  << 0x18U));
    }
    if (vlSelfRef.resetn) {
        __Vdly__soc_top__DOT__s1_mac__DOT__axi_arready 
            = ((~ (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_arready)) 
               & (IData)(vlSelfRef.soc_top__DOT__s1_axi_arvalid));
        if ((((IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_arready) 
              & (IData)(vlSelfRef.soc_top__DOT__s1_axi_arvalid)) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rvalid)))) {
            __Vdly__soc_top__DOT__s1_mac__DOT__axi_rvalid = 1U;
            vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rdata 
                = ((8U & vlSelfRef.soc_top__DOT__mem_axi_awaddr)
                    ? 0U : ((4U & vlSelfRef.soc_top__DOT__mem_axi_awaddr)
                             ? 0U : ((2U & vlSelfRef.soc_top__DOT__mem_axi_awaddr)
                                      ? 0U : ((1U & vlSelfRef.soc_top__DOT__mem_axi_awaddr)
                                               ? 0U
                                               : ((
                                                   (2U 
                                                    == (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__state)) 
                                                   << 1U) 
                                                  | (1U 
                                                     == (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__state)))))));
        } else if (((IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rvalid) 
                    & (IData)(vlSelfRef.soc_top__DOT__s1_axi_rready))) {
            __Vdly__soc_top__DOT__s1_mac__DOT__axi_rvalid = 0U;
        }
        vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_arready 
            = __Vdly__soc_top__DOT__s1_mac__DOT__axi_arready;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rvalid 
            = __Vdly__soc_top__DOT__s1_mac__DOT__axi_rvalid;
        if (((IData)(vlSelfRef.soc_top__DOT__mem_axi_awvalid) 
             & (IData)(vlSelfRef.soc_top__DOT__mem_axi_awready))) {
            vlSelfRef.soc_top__DOT__w_route = ((4U 
                                                == 
                                                (vlSelfRef.soc_top__DOT__mem_axi_awaddr 
                                                 >> 0x1cU))
                                                ? 2U
                                                : (
                                                   (3U 
                                                    <= 
                                                    (vlSelfRef.soc_top__DOT__mem_axi_awaddr 
                                                     >> 0x1cU))
                                                    ? 1U
                                                    : 0U));
        }
        if (((IData)(vlSelfRef.soc_top__DOT__s2_axi_arvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__s2_rvalid_reg)))) {
            __Vdly__soc_top__DOT__s2_rvalid_reg = 1U;
            vlSelfRef.soc_top__DOT__s2_rdata_reg = 
                ((0U == (0xffU & vlSelfRef.soc_top__DOT__mem_axi_araddr))
                  ? vlSelfRef.soc_top__DOT__dma_src_addr
                  : ((4U == (0xffU & vlSelfRef.soc_top__DOT__mem_axi_araddr))
                      ? vlSelfRef.soc_top__DOT__dma_dst_addr
                      : ((8U == (0xffU & vlSelfRef.soc_top__DOT__mem_axi_araddr))
                          ? (IData)(vlSelfRef.soc_top__DOT__dma_len)
                          : 0U)));
        } else if (((IData)(vlSelfRef.soc_top__DOT__s2_rvalid_reg) 
                    & (IData)(vlSelfRef.soc_top__DOT__s2_axi_rready))) {
            __Vdly__soc_top__DOT__s2_rvalid_reg = 0U;
        }
    } else {
        __Vdly__soc_top__DOT__s1_mac__DOT__axi_arready = 0U;
        __Vdly__soc_top__DOT__s1_mac__DOT__axi_rvalid = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rdata = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_arready 
            = __Vdly__soc_top__DOT__s1_mac__DOT__axi_arready;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rvalid 
            = __Vdly__soc_top__DOT__s1_mac__DOT__axi_rvalid;
        vlSelfRef.soc_top__DOT__w_route = 0U;
        __Vdly__soc_top__DOT__s2_rvalid_reg = 0U;
    }
    vlSelfRef.soc_top__DOT__s2_rvalid_reg = __Vdly__soc_top__DOT__s2_rvalid_reg;
    vlSelfRef.soc_top__DOT__s1_axi_awready = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_awready;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_AWREADY 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_awready;
    vlSelfRef.soc_top__DOT__s1_axi_wready = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_wready;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_WREADY 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_wready;
    vlSelfRef.soc_top__DOT__s1_axi_bvalid = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_bvalid;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_BVALID 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_bvalid;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__acc_out_0 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__acc_out;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__acc_out_1 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__acc_out;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__acc_out_2 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__acc_out;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__acc_out_3 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__acc_out;
    vlSelfRef.soc_top__DOT__cpu__DOT__trace_data = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trace_data;
    vlSelfRef.soc_top__DOT__cpu__DOT__trace_valid = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trace_valid;
    if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_insn = 0U;
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__pcpi_insn = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_insn;
    vlSelfRef.soc_top__DOT__s0_axi_awready = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_AWREADY;
    vlSelfRef.soc_top__DOT__s0_axi_wready = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_WREADY;
    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu_resetn)))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_valid = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__pcpi_valid 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_valid;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__eoi = 0U;
    } else {
        vlSelfRef.soc_top__DOT__cpu__DOT__pcpi_valid 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_valid;
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__eoi = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__eoi;
    vlSelfRef.soc_top__DOT__s0_axi_rresp = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RRESP;
    vlSelfRef.soc_top__DOT__s0_axi_rdata = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RDATA;
    vlSelfRef.soc_top__DOT__s0_axi_rvalid = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RVALID;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_ARREADY 
        = vlSelfRef.resetn;
    vlSelfRef.soc_top__DOT__s0_axi_bresp = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BRESP;
    vlSelfRef.soc_top__DOT__s0_axi_bvalid = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BVALID;
    vlSelfRef.soc_top__DOT__s1_axi_arready = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_arready;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ARREADY 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_arready;
    vlSelfRef.soc_top__DOT__s1_axi_rdata = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rdata;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_RDATA 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rdata;
    vlSelfRef.soc_top__DOT__s1_axi_rvalid = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rvalid;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_RVALID 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rvalid;
    vlSelfRef.soc_top__DOT__s2_axi_rdata = vlSelfRef.soc_top__DOT__s2_rdata_reg;
    vlSelfRef.soc_top__DOT__s2_axi_rvalid = vlSelfRef.soc_top__DOT__s2_rvalid_reg;
    vlSelfRef.soc_top__DOT__cpu_axi_wdata = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_wdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_wdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_wdata = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wdata;
    vlSelfRef.soc_top__DOT__cpu_axi_awaddr = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu_axi_araddr = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_awaddr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_araddr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awaddr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_araddr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_addr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_addr = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    if (vlSelfRef.soc_top__DOT__cpu_resetn) {
        if (((IData)(vlSelfRef.soc_top__DOT__cpu_axi_awready) 
             & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awvalid))) {
            vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_awvalid = 1U;
        }
        if (((IData)(vlSelfRef.soc_top__DOT__cpu_axi_arready) 
             & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arvalid))) {
            vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_arvalid = 1U;
        }
        if (((IData)(vlSelfRef.soc_top__DOT__cpu_axi_wready) 
             & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wvalid))) {
            vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_wvalid = 1U;
        }
        if ((1U & ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__xfer_done) 
                   | (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_valid))))) {
            vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_awvalid = 0U;
            vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_arvalid = 0U;
            vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_wvalid = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__last_mem_valid)))) {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_firstword_reg 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_firstword;
        }
    } else {
        vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_awvalid = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_firstword_reg = 0U;
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__last_mem_valid 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu_resetn) 
           && ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid) 
               & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_ready))));
    if ((1U & ((~ (IData)(vlSelfRef.soc_top__DOT__cpu_resetn)) 
               | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trap)))) {
        if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu_resetn)))) {
            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.soc_top__DOT__cpu_resetn)) 
                   | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_ready)))) {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid = 0U;
        }
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_read) 
             | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_write))) {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb 
                = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wstrb) 
                   & (- (IData)((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state))) {
            if ((((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rdata))) {
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid 
                    = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)));
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_instr 
                    = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch) 
                       | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst));
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb = 0U;
                __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state = 1U;
            }
            if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_wdata) {
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid = 1U;
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_instr = 0U;
                __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state))) {
            if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_xfer) {
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid = 0U;
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_secondword = 0U;
                __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state 
                    = (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
                        | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state))) {
            if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_xfer) {
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid = 0U;
                __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state))) {
            if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst) {
                __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state = 0U;
            }
        }
    }
    if (vlSelfRef.resetn) {
        if (vlSelfRef.soc_top__DOT__s1_mac__DOT__slv_reg_wren) {
            if ((0U == (0xfU & vlSelfRef.soc_top__DOT__mem_axi_awaddr))) {
                if ((1U & vlSelfRef.soc_top__DOT__mem_axi_wdata)) {
                    __Vdly__soc_top__DOT__s1_mac__DOT__state = 1U;
                    __Vdly__soc_top__DOT__s1_mac__DOT__compute_ptr = 0U;
                    vlSelfRef.soc_top__DOT__s1_mac__DOT__clear_pes = 0U;
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__state))) {
            if (((IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__compute_ptr) 
                 == (vlSelfRef.soc_top__DOT__s1_mac__DOT__vector_len 
                     - (IData)(1U)))) {
                __Vdly__soc_top__DOT__s1_mac__DOT__state = 2U;
                vlSelfRef.soc_top__DOT__s1_mac__DOT__clear_pes = 1U;
            } else {
                __Vdly__soc_top__DOT__s1_mac__DOT__compute_ptr 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__compute_ptr)));
            }
        }
        if (((((2U == (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__state)) 
               & (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__slv_reg_wren)) 
              & (0U == (0xfU & vlSelfRef.soc_top__DOT__mem_axi_awaddr))) 
             & (vlSelfRef.soc_top__DOT__mem_axi_wdata 
                >> 1U))) {
            __Vdly__soc_top__DOT__s1_mac__DOT__state = 0U;
        }
    } else {
        __Vdly__soc_top__DOT__s1_mac__DOT__state = 0U;
        vlSelfRef.soc_top__DOT__s1_mac__DOT__clear_pes = 1U;
    }
    vlSelfRef.soc_top__DOT__s1_mac__DOT__state = __Vdly__soc_top__DOT__s1_mac__DOT__state;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__compute_ptr 
        = __Vdly__soc_top__DOT__s1_mac__DOT__compute_ptr;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_wdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_wdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_addr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_addr;
    vlSelfRef.soc_top__DOT__s0_axi_arready = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_ARREADY;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__clear 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__clear_pes;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__clear 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__clear_pes;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__clear 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__clear_pes;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__clear 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT__clear_pes;
    vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__wgt_in 
        = (0xffU & vlSelfRef.soc_top__DOT__s1_mac__DOT__wgt_sram
           [vlSelfRef.soc_top__DOT__s1_mac__DOT__compute_ptr]);
    vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe1__wgt_in 
        = (0xffU & vlSelfRef.soc_top__DOT__s1_mac__DOT__wgt_sram
           [(0xffU & ((IData)(0x40U) + (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__compute_ptr)))]);
    vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe2__wgt_in 
        = (0xffU & vlSelfRef.soc_top__DOT__s1_mac__DOT__wgt_sram
           [(0xffU & ((IData)(0x80U) + (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__compute_ptr)))]);
    vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe3__wgt_in 
        = (0xffU & vlSelfRef.soc_top__DOT__s1_mac__DOT__wgt_sram
           [(0xffU & ((IData)(0xc0U) + (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__compute_ptr)))]);
    vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in 
        = (0xffU & vlSelfRef.soc_top__DOT__s1_mac__DOT__act_buffer
           [vlSelfRef.soc_top__DOT__s1_mac__DOT__compute_ptr]);
    if ((1U & (~ (IData)(vlSelfRef.resetn)))) {
        vlSelfRef.soc_top__DOT__s1_mac__DOT__vector_len = 0x40U;
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_opcode 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_opcode;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs1 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_rs1;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__wgt_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__wgt_in;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__wgt_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe1__wgt_in;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__wgt_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe2__wgt_in;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__wgt_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe3__wgt_in;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe0__DOT__act_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe1__DOT__act_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe2__DOT__act_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__pe3__DOT__act_in 
        = vlSelfRef.soc_top__DOT__s1_mac__DOT____Vcellinp__pe0__act_in;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state;
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_instr) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_instr = 1U;
        vlSelfRef.soc_top__DOT__cpu__DOT__mem_instr = 1U;
        vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arprot = 4U;
    } else {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_instr = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__mem_instr = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arprot = 0U;
    }
    vlSelfRef.soc_top__DOT__cpu_axi_wstrb = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_wstrb 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wstrb 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_wstrb 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_wstrb = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_valid 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid;
    if (vlSelfRef.soc_top__DOT__cpu_resetn) {
        vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__xfer_done 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_valid) 
               & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_ready));
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_valid = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rready 
        = ((~ (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb)))) 
           & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid));
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bready 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid) 
           & (0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb)));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trap = 0U;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh = 0U;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__set_mem_do_rinst = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__set_mem_do_rdata = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__set_mem_do_wdata = 0U;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
           & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_done));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger_q 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 0U;
    if (vlSelfRef.soc_top__DOT__cpu_resetn) {
        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_cycle 
            = (1ULL + vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_cycle);
        if (((((((((0x80U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) {
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__do_waitirq))));
                __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lu = 0U;
                __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lh = 0U;
                __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lb = 0U;
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_rd 
                    = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rd;
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_compr 
                    = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__compressed_instr;
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__current_pc 
                    = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_next_pc;
                if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch) {
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__current_pc 
                        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_stalu)
                                               ? vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_q
                                               : vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out))
                            : vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_next_pc);
                }
                __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_pc 
                    = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__current_pc;
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_next_pc 
                    = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__current_pc;
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_store = 0U;
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_stalu = 0U;
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch = 0U;
                if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger) {
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_instr 
                        = (1ULL + vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_instr);
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_delay 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_active;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_next_pc 
                        = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__current_pc 
                           + ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jal) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_next_pc 
                            = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__current_pc 
                               + vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm_j);
                        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch = 1U;
                    } else {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst = 0U;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_retirq))));
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 = 0U;
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2 = 0U;
                if ((((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_trap) 
                      | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                     | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal))) {
                    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_trap) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 0x80U;
                    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycle) {
                            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out 
                                = (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_cycle);
                        } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycleh) {
                            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out 
                                = (IData)((vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstr) {
                            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out 
                                = (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_instr);
                        } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstrh) {
                            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out 
                                = (IData)((vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lui)
                                ? 0U : vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_pc);
                        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2 
                            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst 
                            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 8U;
                    } else {
                        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out 
                            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__timer;
                        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs1val 
                            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__timer 
                            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                    }
                } else if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_trap)))) {
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs1val 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 1U;
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_slli_srli_srai) {
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs1val 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs2;
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 4U;
                } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs1val 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm;
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 8U;
                } else {
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs1val 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh 
                        = (0x1fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs2);
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs2;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs2val 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs2;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sb_sh_sw) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 2U;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sll_srl_sra) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 4U;
                    } else {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst 
                            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh 
                    = (0x1fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs2);
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2 
                    = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs2;
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs2val 
                    = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs2;
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_rs2val_valid = 1U;
                if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sb_sh_sw) {
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 2U;
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sll_srl_sra) {
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 4U;
                } else {
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out 
                    = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_pc 
                       + vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm);
                if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_rd = 0U;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_store 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0;
                    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_done) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0) {
                        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__set_mem_do_rinst = 1U;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jalr;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_store = 1U;
                    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_stalu = 1U;
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) {
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh))) {
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1;
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst 
                        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh))) {
                    if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slli) 
                         | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sll))) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srli) 
                                | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srl))) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srai) 
                                | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sra))) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1, 4U);
                    }
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh) 
                                    - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slli) 
                         | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sll))) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srli) 
                                | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srl))) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srai) 
                                | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sra))) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1, 1U);
                    }
                    __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh) 
                                    - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_wdata)))) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                            = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                               + vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm);
                        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__set_mem_do_wdata = 1U;
                        if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sb) {
                            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize = 2U;
                        } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sh) {
                            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sw) {
                            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_done))) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger = 1U;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_done))) {
                        if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lu) {
                            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out 
                                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_word;
                        } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lh) {
                            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_word));
                        } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lb) {
                            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_word));
                        }
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger = 1U;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rdata)))) {
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                            = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                               + vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm);
                        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lb) 
                             | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lbu))) {
                            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lh) 
                                    | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lhu))) {
                            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lw) {
                            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lu 
                            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lbu_lhu_lw;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lh 
                            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lh;
                        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lb 
                            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_cycle = 0ULL;
        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_instr = 0ULL;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__timer = 0U;
        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_pc = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_next_pc = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_store = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_stalu = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch = 0U;
        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lu = 0U;
        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lh = 0U;
        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lb = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_delay = 0U;
        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
    }
    if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x7fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)) 
                & (~ (IData)((0U != (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                     >> 0x15U))))) 
               & (~ (IData)((0U != (0x1fffU & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                               >> 7U))))));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_timer = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_maskirq = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_getq = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_setq = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_fence 
            = ((0xfU == (0x7fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)) 
               & (~ (IData)((0U != (7U & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                          >> 0xcU))))));
    }
    if (((IData)(vlSelfRef.soc_top__DOT__cpu_resetn) 
         & ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rdata) 
            | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)))) {
            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize)) 
             & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)) {
            __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 0x80U;
        }
    }
    if ((((IData)(vlSelfRef.soc_top__DOT__cpu_resetn) 
          & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_pc)))) {
        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.soc_top__DOT__cpu_resetn)) 
               | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_done)))) {
        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch = 0U;
        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rdata = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_wdata = 0U;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__set_mem_do_rinst) {
        __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__set_mem_do_rdata) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rdata = 1U;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__set_mem_do_wdata) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_wdata = 1U;
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__current_pc = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_instr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_instr;
    vlSelfRef.soc_top__DOT__cpu_axi_arprot = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arprot;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arprot 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arprot;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_wstrb 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_wstrb;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_valid 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_valid;
    vlSelfRef.soc_top__DOT__cpu_axi_rready = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rready;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_rready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rready;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arvalid 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_arvalid)) 
           & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rready));
    vlSelfRef.soc_top__DOT__cpu_axi_bready = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bready;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_bready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bready;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wvalid 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_wvalid)) 
           & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bready));
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awvalid 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__ack_awvalid)) 
           & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bready));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_sh;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_cycle 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_cycle;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lu 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lu;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lh 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lh;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lb 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_is_lb;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_instr 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__count_instr;
    if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_done))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_waitirq = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs1 
            = (0x1fU & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                        >> 0xfU));
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs1))
            ? vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs
           [vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs1]
            : 0U);
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_pc 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_pc;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1;
    vlSelfRef.soc_top__DOT__cpu_axi_arvalid = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arvalid;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arvalid 
        = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arvalid;
    vlSelfRef.soc_top__DOT__cpu_axi_wvalid = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wvalid;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_wvalid 
        = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wvalid;
    vlSelfRef.soc_top__DOT__cpu_axi_awvalid = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awvalid;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_awvalid 
        = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awvalid;
    vlSelfRef.trap = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trap;
    vlSelfRef.soc_top__DOT__trap = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trap;
    vlSelfRef.soc_top__DOT__cpu__DOT__trap = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__trap;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__do_waitirq = 0U;
    __Vtableidx1 = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_state[0U] 
        = Vtop__ConstPool__TABLE_hc6df3ca5_0[__Vtableidx1][0U];
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_state[1U] 
        = Vtop__ConstPool__TABLE_hc6df3ca5_0[__Vtableidx1][1U];
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_state[2U] 
        = Vtop__ConstPool__TABLE_hc6df3ca5_0[__Vtableidx1][2U];
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_state[3U] 
        = Vtop__ConstPool__TABLE_hc6df3ca5_0[__Vtableidx1][3U];
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_write = 0U;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_pc 
        = (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch) 
            & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_store))
            ? (0xfffffffeU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out)
            : vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_next_pc);
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_q 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_rs2 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2;
    vlSelfRef.soc_top__DOT__cpu__DOT__pcpi_rs2 = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2;
    if ((0U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wdata 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wstrb = 0xfU;
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wdata 
            = ((vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2 
                << 0x10U) | (0xffffU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wstrb 
            = ((2U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)
                ? 0xcU : 3U);
    } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wdata 
            = ((vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2 
                << 0x18U) | ((0xff0000U & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2 
                                           << 0x10U)) 
                             | ((0xff00U & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2 
                                            << 8U)) 
                                | (0xffU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2))));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_wstrb 
            = (0xfU & ((IData)(1U) << (3U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)));
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__pcpi_rs1 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1;
    vlSelfRef.soc_top__DOT__cpu__DOT__pcpi_rs1 = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_shl 
        = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
           << (0x1fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_eq 
        = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
           == vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1, vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_ltu 
        = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
           < vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lbu) 
           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lhu) 
              | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lw)));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch) {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_pc 
                   + ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch)))) {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_stalu)
                    ? vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_q
                    : vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_out);
        }
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rd 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_rd;
    if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_done))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__compressed_instr = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rd 
            = (0x1fU & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                        >> 7U));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs2 
            = (0x1fU & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                        >> 0x14U));
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs2))
            ? vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpuregs
           [vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs2]
            : 0U);
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs2 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_rs2;
    if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q))));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q))));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycle) 
           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstr) 
                 | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstrh))));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lui) 
           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_auipc) 
              | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jal)));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lui) 
           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_auipc) 
              | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jal) 
                 | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jalr) 
                    | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_addi) 
                       | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_add) 
                          | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sub)))))));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_slti_blt_slt 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slti) 
           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_blt) 
              | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slt)));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltiu) 
           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bltu) 
              | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltu)));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_compare 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slti) 
              | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slt) 
                 | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltiu) 
                    | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltu)))));
    if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_beq 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bne 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x1000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_blt 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x4000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bge 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x5000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bltu 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x6000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bgeu 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x7000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lb 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lh 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x1000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lw 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x2000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lbu 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x4000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lhu 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x5000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sb 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sh 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0x1000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sw 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0x2000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_addi 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slti 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x2000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltiu 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x3000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xori 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x4000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_ori 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x6000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_andi 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x7000U == (0x7000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slli 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x1000U == (0xfe007000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srli 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x5000U == (0xfe007000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srai 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_slli_srli_srai 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & ((IData)((0x1000U == (0xfe007000U 
                                       & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q))) 
                  | ((IData)((0x5000U == (0xfe007000U 
                                          & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q))))));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jalr) 
               | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                   >> 0xcU))) | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0xcU))) 
                                                 | ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                         >> 0xcU))) 
                                                    | ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                            >> 0xcU))) 
                                                       | ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                               >> 0xcU))) 
                                                          | (7U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                                 >> 0xcU))))))))));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_compare = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jal)
                ? vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm_j
                : (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lui) 
                    | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_auipc))
                    ? VL_SHIFTL_III(32,32,32, (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                               >> 0xcU), 0xcU)
                    : (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jalr) 
                        | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            (((0x1000U 
                                               & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                  >> 0x13U)) 
                                              | (0x800U 
                                                 & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                    << 4U))) 
                                             | ((0x7e0U 
                                                 & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 7U)))))
                            : ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_add 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sub 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sll 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x1000U == (0xfe007000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slt 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x2000U == (0xfe007000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltu 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x3000U == (0xfe007000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xor 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x4000U == (0xfe007000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srl 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x5000U == (0xfe007000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sra 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_or 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x6000U == (0xfe007000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_and 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x7000U == (0xfe007000U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sll_srl_sra 
            = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & ((IData)((0x1000U == (0xfe007000U 
                                       & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q))) 
                  | ((IData)((0x5000U == (0xfe007000U 
                                          & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q))))));
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_xfer) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_insn_opcode 
            = vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q 
            = vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata;
    }
    if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_done))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_retirq = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_imm 
            = (0x13U == (0x7fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x7fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sb_sh_sw 
            = (0x23U == (0x7fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffffU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x1ffffeU 
                                               & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xbU)))));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0x7feU & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                     >> 0xbU))) 
                            >> 9U)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0x800U & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                     >> 0xbU))) 
                            << 2U)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0xff000U & (VL_EXTENDS_II(32,21, 
                                            (0x1ffffeU 
                                             & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 0xbU))) 
                              << 0xbU)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x1ffffeU 
                                            & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                                               >> 0xbU)))));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_auipc 
            = (0x17U == (0x7fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lui 
            = (0x37U == (0x7fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jal 
            = (0x6fU == (0x7fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jalr 
            = (IData)((0x67U == (0x707fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched)));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x7fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_alu_reg_reg 
            = (0x33U == (0x7fU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
    }
    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu_resetn)))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_state = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_fence = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_active = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_compare = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_beq = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bne = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_blt = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bge = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bltu = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bgeu = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_addi = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slti = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltiu = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xori = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_ori = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_andi = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_add = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sub = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sll = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slt = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltu = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xor = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srl = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sra = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_or = 0U;
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_and = 0U;
    }
    if (vlSelfRef.resetn) {
        if ((0xffU > (IData)(vlSelfRef.soc_top__DOT__reset_counter))) {
            vlSelfRef.soc_top__DOT__reset_counter = 
                (0xffU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__reset_counter)));
            vlSelfRef.soc_top__DOT__cpu_resetn = 0U;
        } else {
            vlSelfRef.soc_top__DOT__cpu_resetn = 1U;
        }
    } else {
        vlSelfRef.soc_top__DOT__reset_counter = 0U;
        vlSelfRef.soc_top__DOT__cpu_resetn = 0U;
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_imm 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_insn_imm;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cpu_state)) 
           & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_trigger));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_shr 
        = (IData)((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                   (((QData)((IData)(
                                                                     (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sra) 
                                                                       | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srai)) 
                                                                      & (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
                                                                         >> 0x1fU)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1))), 
                                                   (0x1fU 
                                                    & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2))));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lui) 
                    | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_auipc) 
                       | (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jal) 
                           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jalr) 
                              | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_beq) 
                                 | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bne) 
                                    | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_blt) 
                                       | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bge) 
                                          | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bltu) 
                                             | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bgeu) 
                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lb) 
                                                   | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lh) 
                                                      | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lw) 
                                                         | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lbu) 
                                                            | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lhu) 
                                                               | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sb) 
                                                                  | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sh) 
                                                                     | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sw) 
                                                                        | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_addi) 
                                                                           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slti) 
                                                                              | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slt) 
                                                                                | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltu)))))))))))))))))))))))))))))) 
                          | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xor) 
                             | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srl) 
                                | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sra) 
                                   | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_or) 
                                      | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_and) 
                                         | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycle) 
                                            | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycleh) 
                                               | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstr) 
                                                  | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstrh) 
                                                     | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_fence) 
                                                        | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_getq) 
                                                           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_setq) 
                                                              | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_retirq) 
                                                                 | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_maskirq) 
                                                                    | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_timer) 
                                                                       | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_waitirq)))))))))))))))))))));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lui) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c7569ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_auipc) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6175697063ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jal) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6a616cULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_jalr) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6a616c72ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_beq) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x626571ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bne) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x626e65ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_blt) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x626c74ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bge) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x626765ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bltu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x626c7475ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bgeu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x62676575ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lb) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c62ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lh) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c68ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lw) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c77ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lbu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c6275ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_lhu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6c6875ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sb) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x7362ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sh) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x7368ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sw) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x7377ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_addi) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x61646469ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slti) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c7469ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltiu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c746975ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xori) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x786f7269ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_ori) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6f7269ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_andi) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x616e6469ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slli) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c6c69ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srli) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x73726c69ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srai) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x73726169ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_add) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x616464ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sub) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_add_sub 
            = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
               - vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x737562ULL;
    } else {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_add_sub 
            = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
               + vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sll) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c6cULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_slt) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c74ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sltu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x736c7475ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xor) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x786f72ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_srl) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x73726cULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_sra) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x737261ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_or) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6f72ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_and) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x616e64ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycle) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x72646379636c65ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdcycleh) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstr) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x7264696e737472ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_rdinstrh) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_fence) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x66656e6365ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_getq) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x67657471ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_setq) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x73657471ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_retirq) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x726574697271ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_maskirq) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x6d61736b697271ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_waitirq) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x77616974697271ULL;
    }
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_timer) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr = 0x74696d6572ULL;
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 = 0U;
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_beq) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_eq;
    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bne) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_eq)));
    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bge) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_lts)));
    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_bgeu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_ltu)));
    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_slti_blt_slt) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_lts;
    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_ltu;
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out = 0U;
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_add_sub;
    } else if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__is_compare) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out 
            = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xori) 
                | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_xor))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out 
            = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
               ^ vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_ori) 
                | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_or))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out 
            = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
               | vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_andi) 
                | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__instr_and))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__alu_out 
            = (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1 
               & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op2);
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_instr 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__q_ascii_instr;
    if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_next) {
        if (vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_opcode 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_opcode;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs1 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_rs1;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rd 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_rd;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs2 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_rs2;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_imm 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_insn_imm;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_instr 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_insn_opcode))
                    ? vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_insn_opcode
                    : (0xffffU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_insn_opcode));
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs1 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs1;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rd 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rd;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_rs2 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_rs2;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_insn_imm 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__decoded_imm;
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_ascii_instr 
                = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst 
        = __Vdly__soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_write 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu_resetn) 
           & ((~ (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state)))) 
              & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_wdata)));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__clear_prefetched_high_word 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__prefetched_high_word)))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.soc_top__DOT__cpu_resetn))))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.soc_top__DOT__cpu__DOT__resetn = vlSelfRef.soc_top__DOT__cpu_resetn;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_addr 
        = (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch) 
            | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst))
            ? (((vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__next_pc 
                 >> 2U) + (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_firstword_xfer)) 
               << 2U) : (0xfffffffcU & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu_resetn) 
           & ((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)) 
              & ((~ (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state)))) 
                 & ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
                    | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch) 
                       | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rdata))))));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT____VdfgRegularize_h50a03892_0_0 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_wdata)));
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__resetn 
        = vlSelfRef.soc_top__DOT__cpu__DOT__resetn;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__resetn 
        = vlSelfRef.soc_top__DOT__cpu__DOT__resetn;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_busy 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_prefetch) 
           | (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT____VdfgRegularize_h50a03892_0_0));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__soc_top__DOT__u_dma__DOT__src_ptr;
    __Vdly__soc_top__DOT__u_dma__DOT__src_ptr = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__u_dma__DOT__dst_ptr;
    __Vdly__soc_top__DOT__u_dma__DOT__dst_ptr = 0;
    SData/*15:0*/ __Vdly__soc_top__DOT__u_dma__DOT__count;
    __Vdly__soc_top__DOT__u_dma__DOT__count = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__u_dma__DOT__unpack_mode;
    __Vdly__soc_top__DOT__u_dma__DOT__unpack_mode = 0;
    CData/*1:0*/ __Vdly__soc_top__DOT__u_dma__DOT__unpack_cnt;
    __Vdly__soc_top__DOT__u_dma__DOT__unpack_cnt = 0;
    CData/*2:0*/ __Vdly__soc_top__DOT__u_dma__DOT__state;
    __Vdly__soc_top__DOT__u_dma__DOT__state = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__u_dma__DOT__holding_reg;
    __Vdly__soc_top__DOT__u_dma__DOT__holding_reg = 0;
    // Body
    __Vdly__soc_top__DOT__u_dma__DOT__src_ptr = vlSelfRef.soc_top__DOT__u_dma__DOT__src_ptr;
    __Vdly__soc_top__DOT__u_dma__DOT__dst_ptr = vlSelfRef.soc_top__DOT__u_dma__DOT__dst_ptr;
    __Vdly__soc_top__DOT__u_dma__DOT__count = vlSelfRef.soc_top__DOT__u_dma__DOT__count;
    __Vdly__soc_top__DOT__u_dma__DOT__unpack_mode = vlSelfRef.soc_top__DOT__u_dma__DOT__unpack_mode;
    __Vdly__soc_top__DOT__u_dma__DOT__unpack_cnt = vlSelfRef.soc_top__DOT__u_dma__DOT__unpack_cnt;
    __Vdly__soc_top__DOT__u_dma__DOT__state = vlSelfRef.soc_top__DOT__u_dma__DOT__state;
    __Vdly__soc_top__DOT__u_dma__DOT__holding_reg = vlSelfRef.soc_top__DOT__u_dma__DOT__holding_reg;
    if (vlSelfRef.resetn) {
        if ((0U == (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__state))) {
            vlSelfRef.soc_top__DOT__u_dma__DOT__dma_done = 0U;
            if (((IData)(vlSelfRef.soc_top__DOT__dma_start) 
                 & (0U < (IData)(vlSelfRef.soc_top__DOT__dma_len)))) {
                __Vdly__soc_top__DOT__u_dma__DOT__src_ptr 
                    = vlSelfRef.soc_top__DOT__dma_src_addr;
                __Vdly__soc_top__DOT__u_dma__DOT__dst_ptr 
                    = vlSelfRef.soc_top__DOT__dma_dst_addr;
                __Vdly__soc_top__DOT__u_dma__DOT__count 
                    = vlSelfRef.soc_top__DOT__dma_len;
                __Vdly__soc_top__DOT__u_dma__DOT__unpack_mode 
                    = vlSelfRef.soc_top__DOT__dma_mode;
                __Vdly__soc_top__DOT__u_dma__DOT__unpack_cnt = 0U;
                vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy = 1U;
                __Vdly__soc_top__DOT__u_dma__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__state))) {
            vlSelfRef.soc_top__DOT__u_dma__DOT__bus_addr 
                = vlSelfRef.soc_top__DOT__u_dma__DOT__src_ptr;
            vlSelfRef.soc_top__DOT__u_dma__DOT__bus_read = 1U;
            __Vdly__soc_top__DOT__u_dma__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__state))) {
            if (vlSelfRef.soc_top__DOT____Vcellinp__u_dma__bus_ready) {
                __Vdly__soc_top__DOT__u_dma__DOT__holding_reg 
                    = vlSelfRef.soc_top__DOT__mem_axi_rdata;
                vlSelfRef.soc_top__DOT__u_dma__DOT__bus_read = 0U;
                __Vdly__soc_top__DOT__u_dma__DOT__state = 3U;
            }
        } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__state))) {
            vlSelfRef.soc_top__DOT__u_dma__DOT__bus_addr 
                = vlSelfRef.soc_top__DOT__u_dma__DOT__dst_ptr;
            vlSelfRef.soc_top__DOT__u_dma__DOT__bus_write = 1U;
            __Vdly__soc_top__DOT__u_dma__DOT__state = 4U;
            vlSelfRef.soc_top__DOT__u_dma__DOT__bus_wdata 
                = ((IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__unpack_mode)
                    ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__unpack_cnt))
                        ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__unpack_cnt))
                            ? (vlSelfRef.soc_top__DOT__u_dma__DOT__holding_reg 
                               >> 0x18U) : (0xffU & 
                                            (vlSelfRef.soc_top__DOT__u_dma__DOT__holding_reg 
                                             >> 0x10U)))
                        : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__unpack_cnt))
                            ? (0xffU & (vlSelfRef.soc_top__DOT__u_dma__DOT__holding_reg 
                                        >> 8U)) : (0xffU 
                                                   & vlSelfRef.soc_top__DOT__u_dma__DOT__holding_reg)))
                    : vlSelfRef.soc_top__DOT__u_dma__DOT__holding_reg);
        } else if ((4U == (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__state))) {
            if (vlSelfRef.soc_top__DOT____Vcellinp__u_dma__bus_ready) {
                if (vlSelfRef.soc_top__DOT__u_dma__DOT__unpack_mode) {
                    if ((3U == (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__unpack_cnt))) {
                        __Vdly__soc_top__DOT__u_dma__DOT__src_ptr 
                            = ((IData)(4U) + vlSelfRef.soc_top__DOT__u_dma__DOT__src_ptr);
                        __Vdly__soc_top__DOT__u_dma__DOT__unpack_cnt = 0U;
                    } else {
                        __Vdly__soc_top__DOT__u_dma__DOT__unpack_cnt 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__unpack_cnt)));
                    }
                } else {
                    __Vdly__soc_top__DOT__u_dma__DOT__src_ptr 
                        = ((IData)(4U) + vlSelfRef.soc_top__DOT__u_dma__DOT__src_ptr);
                }
                if (((0x30000004U != vlSelfRef.soc_top__DOT__u_dma__DOT__dst_ptr) 
                     & (0x30000008U != vlSelfRef.soc_top__DOT__u_dma__DOT__dst_ptr))) {
                    __Vdly__soc_top__DOT__u_dma__DOT__dst_ptr 
                        = ((IData)(4U) + vlSelfRef.soc_top__DOT__u_dma__DOT__dst_ptr);
                }
                vlSelfRef.soc_top__DOT__u_dma__DOT__bus_write = 0U;
                if ((1U == (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__count))) {
                    vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy = 0U;
                    vlSelfRef.soc_top__DOT__u_dma__DOT__dma_done = 1U;
                    __Vdly__soc_top__DOT__u_dma__DOT__state = 0U;
                } else {
                    __Vdly__soc_top__DOT__u_dma__DOT__count 
                        = (0xffffU & ((IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__count) 
                                      - (IData)(1U)));
                    __Vdly__soc_top__DOT__u_dma__DOT__state 
                        = (((IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__unpack_mode) 
                            & (3U != (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__unpack_cnt)))
                            ? 3U : 1U);
                }
            }
        }
    } else {
        __Vdly__soc_top__DOT__u_dma__DOT__state = 0U;
        vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy = 0U;
        vlSelfRef.soc_top__DOT__u_dma__DOT__dma_done = 0U;
        vlSelfRef.soc_top__DOT__u_dma__DOT__bus_read = 0U;
        vlSelfRef.soc_top__DOT__u_dma__DOT__bus_write = 0U;
    }
    vlSelfRef.soc_top__DOT__u_dma__DOT__src_ptr = __Vdly__soc_top__DOT__u_dma__DOT__src_ptr;
    vlSelfRef.soc_top__DOT__u_dma__DOT__dst_ptr = __Vdly__soc_top__DOT__u_dma__DOT__dst_ptr;
    vlSelfRef.soc_top__DOT__u_dma__DOT__count = __Vdly__soc_top__DOT__u_dma__DOT__count;
    vlSelfRef.soc_top__DOT__u_dma__DOT__unpack_mode 
        = __Vdly__soc_top__DOT__u_dma__DOT__unpack_mode;
    vlSelfRef.soc_top__DOT__u_dma__DOT__unpack_cnt 
        = __Vdly__soc_top__DOT__u_dma__DOT__unpack_cnt;
    vlSelfRef.soc_top__DOT__u_dma__DOT__state = __Vdly__soc_top__DOT__u_dma__DOT__state;
    vlSelfRef.soc_top__DOT__u_dma__DOT__holding_reg 
        = __Vdly__soc_top__DOT__u_dma__DOT__holding_reg;
    vlSelfRef.soc_top__DOT__dma_done = vlSelfRef.soc_top__DOT__u_dma__DOT__dma_done;
    vlSelfRef.soc_top__DOT__dma_bus_wdata = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_wdata;
    vlSelfRef.soc_top__DOT__dma_bus_read = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_read;
    vlSelfRef.soc_top__DOT__dma_bus_write = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_write;
    vlSelfRef.soc_top__DOT__dma_bus_addr = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_addr;
    vlSelfRef.soc_top__DOT__mem_axi_awprot = ((IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy)
                                               ? 0U
                                               : (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awprot));
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_AWPROT 
        = vlSelfRef.soc_top__DOT__mem_axi_awprot;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_AWPROT 
        = vlSelfRef.soc_top__DOT__mem_axi_awprot;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.resetn) {
        if ((((IData)(vlSelfRef.soc_top__DOT__s2_axi_awvalid) 
              & (IData)(vlSelfRef.soc_top__DOT__s2_axi_wvalid)) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__s2_bvalid_reg)))) {
            vlSelfRef.__Vdly__soc_top__DOT__s2_bvalid_reg = 1U;
            if ((0U == (0xffU & vlSelfRef.soc_top__DOT__mem_axi_awaddr))) {
                vlSelfRef.soc_top__DOT__dma_src_addr 
                    = vlSelfRef.soc_top__DOT__mem_axi_wdata;
            }
            if ((4U == (0xffU & vlSelfRef.soc_top__DOT__mem_axi_awaddr))) {
                vlSelfRef.soc_top__DOT__dma_dst_addr 
                    = vlSelfRef.soc_top__DOT__mem_axi_wdata;
            }
            if ((8U == (0xffU & vlSelfRef.soc_top__DOT__mem_axi_awaddr))) {
                vlSelfRef.soc_top__DOT__dma_len = (0xffffU 
                                                   & vlSelfRef.soc_top__DOT__mem_axi_wdata);
            }
            if ((0xcU == (0xffU & vlSelfRef.soc_top__DOT__mem_axi_awaddr))) {
                vlSelfRef.soc_top__DOT__dma_mode = 
                    (1U & (vlSelfRef.soc_top__DOT__mem_axi_wdata 
                           >> 1U));
                vlSelfRef.__Vdly__soc_top__DOT__dma_start 
                    = (1U & vlSelfRef.soc_top__DOT__mem_axi_wdata);
            }
        } else if (((IData)(vlSelfRef.soc_top__DOT__s2_bvalid_reg) 
                    & (IData)(vlSelfRef.soc_top__DOT__s2_axi_bready))) {
            vlSelfRef.__Vdly__soc_top__DOT__s2_bvalid_reg = 0U;
        }
        if (((IData)(vlSelfRef.soc_top__DOT__dma_start) 
             & (IData)(vlSelfRef.soc_top__DOT__dma_busy))) {
            vlSelfRef.__Vdly__soc_top__DOT__dma_start = 0U;
        }
    } else {
        vlSelfRef.__Vdly__soc_top__DOT__dma_start = 0U;
        vlSelfRef.__Vdly__soc_top__DOT__s2_bvalid_reg = 0U;
    }
    vlSelfRef.soc_top__DOT__dma_start = vlSelfRef.__Vdly__soc_top__DOT__dma_start;
    vlSelfRef.soc_top__DOT__s2_bvalid_reg = vlSelfRef.__Vdly__soc_top__DOT__s2_bvalid_reg;
    vlSelfRef.soc_top__DOT__u_dma__DOT__cpu_src_addr 
        = vlSelfRef.soc_top__DOT__dma_src_addr;
    vlSelfRef.soc_top__DOT__u_dma__DOT__cpu_dst_addr 
        = vlSelfRef.soc_top__DOT__dma_dst_addr;
    vlSelfRef.soc_top__DOT__u_dma__DOT__cpu_transfer_len 
        = vlSelfRef.soc_top__DOT__dma_len;
    vlSelfRef.soc_top__DOT__u_dma__DOT__cpu_mode = vlSelfRef.soc_top__DOT__dma_mode;
    vlSelfRef.soc_top__DOT__u_dma__DOT__cpu_start = vlSelfRef.soc_top__DOT__dma_start;
    vlSelfRef.soc_top__DOT__s2_axi_bvalid = vlSelfRef.soc_top__DOT__s2_bvalid_reg;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __VdfgRegularize_hd87f99a1_1_0;
    __VdfgRegularize_hd87f99a1_1_0 = 0;
    // Body
    if (vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy) {
        vlSelfRef.soc_top__DOT__mem_axi_wstrb = 0xfU;
        vlSelfRef.soc_top__DOT__mem_axi_arprot = 0U;
        vlSelfRef.soc_top__DOT__mem_axi_wvalid = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_write;
        vlSelfRef.soc_top__DOT__mem_axi_awvalid = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_write;
        vlSelfRef.soc_top__DOT__mem_axi_arvalid = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_read;
        vlSelfRef.soc_top__DOT__mem_axi_wdata = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_wdata;
        vlSelfRef.soc_top__DOT__mem_axi_awaddr = vlSelfRef.soc_top__DOT__u_dma__DOT__bus_addr;
    } else {
        vlSelfRef.soc_top__DOT__mem_axi_wstrb = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wstrb;
        vlSelfRef.soc_top__DOT__mem_axi_arprot = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arprot;
        vlSelfRef.soc_top__DOT__mem_axi_wvalid = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wvalid;
        vlSelfRef.soc_top__DOT__mem_axi_awvalid = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awvalid;
        vlSelfRef.soc_top__DOT__mem_axi_arvalid = vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arvalid;
        vlSelfRef.soc_top__DOT__mem_axi_wdata = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wdata;
        vlSelfRef.soc_top__DOT__mem_axi_awaddr = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_addr;
    }
    vlSelfRef.soc_top__DOT__mem_axi_bready = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bready) 
                                              | (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy));
    vlSelfRef.soc_top__DOT__mem_axi_rready = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rready) 
                                              | (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy));
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_WSTRB 
        = vlSelfRef.soc_top__DOT__mem_axi_wstrb;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_WSTRB 
        = vlSelfRef.soc_top__DOT__mem_axi_wstrb;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_ARPROT 
        = vlSelfRef.soc_top__DOT__mem_axi_arprot;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ARPROT 
        = vlSelfRef.soc_top__DOT__mem_axi_arprot;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_WDATA 
        = vlSelfRef.soc_top__DOT__mem_axi_wdata;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_WDATA 
        = vlSelfRef.soc_top__DOT__mem_axi_wdata;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_AWADDR 
        = vlSelfRef.soc_top__DOT__mem_axi_awaddr;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_AWADDR 
        = (0xfU & (vlSelfRef.soc_top__DOT__mem_axi_awaddr 
                   >> 0U));
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ARADDR 
        = (0xfU & (vlSelfRef.soc_top__DOT__mem_axi_awaddr 
                   >> 0U));
    vlSelfRef.soc_top__DOT__mem_axi_araddr = vlSelfRef.soc_top__DOT__mem_axi_awaddr;
    __VdfgRegularize_hd87f99a1_1_0 = ((4U == (vlSelfRef.soc_top__DOT__mem_axi_awaddr 
                                              >> 0x1cU))
                                       ? 2U : ((3U 
                                                <= 
                                                (vlSelfRef.soc_top__DOT__mem_axi_awaddr 
                                                 >> 0x1cU))
                                                ? 1U
                                                : 0U));
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_ARADDR 
        = vlSelfRef.soc_top__DOT__mem_axi_araddr;
    vlSelfRef.soc_top__DOT__cur_w_route = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_awvalid)
                                            ? (IData)(__VdfgRegularize_hd87f99a1_1_0)
                                            : (IData)(vlSelfRef.soc_top__DOT__w_route));
    vlSelfRef.soc_top__DOT__cur_r_route = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_arvalid)
                                            ? (IData)(__VdfgRegularize_hd87f99a1_1_0)
                                            : (IData)(vlSelfRef.soc_top__DOT__r_route));
    vlSelfRef.soc_top__DOT__s2_axi_awvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_awvalid) 
                                              & (2U 
                                                 == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s2_axi_wvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_wvalid) 
                                             & (2U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s2_axi_bready = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_bready) 
                                             & (2U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s0_axi_awvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_awvalid) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s0_axi_wvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_wvalid) 
                                             & (0U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s0_axi_bready = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_bready) 
                                             & (0U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s1_axi_bready = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_bready) 
                                             & (1U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    if ((2U == (IData)(vlSelfRef.soc_top__DOT__cur_w_route))) {
        vlSelfRef.soc_top__DOT__cpu_axi_bresp = vlSelfRef.soc_top__DOT__s2_axi_bresp;
        vlSelfRef.soc_top__DOT__mem_axi_awready = vlSelfRef.soc_top__DOT__s2_axi_awready;
        vlSelfRef.soc_top__DOT__mem_axi_wready = vlSelfRef.soc_top__DOT__s2_axi_wready;
        vlSelfRef.soc_top__DOT__mem_axi_bvalid = vlSelfRef.soc_top__DOT__s2_bvalid_reg;
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__cur_w_route))) {
        vlSelfRef.soc_top__DOT__cpu_axi_bresp = vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_BRESP;
        vlSelfRef.soc_top__DOT__mem_axi_awready = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_awready;
        vlSelfRef.soc_top__DOT__mem_axi_wready = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_wready;
        vlSelfRef.soc_top__DOT__mem_axi_bvalid = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_bvalid;
    } else {
        vlSelfRef.soc_top__DOT__cpu_axi_bresp = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BRESP;
        vlSelfRef.soc_top__DOT__mem_axi_awready = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_AWREADY;
        vlSelfRef.soc_top__DOT__mem_axi_wready = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_WREADY;
        vlSelfRef.soc_top__DOT__mem_axi_bvalid = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BVALID;
    }
    vlSelfRef.soc_top__DOT__s1_axi_awvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_awvalid) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s1_axi_wvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_wvalid) 
                                             & (1U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_w_route)));
    vlSelfRef.soc_top__DOT__s2_axi_arvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_arvalid) 
                                              & (2U 
                                                 == (IData)(vlSelfRef.soc_top__DOT__cur_r_route)));
    vlSelfRef.soc_top__DOT__s2_axi_rready = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_rready) 
                                             & (2U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_r_route)));
    vlSelfRef.soc_top__DOT__s0_axi_arvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_arvalid) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.soc_top__DOT__cur_r_route)));
    vlSelfRef.soc_top__DOT__s1_axi_arvalid = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_arvalid) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.soc_top__DOT__cur_r_route)));
    vlSelfRef.soc_top__DOT__s0_axi_rready = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_rready) 
                                             & (0U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_r_route)));
    vlSelfRef.soc_top__DOT__s1_axi_rready = ((IData)(vlSelfRef.soc_top__DOT__mem_axi_rready) 
                                             & (1U 
                                                == (IData)(vlSelfRef.soc_top__DOT__cur_r_route)));
    if ((2U == (IData)(vlSelfRef.soc_top__DOT__cur_r_route))) {
        vlSelfRef.soc_top__DOT__cpu_axi_rresp = vlSelfRef.soc_top__DOT__s2_axi_rresp;
        vlSelfRef.soc_top__DOT__mem_axi_arready = vlSelfRef.soc_top__DOT__s2_axi_arready;
        vlSelfRef.soc_top__DOT__mem_axi_rvalid = vlSelfRef.soc_top__DOT__s2_rvalid_reg;
        vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata 
            = vlSelfRef.soc_top__DOT__s2_rdata_reg;
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__cur_r_route))) {
        vlSelfRef.soc_top__DOT__cpu_axi_rresp = vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_RRESP;
        vlSelfRef.soc_top__DOT__mem_axi_arready = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_arready;
        vlSelfRef.soc_top__DOT__mem_axi_rvalid = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rvalid;
        vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata 
            = vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_rdata;
    } else {
        vlSelfRef.soc_top__DOT__cpu_axi_rresp = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RRESP;
        vlSelfRef.soc_top__DOT__mem_axi_arready = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_ARREADY;
        vlSelfRef.soc_top__DOT__mem_axi_rvalid = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RVALID;
        vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata 
            = vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RDATA;
    }
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_AWVALID 
        = vlSelfRef.soc_top__DOT__s0_axi_awvalid;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_WVALID 
        = vlSelfRef.soc_top__DOT__s0_axi_wvalid;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_BREADY 
        = vlSelfRef.soc_top__DOT__s0_axi_bready;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_BREADY 
        = vlSelfRef.soc_top__DOT__s1_axi_bready;
    vlSelfRef.soc_top__DOT__mem_axi_bresp = vlSelfRef.soc_top__DOT__cpu_axi_bresp;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_AWVALID 
        = vlSelfRef.soc_top__DOT__s1_axi_awvalid;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_WVALID 
        = vlSelfRef.soc_top__DOT__s1_axi_wvalid;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__slv_reg_wren 
        = ((IData)(vlSelfRef.soc_top__DOT__s1_axi_wvalid) 
           & ((IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_wready) 
              & ((IData)(vlSelfRef.soc_top__DOT__s1_axi_awvalid) 
                 & (IData)(vlSelfRef.soc_top__DOT__s1_mac__DOT__axi_awready))));
    vlSelfRef.soc_top__DOT__cpu_axi_awready = ((~ (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy)) 
                                               & (IData)(vlSelfRef.soc_top__DOT__mem_axi_awready));
    vlSelfRef.soc_top__DOT__cpu_axi_wready = ((~ (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy)) 
                                              & (IData)(vlSelfRef.soc_top__DOT__mem_axi_wready));
    vlSelfRef.soc_top__DOT__cpu_axi_bvalid = ((~ (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy)) 
                                              & (IData)(vlSelfRef.soc_top__DOT__mem_axi_bvalid));
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_ARVALID 
        = vlSelfRef.soc_top__DOT__s0_axi_arvalid;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_ARVALID 
        = vlSelfRef.soc_top__DOT__s1_axi_arvalid;
    vlSelfRef.soc_top__DOT__s0_ram__DOT__S_AXI_RREADY 
        = vlSelfRef.soc_top__DOT__s0_axi_rready;
    vlSelfRef.soc_top__DOT__s1_mac__DOT__S_AXI_RREADY 
        = vlSelfRef.soc_top__DOT__s1_axi_rready;
    vlSelfRef.soc_top__DOT__mem_axi_rresp = vlSelfRef.soc_top__DOT__cpu_axi_rresp;
    vlSelfRef.soc_top__DOT__cpu_axi_arready = ((~ (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy)) 
                                               & (IData)(vlSelfRef.soc_top__DOT__mem_axi_arready));
    vlSelfRef.soc_top__DOT____Vcellinp__u_dma__bus_ready 
        = (((IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__bus_read) 
            & (IData)(vlSelfRef.soc_top__DOT__mem_axi_rvalid)) 
           | ((IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__bus_write) 
              & (IData)(vlSelfRef.soc_top__DOT__mem_axi_bvalid)));
    vlSelfRef.soc_top__DOT__cpu_axi_rvalid = ((~ (IData)(vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy)) 
                                              & (IData)(vlSelfRef.soc_top__DOT__mem_axi_rvalid));
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_rdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_rdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata;
    if ((0U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_word 
            = vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize))) {
        if ((2U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)) {
            if ((2U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)) {
                vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_word 
                    = (vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata 
                       >> 0x10U);
            }
        } else {
            vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_word 
                = (0xffffU & vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata);
        }
    } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)
                ? ((1U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)
                    ? (vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata 
                       >> 0x18U) : (0xffU & (vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata 
                                             >> 0x10U)))
                : ((1U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__reg_op1)
                    ? (0xffU & (vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata 
                                >> 8U)) : (0xffU & vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata)));
    }
    vlSelfRef.soc_top__DOT__mem_axi_rdata = vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata;
    vlSelfRef.soc_top__DOT__cpu_axi_rdata = vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_awready 
        = vlSelfRef.soc_top__DOT__cpu_axi_awready;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_wready 
        = vlSelfRef.soc_top__DOT__cpu_axi_wready;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bvalid 
        = vlSelfRef.soc_top__DOT__cpu_axi_bvalid;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arready 
        = vlSelfRef.soc_top__DOT__cpu_axi_arready;
    vlSelfRef.soc_top__DOT__u_dma__DOT__bus_ready = vlSelfRef.soc_top__DOT____Vcellinp__u_dma__bus_ready;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rvalid 
        = vlSelfRef.soc_top__DOT__cpu_axi_rvalid;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_ready = ((IData)(vlSelfRef.soc_top__DOT__cpu_axi_bvalid) 
                                                   | (IData)(vlSelfRef.soc_top__DOT__cpu_axi_rvalid));
    vlSelfRef.soc_top__DOT__u_dma__DOT__bus_rdata = vlSelfRef.soc_top__DOT__mem_axi_rdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rdata 
        = vlSelfRef.soc_top__DOT__cpu_axi_rdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_awready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_awready;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_wready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_wready;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_bvalid 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_bvalid;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_arready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_arready;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_rvalid 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rvalid;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_ready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_ready;
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_ready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_ready;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__dbg_mem_ready 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_ready;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_xfer 
        = (((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__mem_ready) 
            & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_valid)) 
           | ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
              & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word)));
    vlSelfRef.soc_top__DOT__cpu__DOT__axi_adapter__DOT__mem_axi_rdata 
        = vlSelfRef.soc_top__DOT__cpu__DOT__mem_axi_rdata;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_xfer)
            ? vlSelfRef.soc_top__DOT__cpu__DOT__mem_rdata
            : vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_q);
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle 
        = vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched;
    vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_done 
        = ((IData)(vlSelfRef.soc_top__DOT__cpu_resetn) 
           & ((((IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_xfer) 
                & ((0U != (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state)) 
                   & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT____VdfgRegularize_h50a03892_0_0))) 
               | ((3U == (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_state)) 
                  & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_do_rinst))) 
              & ((~ (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_la_firstword)) 
                 | ((~ (IData)((3U == (3U & vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_rdata_latched)))) 
                    & (IData)(vlSelfRef.soc_top__DOT__cpu__DOT__picorv32_core__DOT__mem_xfer)))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__dma_busy = vlSelfRef.soc_top__DOT__u_dma__DOT__dma_busy;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/hex/Desktop/INT_ACCEL/sim/../rtl/mac/soc_top.v", 13, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/hex/Desktop/INT_ACCEL/sim/../rtl/mac/soc_top.v", 13, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/hex/Desktop/INT_ACCEL/sim/../rtl/mac/soc_top.v", 13, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.resetn & 0xfeU)))) {
        Verilated::overWidthError("resetn");}
}
#endif  // VL_DEBUG
