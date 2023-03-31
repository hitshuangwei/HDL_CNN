// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconv1.h for the primary calling header

#include "Vconv1___024root.h"
#include "Vconv1__Syms.h"

//==========

VL_INLINE_OPT void Vconv1___024root___sequent__TOP__2(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    CData/*4:0*/ __Vdlyvdim0__conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    CData/*4:0*/ __Vdlyvdim0__conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    CData/*4:0*/ __Vdlyvdim0__conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    CData/*4:0*/ __Vdlyvdim0__conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    // Body
    __Vdlyvset__conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer__v0 = 0U;
    __Vdlyvset__conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer__v0 = 0U;
    __Vdlyvset__conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer__v0 = 0U;
    __Vdlyvset__conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer__v0 = 0U;
    __Vdlyvset__conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer__v0 = 0U;
    vlSelf->cnn_data_out_valid = vlSelf->conv1__DOT__delay_data_out_valid_o;
    if (vlSelf->cnn_data_in_valid) {
        vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT____Vlvbound1 
            = vlSelf->conv1__DOT__window_in[4U];
        if ((0x18U >= (IData)(vlSelf->conv1__DOT__wr_addr))) {
            __Vdlyvval__conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer__v0 
                = vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT____Vlvbound1;
            __Vdlyvset__conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer__v0 = 1U;
            __Vdlyvdim0__conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer__v0 
                = vlSelf->conv1__DOT__wr_addr;
        }
    }
    if (vlSelf->cnn_data_in_valid) {
        vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT____Vlvbound1 
            = vlSelf->conv1__DOT__window_in[3U];
        if ((0x18U >= (IData)(vlSelf->conv1__DOT__wr_addr))) {
            __Vdlyvval__conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer__v0 
                = vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT____Vlvbound1;
            __Vdlyvset__conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer__v0 = 1U;
            __Vdlyvdim0__conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer__v0 
                = vlSelf->conv1__DOT__wr_addr;
        }
    }
    if (vlSelf->cnn_data_in_valid) {
        vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT____Vlvbound1 
            = vlSelf->conv1__DOT__window_in[2U];
        if ((0x18U >= (IData)(vlSelf->conv1__DOT__wr_addr))) {
            __Vdlyvval__conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer__v0 
                = vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT____Vlvbound1;
            __Vdlyvset__conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer__v0 = 1U;
            __Vdlyvdim0__conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer__v0 
                = vlSelf->conv1__DOT__wr_addr;
        }
    }
    if (vlSelf->cnn_data_in_valid) {
        vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT____Vlvbound1 
            = vlSelf->conv1__DOT__window_in[1U];
        if ((0x18U >= (IData)(vlSelf->conv1__DOT__wr_addr))) {
            __Vdlyvval__conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer__v0 
                = vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT____Vlvbound1;
            __Vdlyvset__conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer__v0 = 1U;
            __Vdlyvdim0__conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer__v0 
                = vlSelf->conv1__DOT__wr_addr;
        }
    }
    if (vlSelf->cnn_data_in_valid) {
        vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT____Vlvbound1 
            = vlSelf->conv1__DOT__window_in[0U];
        if ((0x18U >= (IData)(vlSelf->conv1__DOT__wr_addr))) {
            __Vdlyvval__conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer__v0 
                = vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT____Vlvbound1;
            __Vdlyvset__conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer__v0 = 1U;
            __Vdlyvdim0__conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer__v0 
                = vlSelf->conv1__DOT__wr_addr;
        }
    }
    if ((0x18U >= (IData)(vlSelf->conv1__DOT__rd_addr))) {
        vlSelf->conv1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__graylinebuffer_U__dout 
            = vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer
            [vlSelf->conv1__DOT__rd_addr];
        vlSelf->conv1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__graylinebuffer_U__dout 
            = vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer
            [vlSelf->conv1__DOT__rd_addr];
        vlSelf->conv1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__graylinebuffer_U__dout 
            = vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer
            [vlSelf->conv1__DOT__rd_addr];
        vlSelf->conv1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__graylinebuffer_U__dout 
            = vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer
            [vlSelf->conv1__DOT__rd_addr];
        vlSelf->conv1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__graylinebuffer_U__dout 
            = vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer
            [vlSelf->conv1__DOT__rd_addr];
    } else {
        vlSelf->conv1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__graylinebuffer_U__dout = 0U;
        vlSelf->conv1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__graylinebuffer_U__dout = 0U;
        vlSelf->conv1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__graylinebuffer_U__dout = 0U;
        vlSelf->conv1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__graylinebuffer_U__dout = 0U;
        vlSelf->conv1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__graylinebuffer_U__dout = 0U;
    }
    if (__Vdlyvset__conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer__v0) {
        vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[__Vdlyvdim0__conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer__v0] 
            = __Vdlyvval__conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    }
    if (__Vdlyvset__conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer__v0) {
        vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[__Vdlyvdim0__conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer__v0] 
            = __Vdlyvval__conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    }
    if (__Vdlyvset__conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer__v0) {
        vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[__Vdlyvdim0__conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer__v0] 
            = __Vdlyvval__conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    }
    if (__Vdlyvset__conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer__v0) {
        vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[__Vdlyvdim0__conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer__v0] 
            = __Vdlyvval__conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    }
    if (__Vdlyvset__conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer__v0) {
        vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[__Vdlyvdim0__conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer__v0] 
            = __Vdlyvval__conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer__v0;
    }
    vlSelf->conv1__DOT__delay_data_out_valid_o = ((4U 
                                                   <= (IData)(vlSelf->conv1__DOT__x_cnt)) 
                                                  & (4U 
                                                     <= (IData)(vlSelf->conv1__DOT__y_cnt)));
    vlSelf->conv1__DOT__window_out[4U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__graylinebuffer_U__dout;
    vlSelf->conv1__DOT__window_out[3U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__graylinebuffer_U__dout;
    vlSelf->conv1__DOT__window_out[2U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__graylinebuffer_U__dout;
    vlSelf->conv1__DOT__window_out[1U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__graylinebuffer_U__dout;
    vlSelf->conv1__DOT__window_out[0U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__graylinebuffer_U__dout;
}

VL_INLINE_OPT void Vconv1___024root___sequent__TOP__3(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vdly__conv1__DOT__wr_addr;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v0;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v0;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v1;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v1;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v2;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v2;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v3;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v3;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v4;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v4;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v5;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v5;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v6;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v6;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v7;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v7;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v8;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v8;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v9;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v9;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v10;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v10;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v11;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v11;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v12;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v12;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v13;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v13;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v14;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v14;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v15;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v15;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v16;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v16;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v17;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v17;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v18;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v18;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v19;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v19;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v20;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v20;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v21;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v21;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v22;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v22;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v23;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v23;
    CData/*7:0*/ __Vdlyvval__conv1__DOT__window__v24;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v24;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window__v25;
    CData/*4:0*/ __Vdly__conv1__DOT__x_cnt;
    CData/*4:0*/ __Vdly__conv1__DOT__y_cnt;
    CData/*4:0*/ __Vdly__conv1__DOT__rom_cnt;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v0;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v1;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v2;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v3;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v4;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v5;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v6;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v7;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v8;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v9;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v10;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v11;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v12;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v13;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v14;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v15;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v16;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v17;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v18;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v19;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v20;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v21;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v22;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v23;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v24;
    CData/*0:0*/ __Vdlyvset__conv1__DOT__window_mul_result_1__v25;
    SData/*15:0*/ conv1__DOT____Vlvbound4;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v0;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v1;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v2;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v3;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v4;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v5;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v6;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v7;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v8;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v9;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v10;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v11;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v12;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v13;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v14;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v15;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v16;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v17;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v18;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v19;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v20;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v21;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v22;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v23;
    IData/*31:0*/ __Vdlyvval__conv1__DOT__window_mul_result_1__v24;
    // Body
    __Vdly__conv1__DOT__x_cnt = vlSelf->conv1__DOT__x_cnt;
    __Vdly__conv1__DOT__y_cnt = vlSelf->conv1__DOT__y_cnt;
    __Vdly__conv1__DOT__wr_addr = vlSelf->conv1__DOT__wr_addr;
    __Vdly__conv1__DOT__rom_cnt = vlSelf->conv1__DOT__rom_cnt;
    vlSelf->conv1__DOT__j = 5U;
    vlSelf->conv1__DOT__i = 5U;
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->cnn_data_in_valid) & (IData)(vlSelf->img_in_en))) {
            vlSelf->conv1__DOT__j = 5U;
        }
    } else {
        vlSelf->conv1__DOT__j = 5U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->cnn_data_in_valid) & (IData)(vlSelf->img_in_en))) {
            vlSelf->conv1__DOT__i = 5U;
        }
    } else {
        vlSelf->conv1__DOT__i = 5U;
    }
    __Vdlyvset__conv1__DOT__window__v0 = 0U;
    __Vdlyvset__conv1__DOT__window__v1 = 0U;
    __Vdlyvset__conv1__DOT__window__v2 = 0U;
    __Vdlyvset__conv1__DOT__window__v3 = 0U;
    __Vdlyvset__conv1__DOT__window__v4 = 0U;
    __Vdlyvset__conv1__DOT__window__v5 = 0U;
    __Vdlyvset__conv1__DOT__window__v6 = 0U;
    __Vdlyvset__conv1__DOT__window__v7 = 0U;
    __Vdlyvset__conv1__DOT__window__v8 = 0U;
    __Vdlyvset__conv1__DOT__window__v9 = 0U;
    __Vdlyvset__conv1__DOT__window__v10 = 0U;
    __Vdlyvset__conv1__DOT__window__v11 = 0U;
    __Vdlyvset__conv1__DOT__window__v12 = 0U;
    __Vdlyvset__conv1__DOT__window__v13 = 0U;
    __Vdlyvset__conv1__DOT__window__v14 = 0U;
    __Vdlyvset__conv1__DOT__window__v15 = 0U;
    __Vdlyvset__conv1__DOT__window__v16 = 0U;
    __Vdlyvset__conv1__DOT__window__v17 = 0U;
    __Vdlyvset__conv1__DOT__window__v18 = 0U;
    __Vdlyvset__conv1__DOT__window__v19 = 0U;
    __Vdlyvset__conv1__DOT__window__v20 = 0U;
    __Vdlyvset__conv1__DOT__window__v21 = 0U;
    __Vdlyvset__conv1__DOT__window__v22 = 0U;
    __Vdlyvset__conv1__DOT__window__v23 = 0U;
    __Vdlyvset__conv1__DOT__window__v24 = 0U;
    __Vdlyvset__conv1__DOT__window__v25 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v0 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v1 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v2 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v3 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v4 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v5 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v6 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v7 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v8 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v9 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v10 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v11 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v12 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v13 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v14 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v15 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v16 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v17 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v18 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v19 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v20 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v21 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v22 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v23 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v24 = 0U;
    __Vdlyvset__conv1__DOT__window_mul_result_1__v25 = 0U;
    if (vlSelf->rst_n) {
        if ((((0x18U == (IData)(vlSelf->conv1__DOT__x_cnt)) 
              & (IData)(vlSelf->cnn_data_in_valid)) 
             & (IData)(vlSelf->img_in_en))) {
            __Vdly__conv1__DOT__x_cnt = 0U;
        } else if (vlSelf->cnn_data_in_valid) {
            __Vdly__conv1__DOT__x_cnt = (0x1fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->conv1__DOT__x_cnt)));
        }
    } else {
        __Vdly__conv1__DOT__x_cnt = 0U;
    }
    if (vlSelf->rst_n) {
        if (((((0x18U == (IData)(vlSelf->conv1__DOT__y_cnt)) 
               & (0x18U == (IData)(vlSelf->conv1__DOT__x_cnt))) 
              & (IData)(vlSelf->cnn_data_in_valid)) 
             & (IData)(vlSelf->img_in_en))) {
            __Vdly__conv1__DOT__y_cnt = 0U;
        } else if (((IData)(vlSelf->cnn_data_in_valid) 
                    & (0x18U == (IData)(vlSelf->conv1__DOT__x_cnt)))) {
            __Vdly__conv1__DOT__y_cnt = (0x1fU & ((IData)(1U) 
                                                  + (IData)(vlSelf->conv1__DOT__y_cnt)));
        }
    } else {
        __Vdly__conv1__DOT__y_cnt = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->cnn_data_in_valid) & (IData)(vlSelf->img_in_en))) {
            __Vdly__conv1__DOT__wr_addr = ((0x18U == (IData)(vlSelf->conv1__DOT__wr_addr))
                                            ? 0U : 
                                           (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->conv1__DOT__wr_addr))));
        }
    } else {
        __Vdly__conv1__DOT__wr_addr = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->cnn_data_in_valid) & (IData)(vlSelf->img_in_en))) {
            vlSelf->conv1__DOT__rd_addr = (0x1fU & 
                                           ((0x18U 
                                             < (0x1fU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->conv1__DOT__wr_addr))))
                                             ? ((IData)(9U) 
                                                + (IData)(vlSelf->conv1__DOT__wr_addr))
                                             : ((IData)(2U) 
                                                + (IData)(vlSelf->conv1__DOT__wr_addr))));
        }
    } else {
        vlSelf->conv1__DOT__rd_addr = 0U;
    }
    if (vlSelf->rst_n) {
        if (((0x18U == (IData)(vlSelf->conv1__DOT__rom_cnt)) 
             & (IData)(vlSelf->cnn_data_in_valid))) {
            __Vdly__conv1__DOT__rom_cnt = 0U;
        } else if (vlSelf->cnn_data_in_valid) {
            __Vdly__conv1__DOT__rom_cnt = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->conv1__DOT__rom_cnt)));
        }
    } else {
        __Vdly__conv1__DOT__rom_cnt = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->cnn_data_in_valid) & (IData)(vlSelf->img_in_en))) {
            vlSelf->conv1__DOT____Vlvbound1 = vlSelf->conv1__DOT__window_in
                [0U];
            __Vdlyvval__conv1__DOT__window__v0 = vlSelf->conv1__DOT____Vlvbound1;
            __Vdlyvset__conv1__DOT__window__v0 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [0U][0U];
            __Vdlyvval__conv1__DOT__window__v1 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v1 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [0U][1U];
            __Vdlyvval__conv1__DOT__window__v2 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v2 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [0U][2U];
            __Vdlyvval__conv1__DOT__window__v3 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v3 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [0U][3U];
            __Vdlyvval__conv1__DOT__window__v4 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v4 = 1U;
            vlSelf->conv1__DOT____Vlvbound1 = vlSelf->conv1__DOT__window_in
                [1U];
            __Vdlyvval__conv1__DOT__window__v5 = vlSelf->conv1__DOT____Vlvbound1;
            __Vdlyvset__conv1__DOT__window__v5 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [1U][0U];
            __Vdlyvval__conv1__DOT__window__v6 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v6 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [1U][1U];
            __Vdlyvval__conv1__DOT__window__v7 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v7 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [1U][2U];
            __Vdlyvval__conv1__DOT__window__v8 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v8 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [1U][3U];
            __Vdlyvval__conv1__DOT__window__v9 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v9 = 1U;
            vlSelf->conv1__DOT____Vlvbound1 = vlSelf->conv1__DOT__window_in
                [2U];
            __Vdlyvval__conv1__DOT__window__v10 = vlSelf->conv1__DOT____Vlvbound1;
            __Vdlyvset__conv1__DOT__window__v10 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [2U][0U];
            __Vdlyvval__conv1__DOT__window__v11 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v11 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [2U][1U];
            __Vdlyvval__conv1__DOT__window__v12 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v12 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [2U][2U];
            __Vdlyvval__conv1__DOT__window__v13 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v13 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [2U][3U];
            __Vdlyvval__conv1__DOT__window__v14 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v14 = 1U;
            vlSelf->conv1__DOT____Vlvbound1 = vlSelf->conv1__DOT__window_in
                [3U];
            __Vdlyvval__conv1__DOT__window__v15 = vlSelf->conv1__DOT____Vlvbound1;
            __Vdlyvset__conv1__DOT__window__v15 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [3U][0U];
            __Vdlyvval__conv1__DOT__window__v16 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v16 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [3U][1U];
            __Vdlyvval__conv1__DOT__window__v17 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v17 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [3U][2U];
            __Vdlyvval__conv1__DOT__window__v18 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v18 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [3U][3U];
            __Vdlyvval__conv1__DOT__window__v19 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v19 = 1U;
            vlSelf->conv1__DOT____Vlvbound1 = vlSelf->conv1__DOT__window_in
                [4U];
            __Vdlyvval__conv1__DOT__window__v20 = vlSelf->conv1__DOT____Vlvbound1;
            __Vdlyvset__conv1__DOT__window__v20 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [4U][0U];
            __Vdlyvval__conv1__DOT__window__v21 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v21 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [4U][1U];
            __Vdlyvval__conv1__DOT__window__v22 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v22 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [4U][2U];
            __Vdlyvval__conv1__DOT__window__v23 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v23 = 1U;
            vlSelf->conv1__DOT____Vlvbound2 = vlSelf->conv1__DOT__window
                [4U][3U];
            __Vdlyvval__conv1__DOT__window__v24 = vlSelf->conv1__DOT____Vlvbound2;
            __Vdlyvset__conv1__DOT__window__v24 = 1U;
        }
    } else {
        __Vdlyvset__conv1__DOT__window__v25 = 1U;
    }
    if (vlSelf->rst_n) {
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [0U][0U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [0U]
                                                              [0U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [0U][0U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v0 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v0 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [0U][1U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [0U]
                                                              [1U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [0U][1U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v1 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v1 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [0U][2U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [0U]
                                                              [2U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [0U][2U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v2 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v2 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [0U][3U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [0U]
                                                              [3U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [0U][3U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v3 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v3 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [0U][4U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [0U]
                                                              [4U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [0U][4U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v4 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v4 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [1U][0U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [1U]
                                                              [0U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [1U][0U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v5 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v5 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [1U][1U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [1U]
                                                              [1U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [1U][1U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v6 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v6 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [1U][2U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [1U]
                                                              [2U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [1U][2U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v7 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v7 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [1U][3U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [1U]
                                                              [3U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [1U][3U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v8 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v8 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [1U][4U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [1U]
                                                              [4U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [1U][4U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v9 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v9 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [2U][0U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [2U]
                                                              [0U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [2U][0U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v10 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v10 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [2U][1U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [2U]
                                                              [1U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [2U][1U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v11 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v11 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [2U][2U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [2U]
                                                              [2U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [2U][2U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v12 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v12 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [2U][3U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [2U]
                                                              [3U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [2U][3U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v13 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v13 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [2U][4U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [2U]
                                                              [4U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [2U][4U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v14 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v14 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [3U][0U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [3U]
                                                              [0U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [3U][0U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v15 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v15 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [3U][1U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [3U]
                                                              [1U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [3U][1U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v16 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v16 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [3U][2U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [3U]
                                                              [2U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [3U][2U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v17 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v17 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [3U][3U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [3U]
                                                              [3U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [3U][3U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v18 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v18 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [3U][4U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [3U]
                                                              [4U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [3U][4U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v19 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v19 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [4U][0U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [4U]
                                                              [0U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [4U][0U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v20 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v20 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [4U][1U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [4U]
                                                              [1U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [4U][1U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v21 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v21 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [4U][2U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [4U]
                                                              [2U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [4U][2U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v22 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v22 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [4U][3U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [4U]
                                                              [3U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [4U][3U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v23 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v23 = 1U;
        vlSelf->conv1__DOT____Vlvbound5 = (vlSelf->conv1__DOT__window
                                           [4U][4U] 
                                           * (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->conv1__DOT__c1_w_1
                                                              [4U]
                                                              [4U] 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | vlSelf->conv1__DOT__c1_w_1
                                              [4U][4U]));
        __Vdlyvval__conv1__DOT__window_mul_result_1__v24 
            = vlSelf->conv1__DOT____Vlvbound5;
        __Vdlyvset__conv1__DOT__window_mul_result_1__v24 = 1U;
    } else {
        __Vdlyvset__conv1__DOT__window_mul_result_1__v25 = 1U;
    }
    vlSelf->conv1__DOT__y_cnt = __Vdly__conv1__DOT__y_cnt;
    vlSelf->conv1__DOT__x_cnt = __Vdly__conv1__DOT__x_cnt;
    vlSelf->conv1__DOT__wr_addr = __Vdly__conv1__DOT__wr_addr;
    vlSelf->conv1__DOT__rom_cnt = __Vdly__conv1__DOT__rom_cnt;
    if (__Vdlyvset__conv1__DOT__window__v0) {
        vlSelf->conv1__DOT__window[0U][0U] = __Vdlyvval__conv1__DOT__window__v0;
    }
    if (__Vdlyvset__conv1__DOT__window__v1) {
        vlSelf->conv1__DOT__window[0U][1U] = __Vdlyvval__conv1__DOT__window__v1;
    }
    if (__Vdlyvset__conv1__DOT__window__v2) {
        vlSelf->conv1__DOT__window[0U][2U] = __Vdlyvval__conv1__DOT__window__v2;
    }
    if (__Vdlyvset__conv1__DOT__window__v3) {
        vlSelf->conv1__DOT__window[0U][3U] = __Vdlyvval__conv1__DOT__window__v3;
    }
    if (__Vdlyvset__conv1__DOT__window__v4) {
        vlSelf->conv1__DOT__window[0U][4U] = __Vdlyvval__conv1__DOT__window__v4;
    }
    if (__Vdlyvset__conv1__DOT__window__v5) {
        vlSelf->conv1__DOT__window[1U][0U] = __Vdlyvval__conv1__DOT__window__v5;
    }
    if (__Vdlyvset__conv1__DOT__window__v6) {
        vlSelf->conv1__DOT__window[1U][1U] = __Vdlyvval__conv1__DOT__window__v6;
    }
    if (__Vdlyvset__conv1__DOT__window__v7) {
        vlSelf->conv1__DOT__window[1U][2U] = __Vdlyvval__conv1__DOT__window__v7;
    }
    if (__Vdlyvset__conv1__DOT__window__v8) {
        vlSelf->conv1__DOT__window[1U][3U] = __Vdlyvval__conv1__DOT__window__v8;
    }
    if (__Vdlyvset__conv1__DOT__window__v9) {
        vlSelf->conv1__DOT__window[1U][4U] = __Vdlyvval__conv1__DOT__window__v9;
    }
    if (__Vdlyvset__conv1__DOT__window__v10) {
        vlSelf->conv1__DOT__window[2U][0U] = __Vdlyvval__conv1__DOT__window__v10;
    }
    if (__Vdlyvset__conv1__DOT__window__v11) {
        vlSelf->conv1__DOT__window[2U][1U] = __Vdlyvval__conv1__DOT__window__v11;
    }
    if (__Vdlyvset__conv1__DOT__window__v12) {
        vlSelf->conv1__DOT__window[2U][2U] = __Vdlyvval__conv1__DOT__window__v12;
    }
    if (__Vdlyvset__conv1__DOT__window__v13) {
        vlSelf->conv1__DOT__window[2U][3U] = __Vdlyvval__conv1__DOT__window__v13;
    }
    if (__Vdlyvset__conv1__DOT__window__v14) {
        vlSelf->conv1__DOT__window[2U][4U] = __Vdlyvval__conv1__DOT__window__v14;
    }
    if (__Vdlyvset__conv1__DOT__window__v15) {
        vlSelf->conv1__DOT__window[3U][0U] = __Vdlyvval__conv1__DOT__window__v15;
    }
    if (__Vdlyvset__conv1__DOT__window__v16) {
        vlSelf->conv1__DOT__window[3U][1U] = __Vdlyvval__conv1__DOT__window__v16;
    }
    if (__Vdlyvset__conv1__DOT__window__v17) {
        vlSelf->conv1__DOT__window[3U][2U] = __Vdlyvval__conv1__DOT__window__v17;
    }
    if (__Vdlyvset__conv1__DOT__window__v18) {
        vlSelf->conv1__DOT__window[3U][3U] = __Vdlyvval__conv1__DOT__window__v18;
    }
    if (__Vdlyvset__conv1__DOT__window__v19) {
        vlSelf->conv1__DOT__window[3U][4U] = __Vdlyvval__conv1__DOT__window__v19;
    }
    if (__Vdlyvset__conv1__DOT__window__v20) {
        vlSelf->conv1__DOT__window[4U][0U] = __Vdlyvval__conv1__DOT__window__v20;
    }
    if (__Vdlyvset__conv1__DOT__window__v21) {
        vlSelf->conv1__DOT__window[4U][1U] = __Vdlyvval__conv1__DOT__window__v21;
    }
    if (__Vdlyvset__conv1__DOT__window__v22) {
        vlSelf->conv1__DOT__window[4U][2U] = __Vdlyvval__conv1__DOT__window__v22;
    }
    if (__Vdlyvset__conv1__DOT__window__v23) {
        vlSelf->conv1__DOT__window[4U][3U] = __Vdlyvval__conv1__DOT__window__v23;
    }
    if (__Vdlyvset__conv1__DOT__window__v24) {
        vlSelf->conv1__DOT__window[4U][4U] = __Vdlyvval__conv1__DOT__window__v24;
    }
    if (__Vdlyvset__conv1__DOT__window__v25) {
        vlSelf->conv1__DOT__window[0U][0U] = 0U;
        vlSelf->conv1__DOT__window[0U][1U] = 0U;
        vlSelf->conv1__DOT__window[0U][2U] = 0U;
        vlSelf->conv1__DOT__window[0U][3U] = 0U;
        vlSelf->conv1__DOT__window[0U][4U] = 0U;
        vlSelf->conv1__DOT__window[1U][0U] = 0U;
        vlSelf->conv1__DOT__window[1U][1U] = 0U;
        vlSelf->conv1__DOT__window[1U][2U] = 0U;
        vlSelf->conv1__DOT__window[1U][3U] = 0U;
        vlSelf->conv1__DOT__window[1U][4U] = 0U;
        vlSelf->conv1__DOT__window[2U][0U] = 0U;
        vlSelf->conv1__DOT__window[2U][1U] = 0U;
        vlSelf->conv1__DOT__window[2U][2U] = 0U;
        vlSelf->conv1__DOT__window[2U][3U] = 0U;
        vlSelf->conv1__DOT__window[2U][4U] = 0U;
        vlSelf->conv1__DOT__window[3U][0U] = 0U;
        vlSelf->conv1__DOT__window[3U][1U] = 0U;
        vlSelf->conv1__DOT__window[3U][2U] = 0U;
        vlSelf->conv1__DOT__window[3U][3U] = 0U;
        vlSelf->conv1__DOT__window[3U][4U] = 0U;
        vlSelf->conv1__DOT__window[4U][0U] = 0U;
        vlSelf->conv1__DOT__window[4U][1U] = 0U;
        vlSelf->conv1__DOT__window[4U][2U] = 0U;
        vlSelf->conv1__DOT__window[4U][3U] = 0U;
        vlSelf->conv1__DOT__window[4U][4U] = 0U;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v0) {
        vlSelf->conv1__DOT__window_mul_result_1[0U][0U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v0;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v1) {
        vlSelf->conv1__DOT__window_mul_result_1[0U][1U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v1;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v2) {
        vlSelf->conv1__DOT__window_mul_result_1[0U][2U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v2;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v3) {
        vlSelf->conv1__DOT__window_mul_result_1[0U][3U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v3;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v4) {
        vlSelf->conv1__DOT__window_mul_result_1[0U][4U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v4;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v5) {
        vlSelf->conv1__DOT__window_mul_result_1[1U][0U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v5;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v6) {
        vlSelf->conv1__DOT__window_mul_result_1[1U][1U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v6;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v7) {
        vlSelf->conv1__DOT__window_mul_result_1[1U][2U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v7;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v8) {
        vlSelf->conv1__DOT__window_mul_result_1[1U][3U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v8;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v9) {
        vlSelf->conv1__DOT__window_mul_result_1[1U][4U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v9;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v10) {
        vlSelf->conv1__DOT__window_mul_result_1[2U][0U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v10;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v11) {
        vlSelf->conv1__DOT__window_mul_result_1[2U][1U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v11;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v12) {
        vlSelf->conv1__DOT__window_mul_result_1[2U][2U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v12;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v13) {
        vlSelf->conv1__DOT__window_mul_result_1[2U][3U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v13;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v14) {
        vlSelf->conv1__DOT__window_mul_result_1[2U][4U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v14;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v15) {
        vlSelf->conv1__DOT__window_mul_result_1[3U][0U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v15;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v16) {
        vlSelf->conv1__DOT__window_mul_result_1[3U][1U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v16;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v17) {
        vlSelf->conv1__DOT__window_mul_result_1[3U][2U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v17;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v18) {
        vlSelf->conv1__DOT__window_mul_result_1[3U][3U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v18;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v19) {
        vlSelf->conv1__DOT__window_mul_result_1[3U][4U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v19;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v20) {
        vlSelf->conv1__DOT__window_mul_result_1[4U][0U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v20;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v21) {
        vlSelf->conv1__DOT__window_mul_result_1[4U][1U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v21;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v22) {
        vlSelf->conv1__DOT__window_mul_result_1[4U][2U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v22;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v23) {
        vlSelf->conv1__DOT__window_mul_result_1[4U][3U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v23;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v24) {
        vlSelf->conv1__DOT__window_mul_result_1[4U][4U] 
            = __Vdlyvval__conv1__DOT__window_mul_result_1__v24;
    }
    if (__Vdlyvset__conv1__DOT__window_mul_result_1__v25) {
        vlSelf->conv1__DOT__window_mul_result_1[0U][0U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[0U][1U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[0U][2U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[0U][3U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[0U][4U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[1U][0U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[1U][1U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[1U][2U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[1U][3U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[1U][4U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[2U][0U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[2U][1U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[2U][2U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[2U][3U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[2U][4U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[3U][0U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[3U][1U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[3U][2U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[3U][3U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[3U][4U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[4U][0U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[4U][1U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[4U][2U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[4U][3U] = 0U;
        vlSelf->conv1__DOT__window_mul_result_1[4U][4U] = 0U;
    }
    conv1__DOT____Vlvbound4 = ((0x18U >= (IData)(vlSelf->conv1__DOT__rom_cnt))
                                ? vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom
                               [vlSelf->conv1__DOT__rom_cnt]
                                : 0U);
    if (((4U >= (7U & VL_MODDIV_III(32, (IData)(vlSelf->conv1__DOT__rom_cnt), (IData)(5U)))) 
         & (4U >= (7U & VL_DIV_III(32, (IData)(vlSelf->conv1__DOT__rom_cnt), (IData)(5U)))))) {
        vlSelf->conv1__DOT__c1_w_1[(7U & VL_DIV_III(32, (IData)(vlSelf->conv1__DOT__rom_cnt), (IData)(5U)))][(7U 
                                                                                & VL_MODDIV_III(32, (IData)(vlSelf->conv1__DOT__rom_cnt), (IData)(5U)))] 
            = conv1__DOT____Vlvbound4;
    }
    vlSelf->conv1__DOT__window_sum_1 = ((((((((((((
                                                   ((((((((((((vlSelf->conv1__DOT__window_mul_result_1
                                                               [0U]
                                                               [0U] 
                                                               + 
                                                               vlSelf->conv1__DOT__window_mul_result_1
                                                               [0U]
                                                               [1U]) 
                                                              + 
                                                              vlSelf->conv1__DOT__window_mul_result_1
                                                              [0U]
                                                              [2U]) 
                                                             + 
                                                             vlSelf->conv1__DOT__window_mul_result_1
                                                             [0U]
                                                             [3U]) 
                                                            + 
                                                            vlSelf->conv1__DOT__window_mul_result_1
                                                            [0U]
                                                            [4U]) 
                                                           + 
                                                           vlSelf->conv1__DOT__window_mul_result_1
                                                           [1U]
                                                           [0U]) 
                                                          + 
                                                          vlSelf->conv1__DOT__window_mul_result_1
                                                          [1U]
                                                          [1U]) 
                                                         + 
                                                         vlSelf->conv1__DOT__window_mul_result_1
                                                         [1U]
                                                         [2U]) 
                                                        + 
                                                        vlSelf->conv1__DOT__window_mul_result_1
                                                        [1U]
                                                        [3U]) 
                                                       + 
                                                       vlSelf->conv1__DOT__window_mul_result_1
                                                       [1U]
                                                       [4U]) 
                                                      + 
                                                      vlSelf->conv1__DOT__window_mul_result_1
                                                      [2U]
                                                      [0U]) 
                                                     + 
                                                     vlSelf->conv1__DOT__window_mul_result_1
                                                     [2U]
                                                     [1U]) 
                                                    + 
                                                    vlSelf->conv1__DOT__window_mul_result_1
                                                    [2U]
                                                    [2U]) 
                                                   + 
                                                   vlSelf->conv1__DOT__window_mul_result_1
                                                   [2U]
                                                   [3U]) 
                                                  + 
                                                  vlSelf->conv1__DOT__window_mul_result_1
                                                  [2U]
                                                  [4U]) 
                                                 + 
                                                 vlSelf->conv1__DOT__window_mul_result_1
                                                 [3U]
                                                 [0U]) 
                                                + vlSelf->conv1__DOT__window_mul_result_1
                                                [3U]
                                                [1U]) 
                                               + vlSelf->conv1__DOT__window_mul_result_1
                                               [3U]
                                               [2U]) 
                                              + vlSelf->conv1__DOT__window_mul_result_1
                                              [3U][3U]) 
                                             + vlSelf->conv1__DOT__window_mul_result_1
                                             [3U][4U]) 
                                            + vlSelf->conv1__DOT__window_mul_result_1
                                            [4U][0U]) 
                                           + vlSelf->conv1__DOT__window_mul_result_1
                                           [4U][1U]) 
                                          + vlSelf->conv1__DOT__window_mul_result_1
                                          [4U][2U]) 
                                         + vlSelf->conv1__DOT__window_mul_result_1
                                         [4U][3U]) 
                                        + vlSelf->conv1__DOT__window_mul_result_1
                                        [4U][4U]);
    vlSelf->cnn_data_out = ((vlSelf->conv1__DOT__window_sum_1 
                             >> 0x1fU) ? 0U : vlSelf->conv1__DOT__window_sum_1);
}

VL_INLINE_OPT void Vconv1___024root___combo__TOP__5(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___combo__TOP__5\n"); );
    // Body
    vlSelf->conv1__DOT__window_in[0U] = vlSelf->cnn_data_in;
}

VL_INLINE_OPT void Vconv1___024root___sequent__TOP__6(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___sequent__TOP__6\n"); );
    // Body
    vlSelf->conv1__DOT__window_in[1U] = vlSelf->conv1__DOT__window_out
        [0U];
    vlSelf->conv1__DOT__window_in[2U] = vlSelf->conv1__DOT__window_out
        [1U];
    vlSelf->conv1__DOT__window_in[3U] = vlSelf->conv1__DOT__window_out
        [2U];
    vlSelf->conv1__DOT__window_in[4U] = vlSelf->conv1__DOT__window_out
        [3U];
}

void Vconv1___024root___eval(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vconv1___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vconv1___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vconv1___024root___combo__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vconv1___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
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
    if (VL_UNLIKELY((vlSelf->img_in_en & 0xfeU))) {
        Verilated::overWidthError("img_in_en");}
}
#endif  // VL_DEBUG
