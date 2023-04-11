// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vseven_H_
#define _Vseven_H_

#include "verilated.h"

class Vseven__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vseven) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(CLK,0,0);
    VL_IN8(SW,3,0);
    VL_OUT8(SSEG_CA,7,0);
    VL_OUT8(SSEG_AN,7,0);
    VL_OUT8(LED,3,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(seven__DOT__Clk_Slow,0,0);
    VL_SIG(seven__DOT__S1__DOT__counter_out,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_SSEG_CA[4096],7,0);
    static VL_ST_SIG8(__Vtable1_LED[4096],3,0);
    static VL_ST_SIG8(__Vtable1_SSEG_AN[4096],7,0);
    VL_SIG8(__VinpClk__TOP__seven__DOT__Clk_Slow,0,0);
    VL_SIG8(__Vclklast__TOP__CLK,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__seven__DOT__Clk_Slow,0,0);
    VL_SIG8(__Vchglast__TOP__seven__DOT__Clk_Slow,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vseven__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vseven& operator= (const Vseven&);  ///< Copying not allowed
    Vseven(const Vseven&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vseven(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vseven();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vseven__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vseven__Syms* symsp, bool first);
  private:
    static QData _change_request(Vseven__Syms* __restrict vlSymsp);
    void _configure_coverage(Vseven__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _eval(Vseven__Syms* __restrict vlSymsp);
    static void _eval_initial(Vseven__Syms* __restrict vlSymsp);
    static void _eval_settle(Vseven__Syms* __restrict vlSymsp);
    static void _initial__TOP__2(Vseven__Syms* __restrict vlSymsp);
    static void _initial__TOP__4(Vseven__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vseven__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vseven__Syms* __restrict vlSymsp);
    static void traceChgThis(Vseven__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vseven__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vseven__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vseven__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vseven__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vseven__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vseven__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
