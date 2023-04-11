// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadder__Syms.h"


//======================

void Vadder::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vadder::traceInit, &Vadder::traceFull, &Vadder::traceChg, this);
}
void Vadder::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vadder* t=(Vadder*)userthis;
    Vadder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vadder::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vadder* t=(Vadder*)userthis;
    Vadder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vadder::traceInitThis(Vadder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vadder::traceFullThis(Vadder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vadder::traceInitThis__1(Vadder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"a",-1);
	vcdp->declBit  (c+2,"b",-1);
	vcdp->declBit  (c+3,"cin",-1);
	vcdp->declBit  (c+4,"sum",-1);
	vcdp->declBit  (c+5,"cout",-1);
	vcdp->declBit  (c+1,"adder a",-1);
	vcdp->declBit  (c+2,"adder b",-1);
	vcdp->declBit  (c+3,"adder cin",-1);
	vcdp->declBit  (c+4,"adder sum",-1);
	vcdp->declBit  (c+5,"adder cout",-1);
    }
}

void Vadder::traceFullThis__1(Vadder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->a));
	vcdp->fullBit  (c+2,(vlTOPp->b));
	vcdp->fullBit  (c+3,(vlTOPp->cin));
	vcdp->fullBit  (c+4,(vlTOPp->sum));
	vcdp->fullBit  (c+5,(vlTOPp->cout));
    }
}
