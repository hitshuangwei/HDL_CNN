// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vweights_rom.h for the primary calling header

#include "Vweights_rom___024root.h"
#include "Vweights_rom__Syms.h"

//==========


void Vweights_rom___024root___ctor_var_reset(Vweights_rom___024root* vlSelf);

Vweights_rom___024root::Vweights_rom___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vweights_rom___024root___ctor_var_reset(this);
}

void Vweights_rom___024root::__Vconfigure(Vweights_rom__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vweights_rom___024root::~Vweights_rom___024root() {
}

void Vweights_rom___024root___initial__TOP__2(Vweights_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vweights_rom___024root___initial__TOP__2\n"); );
    // Body
    VL_READMEM_N(true, 16, 25, 0, std::string("file.txt")
                 ,  &(vlSelf->weights_rom__DOT__para_rom)
                 , 0, ~0ULL);
}

void Vweights_rom___024root___eval_initial(Vweights_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vweights_rom___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vweights_rom___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vweights_rom___024root___eval_settle(Vweights_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vweights_rom___024root___eval_settle\n"); );
}

void Vweights_rom___024root___final(Vweights_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vweights_rom___024root___final\n"); );
}

void Vweights_rom___024root___ctor_var_reset(Vweights_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vweights_rom___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rom_r_en = VL_RAND_RESET_I(1);
    vlSelf->rom_raddr = VL_RAND_RESET_I(5);
    vlSelf->rom_dout = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<25; ++__Vi0) {
        vlSelf->weights_rom__DOT__para_rom[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
