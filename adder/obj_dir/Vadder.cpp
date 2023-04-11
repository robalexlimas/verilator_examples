// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder.h for the primary calling header

#include "Vadder.h"            // For This
#include "Vadder__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vadder) {
    Vadder__Syms* __restrict vlSymsp = __VlSymsp = new Vadder__Syms(this, name());
    Vadder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vadder::__Vconfigure(Vadder__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vadder::~Vadder() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vadder::eval() {
    Vadder__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vadder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vadder::eval\n"); );
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

void Vadder::_eval_initial_loop(Vadder__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vadder::_combo__TOP__1(Vadder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder::_combo__TOP__1\n"); );
    Vadder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sum = (((IData)(vlTOPp->a) ^ (IData)(vlTOPp->b)) 
		   ^ (IData)(vlTOPp->cin));
    vlTOPp->cout = ((((IData)(vlTOPp->a) & (IData)(vlTOPp->b)) 
		     | ((IData)(vlTOPp->b) & (IData)(vlTOPp->cin))) 
		    | ((IData)(vlTOPp->cin) & (IData)(vlTOPp->a)));
}

void Vadder::_eval(Vadder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder::_eval\n"); );
    Vadder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vadder::_eval_initial(Vadder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder::_eval_initial\n"); );
    Vadder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vadder::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vadder::final\n"); );
    // Variables
    Vadder__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vadder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vadder::_eval_settle(Vadder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder::_eval_settle\n"); );
    Vadder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vadder::_change_request(Vadder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder::_change_request\n"); );
    Vadder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void Vadder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    Vadder::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    cin = VL_RAND_RESET_I(1);
    sum = VL_RAND_RESET_I(1);
    cout = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vadder::_configure_coverage(Vadder__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    Vadder::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
