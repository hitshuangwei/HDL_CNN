// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconv1.h for the primary calling header

#include "Vconv1___024root.h"
#include "Vconv1__Syms.h"

//==========

void Vconv1___024root___eval(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___eval\n"); );
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

QData Vconv1___024root___change_request_1(Vconv1___024root* vlSelf);

VL_INLINE_OPT QData Vconv1___024root___change_request(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___change_request\n"); );
    // Body
    return (Vconv1___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vconv1___024root___change_request_1(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vconv1___024root___eval_debug_assertions(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->cnn_data_in_valid & 0xfeU))) {
        Verilated::overWidthError("cnn_data_in_valid");}
}
#endif  // VL_DEBUG
