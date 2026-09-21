// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top_module.h for the primary calling header

#ifndef VERILATED_VTB_TOP_MODULE___024ROOT_H_
#define VERILATED_VTB_TOP_MODULE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_top_module__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_module___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_top_module__DOT__clk;
    CData/*0:0*/ tb_top_module__DOT__rst;
    CData/*0:0*/ tb_top_module__DOT__en;
    CData/*7:0*/ tb_top_module__DOT__dut__DOT__count;
    CData/*0:0*/ __Vdlyvval__tb_top_module__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__tb_top_module__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_module__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top_module__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_top_module__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top_module___024root(Vtb_top_module__Syms* symsp, const char* v__name);
    ~Vtb_top_module___024root();
    VL_UNCOPYABLE(Vtb_top_module___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
