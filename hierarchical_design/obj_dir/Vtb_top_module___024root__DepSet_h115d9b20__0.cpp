// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_module.h for the primary calling header

#include "verilated.h"

#include "Vtb_top_module__Syms.h"
#include "Vtb_top_module__Syms.h"
#include "Vtb_top_module___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_top_module___024root___eval_initial__TOP__0(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xcULL, nullptr, 
                                       "tb_top_module.v", 
                                       24);
    vlSelf->tb_top_module__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_top_module.v", 
                                       26);
    vlSelf->tb_top_module__DOT__en = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "tb_top_module.v", 
                                       27);
    vlSelf->tb_top_module__DOT__en = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb_top_module.v", 
                                       28);
    VL_FINISH_MT("tb_top_module.v", 28, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_module___024root___dump_triggers__act(Vtb_top_module___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top_module___024root___eval_triggers__act(Vtb_top_module___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_module__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_module___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_top_module__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_top_module__DOT__clk__0))) 
                                     | ((IData)(vlSelf->tb_top_module__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_top_module__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_top_module__DOT__clk__0 
        = vlSelf->tb_top_module__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_top_module__DOT__rst__0 
        = vlSelf->tb_top_module__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top_module___024root___dump_triggers__act(vlSelf);
    }
#endif
}
