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

extern const VlWide<11>/*351:0*/ Vconv1__ConstPool__CONST_37372f90_0;

void Vconv1___024root___initial__TOP__1(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___initial__TOP__1\n"); );
    // Body
    VL_READMEM_N(true, 16, 25, 0, VL_CVT_PACK_STR_NW(11, Vconv1__ConstPool__CONST_37372f90_0)
                 ,  &(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom)
                 , 0, ~0ULL);
}

void Vconv1___024root___settle__TOP__4(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___settle__TOP__4\n"); );
    // Variables
    SData/*15:0*/ conv1__DOT____Vlvbound4;
    // Body
    vlSelf->conv1__DOT__window_in[0U] = vlSelf->cnn_data_in;
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
    vlSelf->conv1__DOT__window_out[0U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__graylinebuffer_U__dout;
    vlSelf->conv1__DOT__window_out[1U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__graylinebuffer_U__dout;
    vlSelf->conv1__DOT__window_out[2U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__graylinebuffer_U__dout;
    vlSelf->conv1__DOT__window_out[3U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__graylinebuffer_U__dout;
    vlSelf->conv1__DOT__window_out[4U] = vlSelf->conv1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__graylinebuffer_U__dout;
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
    vlSelf->cnn_data_out = ((vlSelf->conv1__DOT__window_sum_1 
                             >> 0x1fU) ? 0U : vlSelf->conv1__DOT__window_sum_1);
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
    Vconv1___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void Vconv1___024root___eval_settle(Vconv1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1___024root___eval_settle\n"); );
    // Body
    Vconv1___024root___settle__TOP__4(vlSelf);
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
    vlSelf->img_in_en = VL_RAND_RESET_I(1);
    vlSelf->cnn_data_out = VL_RAND_RESET_I(32);
    vlSelf->cnn_data_out_valid = VL_RAND_RESET_I(1);
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
    vlSelf->conv1__DOT__x_cnt = VL_RAND_RESET_I(5);
    vlSelf->conv1__DOT__y_cnt = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        for (int __Vi1=0; __Vi1<5; ++__Vi1) {
            vlSelf->conv1__DOT__c1_w_1[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->conv1__DOT__rom_cnt = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        for (int __Vi1=0; __Vi1<5; ++__Vi1) {
            vlSelf->conv1__DOT__window_mul_result_1[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->conv1__DOT__window_sum_1 = VL_RAND_RESET_I(32);
    vlSelf->conv1__DOT__delay_data_out_valid_o = VL_RAND_RESET_I(1);
    vlSelf->conv1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__graylinebuffer_U__dout = VL_RAND_RESET_I(8);
    vlSelf->conv1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__graylinebuffer_U__dout = VL_RAND_RESET_I(8);
    vlSelf->conv1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__graylinebuffer_U__dout = VL_RAND_RESET_I(8);
    vlSelf->conv1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__graylinebuffer_U__dout = VL_RAND_RESET_I(8);
    vlSelf->conv1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__graylinebuffer_U__dout = VL_RAND_RESET_I(8);
    vlSelf->conv1__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    vlSelf->conv1__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    vlSelf->conv1__DOT____Vlvbound5 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<25; ++__Vi0) {
        vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[__Vi0] = VL_RAND_RESET_I(16);
    }
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
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
