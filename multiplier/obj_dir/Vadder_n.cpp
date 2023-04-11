// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_n.h for the primary calling header

#include "Vadder_n.h"          // For This
#include "Vadder_n__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vadder_n) {
    Vadder_n__Syms* __restrict vlSymsp = __VlSymsp = new Vadder_n__Syms(this, name());
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vadder_n::__Vconfigure(Vadder_n__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vadder_n::~Vadder_n() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vadder_n::eval() {
    Vadder_n__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vadder_n::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vadder_n::_eval_initial_loop(Vadder_n__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vadder_n::_combo__TOP__1(Vadder_n__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder_n::_combo__TOP__1\n"); );
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->adder_n__DOT__cout_wire = ((0x1feU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | (IData)(vlTOPp->cin));
}

void Vadder_n::_settle__TOP__2(Vadder_n__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder_n::_settle__TOP__2\n"); );
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->adder_n__DOT__cout_wire = ((0x1feU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | (IData)(vlTOPp->cin));
    vlTOPp->cout = (1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
			  >> 8U));
    vlTOPp->adder_n__DOT__genblk1__BRA__0__KET____DOT____Vcellout__full_adder__cout 
	= (1U & ((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		  | ((IData)(vlTOPp->b) & (IData)(vlTOPp->adder_n__DOT__cout_wire))) 
		 | ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
		    & (IData)(vlTOPp->a))));
    vlTOPp->adder_n__DOT__genblk1__BRA__1__KET____DOT____Vcellout__full_adder__cout 
	= (1U & (((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		   >> 1U) | (((IData)(vlTOPp->b) >> 1U) 
			     & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				>> 1U))) | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					     >> 1U) 
					    & ((IData)(vlTOPp->a) 
					       >> 1U))));
    vlTOPp->adder_n__DOT__genblk1__BRA__2__KET____DOT____Vcellout__full_adder__cout 
	= (1U & (((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		   >> 2U) | (((IData)(vlTOPp->b) >> 2U) 
			     & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				>> 2U))) | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					     >> 2U) 
					    & ((IData)(vlTOPp->a) 
					       >> 2U))));
    vlTOPp->adder_n__DOT__genblk1__BRA__3__KET____DOT____Vcellout__full_adder__cout 
	= (1U & (((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		   >> 3U) | (((IData)(vlTOPp->b) >> 3U) 
			     & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				>> 3U))) | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					     >> 3U) 
					    & ((IData)(vlTOPp->a) 
					       >> 3U))));
    vlTOPp->adder_n__DOT__genblk1__BRA__4__KET____DOT____Vcellout__full_adder__cout 
	= (1U & (((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		   >> 4U) | (((IData)(vlTOPp->b) >> 4U) 
			     & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				>> 4U))) | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					     >> 4U) 
					    & ((IData)(vlTOPp->a) 
					       >> 4U))));
    vlTOPp->adder_n__DOT__genblk1__BRA__5__KET____DOT____Vcellout__full_adder__cout 
	= (1U & (((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		   >> 5U) | (((IData)(vlTOPp->b) >> 5U) 
			     & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				>> 5U))) | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					     >> 5U) 
					    & ((IData)(vlTOPp->a) 
					       >> 5U))));
    vlTOPp->adder_n__DOT__genblk1__BRA__6__KET____DOT____Vcellout__full_adder__cout 
	= (1U & (((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		   >> 6U) | (((IData)(vlTOPp->b) >> 6U) 
			     & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				>> 6U))) | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					     >> 6U) 
					    & ((IData)(vlTOPp->a) 
					       >> 6U))));
    vlTOPp->adder_n__DOT__genblk1__BRA__7__KET____DOT____Vcellout__full_adder__cout 
	= (1U & (((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		   >> 7U) | (((IData)(vlTOPp->b) >> 7U) 
			     & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				>> 7U))) | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					     >> 7U) 
					    & ((IData)(vlTOPp->a) 
					       >> 7U))));
    vlTOPp->sum = ((0xfeU & (IData)(vlTOPp->sum)) | 
		   (1U & (((IData)(vlTOPp->a) ^ (IData)(vlTOPp->b)) 
			  ^ (IData)(vlTOPp->adder_n__DOT__cout_wire))));
    vlTOPp->sum = ((0xfdU & (IData)(vlTOPp->sum)) | 
		   (2U & ((0xfffffffeU & ((IData)(vlTOPp->a) 
					  ^ (IData)(vlTOPp->b))) 
			  ^ (0xfffffffeU & (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
    vlTOPp->sum = ((0xfbU & (IData)(vlTOPp->sum)) | 
		   (4U & ((0xfffffffcU & ((IData)(vlTOPp->a) 
					  ^ (IData)(vlTOPp->b))) 
			  ^ (0xfffffffcU & (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
    vlTOPp->sum = ((0xf7U & (IData)(vlTOPp->sum)) | 
		   (8U & ((0xfffffff8U & ((IData)(vlTOPp->a) 
					  ^ (IData)(vlTOPp->b))) 
			  ^ (0xfffffff8U & (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
    vlTOPp->sum = ((0xefU & (IData)(vlTOPp->sum)) | 
		   (0x10U & ((0xfffffff0U & ((IData)(vlTOPp->a) 
					     ^ (IData)(vlTOPp->b))) 
			     ^ (0xfffffff0U & (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
    vlTOPp->sum = ((0xdfU & (IData)(vlTOPp->sum)) | 
		   (0x20U & ((0xffffffe0U & ((IData)(vlTOPp->a) 
					     ^ (IData)(vlTOPp->b))) 
			     ^ (0xffffffe0U & (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
    vlTOPp->sum = ((0xbfU & (IData)(vlTOPp->sum)) | 
		   (0x40U & ((0xffffffc0U & ((IData)(vlTOPp->a) 
					     ^ (IData)(vlTOPp->b))) 
			     ^ (0xffffffc0U & (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
    vlTOPp->sum = ((0x7fU & (IData)(vlTOPp->sum)) | 
		   (0x80U & ((0xffffff80U & ((IData)(vlTOPp->a) 
					     ^ (IData)(vlTOPp->b))) 
			     ^ (0xffffff80U & (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
}

VL_INLINE_OPT void Vadder_n::_combo__TOP__3(Vadder_n__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder_n::_combo__TOP__3\n"); );
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cout = (1U & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
			  >> 8U));
    vlTOPp->adder_n__DOT__genblk1__BRA__0__KET____DOT____Vcellout__full_adder__cout 
	= (1U & ((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		  | ((IData)(vlTOPp->b) & (IData)(vlTOPp->adder_n__DOT__cout_wire))) 
		 | ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
		    & (IData)(vlTOPp->a))));
    vlTOPp->adder_n__DOT__genblk1__BRA__1__KET____DOT____Vcellout__full_adder__cout 
	= (1U & (((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		   >> 1U) | (((IData)(vlTOPp->b) >> 1U) 
			     & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				>> 1U))) | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					     >> 1U) 
					    & ((IData)(vlTOPp->a) 
					       >> 1U))));
    vlTOPp->adder_n__DOT__genblk1__BRA__2__KET____DOT____Vcellout__full_adder__cout 
	= (1U & (((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		   >> 2U) | (((IData)(vlTOPp->b) >> 2U) 
			     & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				>> 2U))) | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					     >> 2U) 
					    & ((IData)(vlTOPp->a) 
					       >> 2U))));
    vlTOPp->adder_n__DOT__genblk1__BRA__3__KET____DOT____Vcellout__full_adder__cout 
	= (1U & (((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		   >> 3U) | (((IData)(vlTOPp->b) >> 3U) 
			     & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				>> 3U))) | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					     >> 3U) 
					    & ((IData)(vlTOPp->a) 
					       >> 3U))));
    vlTOPp->adder_n__DOT__genblk1__BRA__4__KET____DOT____Vcellout__full_adder__cout 
	= (1U & (((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		   >> 4U) | (((IData)(vlTOPp->b) >> 4U) 
			     & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				>> 4U))) | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					     >> 4U) 
					    & ((IData)(vlTOPp->a) 
					       >> 4U))));
    vlTOPp->adder_n__DOT__genblk1__BRA__5__KET____DOT____Vcellout__full_adder__cout 
	= (1U & (((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		   >> 5U) | (((IData)(vlTOPp->b) >> 5U) 
			     & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				>> 5U))) | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					     >> 5U) 
					    & ((IData)(vlTOPp->a) 
					       >> 5U))));
    vlTOPp->adder_n__DOT__genblk1__BRA__6__KET____DOT____Vcellout__full_adder__cout 
	= (1U & (((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		   >> 6U) | (((IData)(vlTOPp->b) >> 6U) 
			     & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				>> 6U))) | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					     >> 6U) 
					    & ((IData)(vlTOPp->a) 
					       >> 6U))));
    vlTOPp->adder_n__DOT__genblk1__BRA__7__KET____DOT____Vcellout__full_adder__cout 
	= (1U & (((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		   >> 7U) | (((IData)(vlTOPp->b) >> 7U) 
			     & ((IData)(vlTOPp->adder_n__DOT__cout_wire) 
				>> 7U))) | (((IData)(vlTOPp->adder_n__DOT__cout_wire) 
					     >> 7U) 
					    & ((IData)(vlTOPp->a) 
					       >> 7U))));
    vlTOPp->sum = ((0xfeU & (IData)(vlTOPp->sum)) | 
		   (1U & (((IData)(vlTOPp->a) ^ (IData)(vlTOPp->b)) 
			  ^ (IData)(vlTOPp->adder_n__DOT__cout_wire))));
    vlTOPp->sum = ((0xfdU & (IData)(vlTOPp->sum)) | 
		   (2U & ((0xfffffffeU & ((IData)(vlTOPp->a) 
					  ^ (IData)(vlTOPp->b))) 
			  ^ (0xfffffffeU & (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
    vlTOPp->sum = ((0xfbU & (IData)(vlTOPp->sum)) | 
		   (4U & ((0xfffffffcU & ((IData)(vlTOPp->a) 
					  ^ (IData)(vlTOPp->b))) 
			  ^ (0xfffffffcU & (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
    vlTOPp->sum = ((0xf7U & (IData)(vlTOPp->sum)) | 
		   (8U & ((0xfffffff8U & ((IData)(vlTOPp->a) 
					  ^ (IData)(vlTOPp->b))) 
			  ^ (0xfffffff8U & (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
    vlTOPp->sum = ((0xefU & (IData)(vlTOPp->sum)) | 
		   (0x10U & ((0xfffffff0U & ((IData)(vlTOPp->a) 
					     ^ (IData)(vlTOPp->b))) 
			     ^ (0xfffffff0U & (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
    vlTOPp->sum = ((0xdfU & (IData)(vlTOPp->sum)) | 
		   (0x20U & ((0xffffffe0U & ((IData)(vlTOPp->a) 
					     ^ (IData)(vlTOPp->b))) 
			     ^ (0xffffffe0U & (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
    vlTOPp->sum = ((0xbfU & (IData)(vlTOPp->sum)) | 
		   (0x40U & ((0xffffffc0U & ((IData)(vlTOPp->a) 
					     ^ (IData)(vlTOPp->b))) 
			     ^ (0xffffffc0U & (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
    vlTOPp->sum = ((0x7fU & (IData)(vlTOPp->sum)) | 
		   (0x80U & ((0xffffff80U & ((IData)(vlTOPp->a) 
					     ^ (IData)(vlTOPp->b))) 
			     ^ (0xffffff80U & (IData)(vlTOPp->adder_n__DOT__cout_wire)))));
    vlTOPp->adder_n__DOT__cout_wire = ((0x1fdU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__0__KET____DOT____Vcellout__full_adder__cout) 
					  << 1U));
    vlTOPp->adder_n__DOT__cout_wire = ((0x1fbU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__1__KET____DOT____Vcellout__full_adder__cout) 
					  << 2U));
    vlTOPp->adder_n__DOT__cout_wire = ((0x1f7U & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__2__KET____DOT____Vcellout__full_adder__cout) 
					  << 3U));
    vlTOPp->adder_n__DOT__cout_wire = ((0x1efU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__3__KET____DOT____Vcellout__full_adder__cout) 
					  << 4U));
    vlTOPp->adder_n__DOT__cout_wire = ((0x1dfU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__4__KET____DOT____Vcellout__full_adder__cout) 
					  << 5U));
    vlTOPp->adder_n__DOT__cout_wire = ((0x1bfU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__5__KET____DOT____Vcellout__full_adder__cout) 
					  << 6U));
    vlTOPp->adder_n__DOT__cout_wire = ((0x17fU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__6__KET____DOT____Vcellout__full_adder__cout) 
					  << 7U));
    vlTOPp->adder_n__DOT__cout_wire = ((0xffU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__7__KET____DOT____Vcellout__full_adder__cout) 
					  << 8U));
}

void Vadder_n::_settle__TOP__4(Vadder_n__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder_n::_settle__TOP__4\n"); );
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->adder_n__DOT__cout_wire = ((0x1fdU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__0__KET____DOT____Vcellout__full_adder__cout) 
					  << 1U));
    vlTOPp->adder_n__DOT__cout_wire = ((0x1fbU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__1__KET____DOT____Vcellout__full_adder__cout) 
					  << 2U));
    vlTOPp->adder_n__DOT__cout_wire = ((0x1f7U & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__2__KET____DOT____Vcellout__full_adder__cout) 
					  << 3U));
    vlTOPp->adder_n__DOT__cout_wire = ((0x1efU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__3__KET____DOT____Vcellout__full_adder__cout) 
					  << 4U));
    vlTOPp->adder_n__DOT__cout_wire = ((0x1dfU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__4__KET____DOT____Vcellout__full_adder__cout) 
					  << 5U));
    vlTOPp->adder_n__DOT__cout_wire = ((0x1bfU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__5__KET____DOT____Vcellout__full_adder__cout) 
					  << 6U));
    vlTOPp->adder_n__DOT__cout_wire = ((0x17fU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__6__KET____DOT____Vcellout__full_adder__cout) 
					  << 7U));
    vlTOPp->adder_n__DOT__cout_wire = ((0xffU & (IData)(vlTOPp->adder_n__DOT__cout_wire)) 
				       | ((IData)(vlTOPp->adder_n__DOT__genblk1__BRA__7__KET____DOT____Vcellout__full_adder__cout) 
					  << 8U));
}

void Vadder_n::_eval(Vadder_n__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder_n::_eval\n"); );
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_combo__TOP__3(vlSymsp);
}

void Vadder_n::_eval_initial(Vadder_n__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder_n::_eval_initial\n"); );
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vadder_n::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vadder_n::final\n"); );
    // Variables
    Vadder_n__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vadder_n::_eval_settle(Vadder_n__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder_n::_eval_settle\n"); );
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__4(vlSymsp);
}

VL_INLINE_OPT QData Vadder_n::_change_request(Vadder_n__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder_n::_change_request\n"); );
    Vadder_n* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->adder_n__DOT__cout_wire ^ vlTOPp->__Vchglast__TOP__adder_n__DOT__cout_wire));
    VL_DEBUG_IF( if(__req && ((vlTOPp->adder_n__DOT__cout_wire ^ vlTOPp->__Vchglast__TOP__adder_n__DOT__cout_wire))) VL_PRINTF("	CHANGE: adder_n.v:11: adder_n.cout_wire\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__adder_n__DOT__cout_wire 
	= vlTOPp->adder_n__DOT__cout_wire;
    return __req;
}

void Vadder_n::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    Vadder_n::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(8);
    b = VL_RAND_RESET_I(8);
    cin = VL_RAND_RESET_I(1);
    sum = VL_RAND_RESET_I(8);
    cout = VL_RAND_RESET_I(1);
    adder_n__DOT__cout_wire = VL_RAND_RESET_I(9);
    adder_n__DOT__genblk1__BRA__0__KET____DOT____Vcellout__full_adder__cout = VL_RAND_RESET_I(1);
    adder_n__DOT__genblk1__BRA__1__KET____DOT____Vcellout__full_adder__cout = VL_RAND_RESET_I(1);
    adder_n__DOT__genblk1__BRA__2__KET____DOT____Vcellout__full_adder__cout = VL_RAND_RESET_I(1);
    adder_n__DOT__genblk1__BRA__3__KET____DOT____Vcellout__full_adder__cout = VL_RAND_RESET_I(1);
    adder_n__DOT__genblk1__BRA__4__KET____DOT____Vcellout__full_adder__cout = VL_RAND_RESET_I(1);
    adder_n__DOT__genblk1__BRA__5__KET____DOT____Vcellout__full_adder__cout = VL_RAND_RESET_I(1);
    adder_n__DOT__genblk1__BRA__6__KET____DOT____Vcellout__full_adder__cout = VL_RAND_RESET_I(1);
    adder_n__DOT__genblk1__BRA__7__KET____DOT____Vcellout__full_adder__cout = VL_RAND_RESET_I(1);
    __Vchglast__TOP__adder_n__DOT__cout_wire = VL_RAND_RESET_I(9);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vadder_n::_configure_coverage(Vadder_n__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder_n::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
