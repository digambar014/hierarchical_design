// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_module.h for the primary calling header

#include "verilated.h"

#include "Vtb_top_module__Syms.h"
#include "Vtb_top_module___024root.h"

VL_ATTR_COLD void Vtb_top_module___024root___eval_static__TOP(Vtb_top_module___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_module___024root___eval_static(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_static\n"); );
    // Body
    Vtb_top_module___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_top_module___024root___eval_static__TOP(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_top_module__DOT__clk = 0U;
    vlSelf->tb_top_module__DOT__rst = 1U;
    vlSelf->tb_top_module__DOT__en = 0U;
}

VL_ATTR_COLD void Vtb_top_module___024root___eval_final(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_top_module___024root___eval_settle(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_module___024root___dump_triggers__act(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_top_module.clk or posedge tb_top_module.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_module___024root___dump_triggers__nba(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_top_module.clk or posedge tb_top_module.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top_module___024root___ctor_var_reset(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_top_module__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_top_module__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_top_module__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->tb_top_module__DOT__dut__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tb_top_module__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__tb_top_module__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_module__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_top_module__DOT__rst__0 = VL_RAND_RESET_I(1);
}
