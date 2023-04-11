// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vadder_H_
#define _Vadder_H_

#include "verilated.h"

class Vadder__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vadder) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(cin,0,0);
    VL_OUT8(sum,0,0);
    VL_OUT8(cout,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vadder__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vadder& operator= (const Vadder&);  ///< Copying not allowed
    Vadder(const Vadder&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vadder(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vadder();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vadder__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vadder__Syms* symsp, bool first);
  private:
    static QData _change_request(Vadder__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vadder__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vadder__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _eval(Vadder__Syms* __restrict vlSymsp);
    static void _eval_initial(Vadder__Syms* __restrict vlSymsp);
    static void _eval_settle(Vadder__Syms* __restrict vlSymsp);
    static void traceChgThis(Vadder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vadder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vadder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(Vadder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(Vadder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(Vadder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
