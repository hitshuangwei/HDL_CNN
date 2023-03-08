// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vweights_rom.h for the primary calling header

#include "Vweights_rom___024root.h"
#include "Vweights_rom__Syms.h"

//==========

VL_INLINE_OPT void Vweights_rom___024root___sequent__TOP__1(Vweights_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vweights_rom___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->rom_dout = ((IData)(vlSelf->rom_r_en) ? 
                        ((0x18U >= (IData)(vlSelf->rom_raddr))
                          ? vlSelf->weights_rom__DOT__para_rom
                         [vlSelf->rom_raddr] : 0U) : 0U);
}

void Vweights_rom___024root___eval(Vweights_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vweights_rom___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vweights_rom___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vweights_rom___024root___change_request_1(Vweights_rom___024root* vlSelf);

VL_INLINE_OPT QData Vweights_rom___024root___change_request(Vweights_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vweights_rom___024root___change_request\n"); );
    // Body
    return (Vweights_rom___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vweights_rom___024root___change_request_1(Vweights_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vweights_rom___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vweights_rom___024root___eval_debug_assertions(Vweights_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vweights_rom___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rom_r_en & 0xfeU))) {
        Verilated::overWidthError("rom_r_en");}
    if (VL_UNLIKELY((vlSelf->rom_raddr & 0xe0U))) {
        Verilated::overWidthError("rom_raddr");}
}
#endif  // VL_DEBUG
