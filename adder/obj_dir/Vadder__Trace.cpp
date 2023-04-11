// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadder__Syms.h"


//======================

void Vadder::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vadder* t=(Vadder*)userthis;
    Vadder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vadder::traceChgThis(Vadder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vadder::traceChgThis__2(Vadder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->a));
	vcdp->chgBit  (c+2,(vlTOPp->b));
	vcdp->chgBit  (c+3,(vlTOPp->cin));
	vcdp->chgBit  (c+4,(vlTOPp->sum));
	vcdp->chgBit  (c+5,(vlTOPp->cout));
    }
}
