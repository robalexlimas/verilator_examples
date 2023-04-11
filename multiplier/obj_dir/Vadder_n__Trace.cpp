// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadder_n__Syms.h"


//======================

void Vadder_n::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vadder_n* t=(Vadder_n*)userthis;
    Vadder_n__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vadder_n::traceChgThis(Vadder_n__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vadder_n::traceChgThis__2(Vadder_n__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->adder_n__DOT__cout_wire),9);
	vcdp->chgBit  (c+2,((1U & (IData)(vlTOPp->adder_n__DOT__cout_wire))));
	vcdp->chgBit  (c+3,((1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				   >> 1U))));
	vcdp->chgBit  (c+4,((1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				   >> 2U))));
	vcdp->chgBit  (c+5,((1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				   >> 3U))));
	vcdp->chgBit  (c+6,((1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				   >> 4U))));
	vcdp->chgBit  (c+7,((1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				   >> 5U))));
	vcdp->chgBit  (c+8,((1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				   >> 6U))));
	vcdp->chgBit  (c+9,((1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				   >> 7U))));
    }
}

void Vadder_n::traceChgThis__3(Vadder_n__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+10,(vlTOPp->a),8);
	vcdp->chgBus  (c+11,(vlTOPp->b),8);
	vcdp->chgBit  (c+12,(vlTOPp->cin));
	vcdp->chgBus  (c+13,(vlTOPp->sum),8);
	vcdp->chgBit  (c+14,(vlTOPp->cout));
	vcdp->chgBit  (c+15,((1U & (IData)(vlTOPp->a))));
	vcdp->chgBit  (c+16,((1U & (IData)(vlTOPp->b))));
	vcdp->chgBit  (c+17,((1U & (((IData)(vlTOPp->a) 
				     ^ (IData)(vlTOPp->b)) 
				    ^ (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
	vcdp->chgBit  (c+18,((1U & ((((IData)(vlTOPp->a) 
				      & (IData)(vlTOPp->b)) 
				     | ((IData)(vlTOPp->b) 
					& (IData)(vlTOPp->adder_n__DOT__cout_wire))) 
				    | ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				       & (IData)(vlTOPp->a))))));
	vcdp->chgBit  (c+19,((1U & ((IData)(vlTOPp->a) 
				    >> 1U))));
	vcdp->chgBit  (c+20,((1U & ((IData)(vlTOPp->b) 
				    >> 1U))));
	vcdp->chgBit  (c+21,((1U & ((((IData)(vlTOPp->a) 
				      ^ (IData)(vlTOPp->b)) 
				     >> 1U) ^ ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					       >> 1U)))));
	vcdp->chgBit  (c+22,((1U & (((((IData)(vlTOPp->a) 
				       & (IData)(vlTOPp->b)) 
				      >> 1U) | (((IData)(vlTOPp->b) 
						 >> 1U) 
						& ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						   >> 1U))) 
				    | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					>> 1U) & ((IData)(vlTOPp->a) 
						  >> 1U))))));
	vcdp->chgBit  (c+23,((1U & ((IData)(vlTOPp->a) 
				    >> 2U))));
	vcdp->chgBit  (c+24,((1U & ((IData)(vlTOPp->b) 
				    >> 2U))));
	vcdp->chgBit  (c+25,((1U & ((((IData)(vlTOPp->a) 
				      ^ (IData)(vlTOPp->b)) 
				     >> 2U) ^ ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					       >> 2U)))));
	vcdp->chgBit  (c+26,((1U & (((((IData)(vlTOPp->a) 
				       & (IData)(vlTOPp->b)) 
				      >> 2U) | (((IData)(vlTOPp->b) 
						 >> 2U) 
						& ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						   >> 2U))) 
				    | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					>> 2U) & ((IData)(vlTOPp->a) 
						  >> 2U))))));
	vcdp->chgBit  (c+27,((1U & ((IData)(vlTOPp->a) 
				    >> 3U))));
	vcdp->chgBit  (c+28,((1U & ((IData)(vlTOPp->b) 
				    >> 3U))));
	vcdp->chgBit  (c+29,((1U & ((((IData)(vlTOPp->a) 
				      ^ (IData)(vlTOPp->b)) 
				     >> 3U) ^ ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					       >> 3U)))));
	vcdp->chgBit  (c+30,((1U & (((((IData)(vlTOPp->a) 
				       & (IData)(vlTOPp->b)) 
				      >> 3U) | (((IData)(vlTOPp->b) 
						 >> 3U) 
						& ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						   >> 3U))) 
				    | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					>> 3U) & ((IData)(vlTOPp->a) 
						  >> 3U))))));
	vcdp->chgBit  (c+31,((1U & ((IData)(vlTOPp->a) 
				    >> 4U))));
	vcdp->chgBit  (c+32,((1U & ((IData)(vlTOPp->b) 
				    >> 4U))));
	vcdp->chgBit  (c+33,((1U & ((((IData)(vlTOPp->a) 
				      ^ (IData)(vlTOPp->b)) 
				     >> 4U) ^ ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					       >> 4U)))));
	vcdp->chgBit  (c+34,((1U & (((((IData)(vlTOPp->a) 
				       & (IData)(vlTOPp->b)) 
				      >> 4U) | (((IData)(vlTOPp->b) 
						 >> 4U) 
						& ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						   >> 4U))) 
				    | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					>> 4U) & ((IData)(vlTOPp->a) 
						  >> 4U))))));
	vcdp->chgBit  (c+35,((1U & ((IData)(vlTOPp->a) 
				    >> 5U))));
	vcdp->chgBit  (c+36,((1U & ((IData)(vlTOPp->b) 
				    >> 5U))));
	vcdp->chgBit  (c+37,((1U & ((((IData)(vlTOPp->a) 
				      ^ (IData)(vlTOPp->b)) 
				     >> 5U) ^ ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					       >> 5U)))));
	vcdp->chgBit  (c+38,((1U & (((((IData)(vlTOPp->a) 
				       & (IData)(vlTOPp->b)) 
				      >> 5U) | (((IData)(vlTOPp->b) 
						 >> 5U) 
						& ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						   >> 5U))) 
				    | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					>> 5U) & ((IData)(vlTOPp->a) 
						  >> 5U))))));
	vcdp->chgBit  (c+39,((1U & ((IData)(vlTOPp->a) 
				    >> 6U))));
	vcdp->chgBit  (c+40,((1U & ((IData)(vlTOPp->b) 
				    >> 6U))));
	vcdp->chgBit  (c+41,((1U & ((((IData)(vlTOPp->a) 
				      ^ (IData)(vlTOPp->b)) 
				     >> 6U) ^ ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					       >> 6U)))));
	vcdp->chgBit  (c+42,((1U & (((((IData)(vlTOPp->a) 
				       & (IData)(vlTOPp->b)) 
				      >> 6U) | (((IData)(vlTOPp->b) 
						 >> 6U) 
						& ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						   >> 6U))) 
				    | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					>> 6U) & ((IData)(vlTOPp->a) 
						  >> 6U))))));
	vcdp->chgBit  (c+43,((1U & ((IData)(vlTOPp->a) 
				    >> 7U))));
	vcdp->chgBit  (c+44,((1U & ((IData)(vlTOPp->b) 
				    >> 7U))));
	vcdp->chgBit  (c+45,((1U & ((((IData)(vlTOPp->a) 
				      ^ (IData)(vlTOPp->b)) 
				     >> 7U) ^ ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					       >> 7U)))));
	vcdp->chgBit  (c+46,((1U & (((((IData)(vlTOPp->a) 
				       & (IData)(vlTOPp->b)) 
				      >> 7U) | (((IData)(vlTOPp->b) 
						 >> 7U) 
						& ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
						   >> 7U))) 
				    | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					>> 7U) & ((IData)(vlTOPp->a) 
						  >> 7U))))));
    }
}
