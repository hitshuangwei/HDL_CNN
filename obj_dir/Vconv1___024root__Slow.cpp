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

void Vconv1___024root___settle__TOP__3(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->conv1__DOT__window_in[0U] = vlSelf->cnn_data_in;
    vlSelf->conv1__DOT__window_out[0U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__graylinebuffer_U__dout;
    vlSelf->conv1__DOT__window_out[1U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__graylinebuffer_U__dout;
    vlSelf->conv1__DOT__window_out[2U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__graylinebuffer_U__dout;
    vlSelf->conv1__DOT__window_out[3U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__graylinebuffer_U__dout;
    vlSelf->conv1__DOT__window_out[4U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__graylinebuffer_U__dout;
    vlSelf->conv1__DOT__window_in[1U] = vlSelf->conv1__DOT__window_out
        [0U];
    vlSelf->conv1__DOT__window_in[2U] = vlSelf->conv1__DOT__window_out
        [1U];
    vlSelf->conv1__DOT__window_in[3U] = vlSelf->conv1__DOT__window_out
        [2U];
    vlSelf->conv1__DOT__window_in[4U] = vlSelf->conv1__DOT__window_out
        [3U];
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
    // Body
    Vconv1___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->conv1__DOT__wr_addr = VL_RAND_RESET_I(5);
    vlSelf->conv1__DOT__rd_addr = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->conv1__DOT__window_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->conv1__DOT__window_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        for (int __Vi1=0; __Vi1<5; ++__Vi1) {
            vlSelf->conv1__DOT__window[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->conv1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->conv1__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->conv1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__graylinebuffer_U__dout = VL_RAND_RESET_I(8);
    vlSelf->conv1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__graylinebuffer_U__dout = VL_RAND_RESET_I(8);
    vlSelf->conv1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__graylinebuffer_U__dout = VL_RAND_RESET_I(8);
    vlSelf->conv1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__graylinebuffer_U__dout = VL_RAND_RESET_I(8);
    vlSelf->conv1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__graylinebuffer_U__dout = VL_RAND_RESET_I(8);
    vlSelf->conv1__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    vlSelf->conv1__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<28; ++__Vi0) {
        vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<28; ++__Vi0) {
        vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<28; ++__Vi0) {
        vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<28; ++__Vi0) {
        vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<28; ++__Vi0) {
        vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__conv1__DOT__wr_addr = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
