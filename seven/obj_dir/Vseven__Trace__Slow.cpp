// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vseven__Syms.h"


//======================

void Vseven::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vseven::traceInit, &Vseven::traceFull, &Vseven::traceChg, this);
}
void Vseven::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vseven* t=(Vseven*)userthis;
    Vseven__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vseven::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vseven* t=(Vseven*)userthis;
    Vseven__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vseven::traceInitThis(Vseven__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vseven* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vseven::traceFullThis(Vseven__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vseven* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vseven::traceInitThis__1(Vseven__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vseven* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBus  (c+3,"SW",-1,3,0);
	vcdp->declBit  (c+4,"CLK",-1);
	vcdp->declBus  (c+5,"SSEG_CA",-1,7,0);
	vcdp->declBus  (c+6,"SSEG_AN",-1,7,0);
	vcdp->declBus  (c+7,"LED",-1,3,0);
	vcdp->declBus  (c+3,"seven SW",-1,3,0);
	vcdp->declBit  (c+4,"seven CLK",-1);
	vcdp->declBus  (c+5,"seven SSEG_CA",-1,7,0);
	vcdp->declBus  (c+6,"seven SSEG_AN",-1,7,0);
	vcdp->declBus  (c+7,"seven LED",-1,3,0);
	vcdp->declBit  (c+1,"seven Clk_Slow",-1);
	vcdp->declBit  (c+4,"seven S1 CLK",-1);
	vcdp->declBit  (c+1,"seven S1 Clk_Slow",-1);
	vcdp->declBus  (c+2,"seven S1 counter_out",-1,31,0);
    }
}

void Vseven::traceFullThis__1(Vseven__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vseven* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->seven__DOT__Clk_Slow));
	vcdp->fullBus  (c+2,(vlTOPp->seven__DOT__S1__DOT__counter_out),32);
	vcdp->fullBus  (c+3,(vlTOPp->SW),4);
	vcdp->fullBit  (c+4,(vlTOPp->CLK));
	vcdp->fullBus  (c+5,(vlTOPp->SSEG_CA),8);
	vcdp->fullBus  (c+6,(vlTOPp->SSEG_AN),8);
	vcdp->fullBus  (c+7,(vlTOPp->LED),4);
    }
}
