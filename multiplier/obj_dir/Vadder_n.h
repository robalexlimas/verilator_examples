// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vadder_n_H_
#define _Vadder_n_H_

#include "verilated.h"

class Vadder_n__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vadder_n) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(cin,0,0);
    VL_OUT8(sum,7,0);
    VL_OUT8(cout,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG16(adder_n__DOT__cout_wire,8,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(adder_n__DOT__genblk1__BRA__0__KET____DOT____Vcellout__full_adder__cout,0,0);
    VL_SIG8(adder_n__DOT__genblk1__BRA__1__KET____DOT____Vcellout__full_adder__cout,0,0);
    VL_SIG8(adder_n__DOT__genblk1__BRA__2__KET____DOT____Vcellout__full_adder__cout,0,0);
    VL_SIG8(adder_n__DOT__genblk1__BRA__3__KET____DOT____Vcellout__full_adder__cout,0,0);
    VL_SIG8(adder_n__DOT__genblk1__BRA__4__KET____DOT____Vcellout__full_adder__cout,0,0);
    VL_SIG8(adder_n__DOT__genblk1__BRA__5__KET____DOT____Vcellout__full_adder__cout,0,0);
    VL_SIG8(adder_n__DOT__genblk1__BRA__6__KET____DOT____Vcellout__full_adder__cout,0,0);
    VL_SIG8(adder_n__DOT__genblk1__BRA__7__KET____DOT____Vcellout__full_adder__cout,0,0);
    VL_SIG16(__Vchglast__TOP__adder_n__DOT__cout_wire,8,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vadder_n__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vadder_n& operator= (const Vadder_n&);  ///< Copying not allowed
    Vadder_n(const Vadder_n&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vadder_n(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vadder_n();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vadder_n__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vadder_n__Syms* symsp, bool first);
  private:
    static QData _change_request(Vadder_n__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vadder_n__Syms* __restrict vlSymsp);
    static void _combo__TOP__3(Vadder_n__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vadder_n__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _eval(Vadder_n__Syms* __restrict vlSymsp);
    static void _eval_initial(Vadder_n__Syms* __restrict vlSymsp);
    static void _eval_settle(Vadder_n__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vadder_n__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vadder_n__Syms* __restrict vlSymsp);
    static void traceChgThis(Vadder_n__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vadder_n__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vadder_n__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vadder_n__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vadder_n__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vadder_n__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vadder_n__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
