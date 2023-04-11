// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vseven__Syms.h"


//======================

void Vseven::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vseven* t=(Vseven*)userthis;
    Vseven__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vseven::traceChgThis(Vseven__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vseven* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vseven::traceChgThis__2(Vseven__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vseven* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->seven__DOT__Clk_Slow));
	vcdp->chgBus  (c+2,(vlTOPp->seven__DOT__S1__DOT__counter_out),32);
    }
}

void Vseven::traceChgThis__3(Vseven__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vseven* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+3,(vlTOPp->SW),4);
	vcdp->chgBit  (c+4,(vlTOPp->CLK));
	vcdp->chgBus  (c+5,(vlTOPp->SSEG_CA),8);
	vcdp->chgBus  (c+6,(vlTOPp->SSEG_AN),8);
	vcdp->chgBus  (c+7,(vlTOPp->LED),4);
    }
}
