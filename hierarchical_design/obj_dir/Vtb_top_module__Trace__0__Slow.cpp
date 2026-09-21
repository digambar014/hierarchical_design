// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_top_module__Syms.h"


VL_ATTR_COLD void Vtb_top_module___024root__trace_init_sub__TOP__0(Vtb_top_module___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_top_module ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+6,"ext_input", false,-1, 7,0);
    tracep->declBus(c+4,"result", false,-1, 7,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+6,"ext_input", false,-1, 7,0);
    tracep->declBus(c+4,"result", false,-1, 7,0);
    tracep->declBus(c+5,"count", false,-1, 7,0);
    tracep->pushNamePrefix("u_adder ");
    tracep->declBus(c+7,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+5,"a", false,-1, 7,0);
    tracep->declBus(c+6,"b", false,-1, 7,0);
    tracep->declBus(c+4,"sum", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_counter ");
    tracep->declBus(c+7,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+5,"count", false,-1, 7,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtb_top_module___024root__trace_init_top(Vtb_top_module___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root__trace_init_top\n"); );
    // Body
    Vtb_top_module___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_top_module___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top_module___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top_module___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_top_module___024root__trace_register(Vtb_top_module___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_top_module___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_top_module___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_top_module___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_top_module___024root__trace_full_sub_0(Vtb_top_module___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top_module___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root__trace_full_top_0\n"); );
    // Init
    Vtb_top_module___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top_module___024root*>(voidSelf);
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_top_module___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top_module___024root__trace_full_sub_0(Vtb_top_module___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_top_module__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->tb_top_module__DOT__rst));
    bufp->fullBit(oldp+3,(vlSelf->tb_top_module__DOT__en));
    bufp->fullCData(oldp+4,((0xffU & ((IData)(0xaU) 
                                      + (IData)(vlSelf->tb_top_module__DOT__dut__DOT__count)))),8);
    bufp->fullCData(oldp+5,(vlSelf->tb_top_module__DOT__dut__DOT__count),8);
    bufp->fullCData(oldp+6,(0xaU),8);
    bufp->fullIData(oldp+7,(8U),32);
}
