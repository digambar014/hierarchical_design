// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_module.h for the primary calling header

#include "verilated.h"

#include "Vtb_top_module__Syms.h"
#include "Vtb_top_module___024root.h"

VlCoroutine Vtb_top_module___024root___eval_initial__TOP__0(Vtb_top_module___024root* vlSelf);
VlCoroutine Vtb_top_module___024root___eval_initial__TOP__1(Vtb_top_module___024root* vlSelf);

void Vtb_top_module___024root___eval_initial(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_initial\n"); );
    // Body
    Vtb_top_module___024root___eval_initial__TOP__0(vlSelf);
    Vtb_top_module___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_top_module__DOT__clk__0 
        = vlSelf->tb_top_module__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_module__DOT__rst__0 
        = vlSelf->tb_top_module__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtb_top_module___024root___eval_initial__TOP__1(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb_top_module.v", 
                                           10);
        vlSelf->__Vdlyvval__tb_top_module__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->tb_top_module__DOT__clk)));
        vlSelf->__Vdlyvset__tb_top_module__DOT__clk__v0 = 1U;
    }
}

void Vtb_top_module___024root___eval_act(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_top_module___024root___nba_sequent__TOP__0(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__tb_top_module__DOT__dut__DOT__count;
    __Vdly__tb_top_module__DOT__dut__DOT__count = 0;
    // Body
    __Vdly__tb_top_module__DOT__dut__DOT__count = vlSelf->tb_top_module__DOT__dut__DOT__count;
    if (vlSelf->tb_top_module__DOT__rst) {
        __Vdly__tb_top_module__DOT__dut__DOT__count = 0U;
    } else if (vlSelf->tb_top_module__DOT__en) {
        __Vdly__tb_top_module__DOT__dut__DOT__count 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_top_module__DOT__dut__DOT__count)));
    }
    vlSelf->tb_top_module__DOT__dut__DOT__count = __Vdly__tb_top_module__DOT__dut__DOT__count;
}

VL_INLINE_OPT void Vtb_top_module___024root___nba_sequent__TOP__1(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_top_module__DOT__clk__v0) {
        vlSelf->tb_top_module__DOT__clk = vlSelf->__Vdlyvval__tb_top_module__DOT__clk__v0;
        vlSelf->__Vdlyvset__tb_top_module__DOT__clk__v0 = 0U;
    }
}

void Vtb_top_module___024root___eval_nba(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_top_module___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_top_module___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtb_top_module___024root___eval_triggers__act(Vtb_top_module___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_module___024root___dump_triggers__act(Vtb_top_module___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_top_module___024root___timing_resume(Vtb_top_module___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_module___024root___dump_triggers__nba(Vtb_top_module___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top_module___024root___eval(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_top_module___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_top_module___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_top_module.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtb_top_module___024root___timing_resume(vlSelf);
                Vtb_top_module___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_top_module___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_top_module.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_top_module___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_top_module___024root___timing_resume(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtb_top_module___024root___eval_debug_assertions(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
