// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadder_n__Syms.h"


//======================

void Vadder_n::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vadder_n::traceInit, &Vadder_n::traceFull, &Vadder_n::traceChg, this);
}
void Vadder_n::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vadder_n* t=(Vadder_n*)userthis;
    Vadder_n__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vadder_n::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vadder_n* t=(Vadder_n*)userthis;
    Vadder_n__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vadder_n::traceInitThis(Vadder_n__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vadder_n::traceFullThis(Vadder_n__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vadder_n::traceInitThis__1(Vadder_n__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBus  (c+10,"a",-1,7,0);
	vcdp->declBus  (c+11,"b",-1,7,0);
	vcdp->declBit  (c+12,"cin",-1);
	vcdp->declBus  (c+13,"sum",-1,7,0);
	vcdp->declBit  (c+14,"cout",-1);
	vcdp->declBus  (c+47,"adder_n n",-1,31,0);
	vcdp->declBus  (c+10,"adder_n a",-1,7,0);
	vcdp->declBus  (c+11,"adder_n b",-1,7,0);
	vcdp->declBit  (c+12,"adder_n cin",-1);
	vcdp->declBus  (c+13,"adder_n sum",-1,7,0);
	vcdp->declBit  (c+14,"adder_n cout",-1);
	vcdp->declBus  (c+1,"adder_n cout_wire",-1,8,0);
	// Tracing: adder_n i // Ignored: Verilator trace_off at adder_n.v:16
	vcdp->declBit  (c+15,"adder_n genblk1[0] full_adder a",-1);
	vcdp->declBit  (c+16,"adder_n genblk1[0] full_adder b",-1);
	vcdp->declBit  (c+2,"adder_n genblk1[0] full_adder cin",-1);
	vcdp->declBit  (c+17,"adder_n genblk1[0] full_adder sum",-1);
	vcdp->declBit  (c+18,"adder_n genblk1[0] full_adder cout",-1);
	vcdp->declBit  (c+19,"adder_n genblk1[1] full_adder a",-1);
	vcdp->declBit  (c+20,"adder_n genblk1[1] full_adder b",-1);
	vcdp->declBit  (c+3,"adder_n genblk1[1] full_adder cin",-1);
	vcdp->declBit  (c+21,"adder_n genblk1[1] full_adder sum",-1);
	vcdp->declBit  (c+22,"adder_n genblk1[1] full_adder cout",-1);
	vcdp->declBit  (c+23,"adder_n genblk1[2] full_adder a",-1);
	vcdp->declBit  (c+24,"adder_n genblk1[2] full_adder b",-1);
	vcdp->declBit  (c+4,"adder_n genblk1[2] full_adder cin",-1);
	vcdp->declBit  (c+25,"adder_n genblk1[2] full_adder sum",-1);
	vcdp->declBit  (c+26,"adder_n genblk1[2] full_adder cout",-1);
	vcdp->declBit  (c+27,"adder_n genblk1[3] full_adder a",-1);
	vcdp->declBit  (c+28,"adder_n genblk1[3] full_adder b",-1);
	vcdp->declBit  (c+5,"adder_n genblk1[3] full_adder cin",-1);
	vcdp->declBit  (c+29,"adder_n genblk1[3] full_adder sum",-1);
	vcdp->declBit  (c+30,"adder_n genblk1[3] full_adder cout",-1);
	vcdp->declBit  (c+31,"adder_n genblk1[4] full_adder a",-1);
	vcdp->declBit  (c+32,"adder_n genblk1[4] full_adder b",-1);
	vcdp->declBit  (c+6,"adder_n genblk1[4] full_adder cin",-1);
	vcdp->declBit  (c+33,"adder_n genblk1[4] full_adder sum",-1);
	vcdp->declBit  (c+34,"adder_n genblk1[4] full_adder cout",-1);
	vcdp->declBit  (c+35,"adder_n genblk1[5] full_adder a",-1);
	vcdp->declBit  (c+36,"adder_n genblk1[5] full_adder b",-1);
	vcdp->declBit  (c+7,"adder_n genblk1[5] full_adder cin",-1);
	vcdp->declBit  (c+37,"adder_n genblk1[5] full_adder sum",-1);
	vcdp->declBit  (c+38,"adder_n genblk1[5] full_adder cout",-1);
	vcdp->declBit  (c+39,"adder_n genblk1[6] full_adder a",-1);
	vcdp->declBit  (c+40,"adder_n genblk1[6] full_adder b",-1);
	vcdp->declBit  (c+8,"adder_n genblk1[6] full_adder cin",-1);
	vcdp->declBit  (c+41,"adder_n genblk1[6] full_adder sum",-1);
	vcdp->declBit  (c+42,"adder_n genblk1[6] full_adder cout",-1);
	vcdp->declBit  (c+43,"adder_n genblk1[7] full_adder a",-1);
	vcdp->declBit  (c+44,"adder_n genblk1[7] full_adder b",-1);
	vcdp->declBit  (c+9,"adder_n genblk1[7] full_adder cin",-1);
	vcdp->declBit  (c+45,"adder_n genblk1[7] full_adder sum",-1);
	vcdp->declBit  (c+46,"adder_n genblk1[7] full_adder cout",-1);
    }
}

void Vadder_n::traceFullThis__1(Vadder_n__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->adder_n__DOT__cout_wire),9);
	vcdp->fullBit  (c+2,((1U & (IData)(vlTOPp->adder_n__DOT__cout_wire))));
	vcdp->fullBit  (c+3,((1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				    >> 1U))));
	vcdp->fullBit  (c+4,((1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				    >> 2U))));
	vcdp->fullBit  (c+5,((1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				    >> 3U))));
	vcdp->fullBit  (c+6,((1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				    >> 4U))));
	vcdp->fullBit  (c+7,((1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				    >> 5U))));
	vcdp->fullBit  (c+8,((1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				    >> 6U))));
	vcdp->fullBit  (c+9,((1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				    >> 7U))));
	vcdp->fullBus  (c+10,(vlTOPp->a),8);
	vcdp->fullBus  (c+11,(vlTOPp->b),8);
	vcdp->fullBit  (c+12,(vlTOPp->cin));
	vcdp->fullBus  (c+13,(vlTOPp->sum),8);
	vcdp->fullBit  (c+14,(vlTOPp->cout));
	vcdp->fullBit  (c+15,((1U & (IData)(vlTOPp->a))));
	vcdp->fullBit  (c+16,((1U & (IData)(vlTOPp->b))));
	vcdp->fullBit  (c+17,((1U & (((IData)(vlTOPp->a) 
				      ^ (IData)(vlTOPp->b)) 
				     ^ (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
	vcdp->fullBit  (c+18,((1U & ((((IData)(vlTOPp->a) 
				       & (IData)(vlTOPp->b)) 
				      | ((IData)(vlTOPp->b) 
					 & (IData)(vlTOPp->adder_n__DOT__cout_wire))) 
				     | ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					& (IData)(vlTOPp->a))))));
	vcdp->fullBit  (c+19,((1U & ((IData)(vlTOPp->a) 
				     >> 1U))));
	vcdp->fullBit  (c+20,((1U & ((IData)(vlTOPp->b) 
				     >> 1U))));
	vcdp->fullBit  (c+21,((1U & ((((IData)(vlTOPp->a) 
				       ^ (IData)(vlTOPp->b)) 
				      >> 1U) ^ ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						>> 1U)))));
	vcdp->fullBit  (c+22,((1U & (((((IData)(vlTOPp->a) 
					& (IData)(vlTOPp->b)) 
				       >> 1U) | (((IData)(vlTOPp->b) 
						  >> 1U) 
						 & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						    >> 1U))) 
				     | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					 >> 1U) & ((IData)(vlTOPp->a) 
						   >> 1U))))));
	vcdp->fullBit  (c+23,((1U & ((IData)(vlTOPp->a) 
				     >> 2U))));
	vcdp->fullBit  (c+24,((1U & ((IData)(vlTOPp->b) 
				     >> 2U))));
	vcdp->fullBit  (c+25,((1U & ((((IData)(vlTOPp->a) 
				       ^ (IData)(vlTOPp->b)) 
				      >> 2U) ^ ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						>> 2U)))));
	vcdp->fullBit  (c+26,((1U & (((((IData)(vlTOPp->a) 
					& (IData)(vlTOPp->b)) 
				       >> 2U) | (((IData)(vlTOPp->b) 
						  >> 2U) 
						 & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						    >> 2U))) 
				     | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					 >> 2U) & ((IData)(vlTOPp->a) 
						   >> 2U))))));
	vcdp->fullBit  (c+27,((1U & ((IData)(vlTOPp->a) 
				     >> 3U))));
	vcdp->fullBit  (c+28,((1U & ((IData)(vlTOPp->b) 
				     >> 3U))));
	vcdp->fullBit  (c+29,((1U & ((((IData)(vlTOPp->a) 
				       ^ (IData)(vlTOPp->b)) 
				      >> 3U) ^ ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						>> 3U)))));
	vcdp->fullBit  (c+30,((1U & (((((IData)(vlTOPp->a) 
					& (IData)(vlTOPp->b)) 
				       >> 3U) | (((IData)(vlTOPp->b) 
						  >> 3U) 
						 & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						    >> 3U))) 
				     | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					 >> 3U) & ((IData)(vlTOPp->a) 
						   >> 3U))))));
	vcdp->fullBit  (c+31,((1U & ((IData)(vlTOPp->a) 
				     >> 4U))));
	vcdp->fullBit  (c+32,((1U & ((IData)(vlTOPp->b) 
				     >> 4U))));
	vcdp->fullBit  (c+33,((1U & ((((IData)(vlTOPp->a) 
				       ^ (IData)(vlTOPp->b)) 
				      >> 4U) ^ ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						>> 4U)))));
	vcdp->fullBit  (c+34,((1U & (((((IData)(vlTOPp->a) 
					& (IData)(vlTOPp->b)) 
				       >> 4U) | (((IData)(vlTOPp->b) 
						  >> 4U) 
						 & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						    >> 4U))) 
				     | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					 >> 4U) & ((IData)(vlTOPp->a) 
						   >> 4U))))));
	vcdp->fullBit  (c+35,((1U & ((IData)(vlTOPp->a) 
				     >> 5U))));
	vcdp->fullBit  (c+36,((1U & ((IData)(vlTOPp->b) 
				     >> 5U))));
	vcdp->fullBit  (c+37,((1U & ((((IData)(vlTOPp->a) 
				       ^ (IData)(vlTOPp->b)) 
				      >> 5U) ^ ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						>> 5U)))));
	vcdp->fullBit  (c+38,((1U & (((((IData)(vlTOPp->a) 
					& (IData)(vlTOPp->b)) 
				       >> 5U) | (((IData)(vlTOPp->b) 
						  >> 5U) 
						 & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						    >> 5U))) 
				     | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					 >> 5U) & ((IData)(vlTOPp->a) 
						   >> 5U))))));
	vcdp->fullBit  (c+39,((1U & ((IData)(vlTOPp->a) 
				     >> 6U))));
	vcdp->fullBit  (c+40,((1U & ((IData)(vlTOPp->b) 
				     >> 6U))));
	vcdp->fullBit  (c+41,((1U & ((((IData)(vlTOPp->a) 
				       ^ (IData)(vlTOPp->b)) 
				      >> 6U) ^ ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						>> 6U)))));
	vcdp->fullBit  (c+42,((1U & (((((IData)(vlTOPp->a) 
					& (IData)(vlTOPp->b)) 
				       >> 6U) | (((IData)(vlTOPp->b) 
						  >> 6U) 
						 & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						    >> 6U))) 
				     | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					 >> 6U) & ((IData)(vlTOPp->a) 
						   >> 6U))))));
	vcdp->fullBit  (c+43,((1U & ((IData)(vlTOPp->a) 
				     >> 7U))));
	vcdp->fullBit  (c+44,((1U & ((IData)(vlTOPp->b) 
				     >> 7U))));
	vcdp->fullBit  (c+45,((1U & ((((IData)(vlTOPp->a) 
				       ^ (IData)(vlTOPp->b)) 
				      >> 7U) ^ ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						>> 7U)))));
	vcdp->fullBit  (c+46,((1U & (((((IData)(vlTOPp->a) 
					& (IData)(vlTOPp->b)) 
				       >> 7U) | (((IData)(vlTOPp->b) 
						  >> 7U) 
						 & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						    >> 7U))) 
				     | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					 >> 7U) & ((IData)(vlTOPp->a) 
						   >> 7U))))));
	vcdp->fullBus  (c+47,(8U),32);
    }
}
