// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconv1.h for the primary calling header

#include "Vconv1___024root.h"
#include "Vconv1__Syms.h"

//==========


void Vconv1___024root___ctor_var_reset(Vconv1___024root* vlSelf);

Vconv1___024root::Vconv1___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vconv1___024root___ctor_var_reset(this);
}

void Vconv1___024root::__Vconfigure(Vconv1__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vconv1___024root::~Vconv1___024root() {
}

void Vconv1___024root___eval_initial(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void Vconv1___024root___eval_settle(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___eval_settle\n"); );
}

void Vconv1___024root___final(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___final\n"); );
}

void Vconv1___024root___ctor_var_reset(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->cnn_data_in = VL_RAND_RESET_I(8);
    vlSelf->cnn_data_in_valid = VL_RAND_RESET_I(1);
}
