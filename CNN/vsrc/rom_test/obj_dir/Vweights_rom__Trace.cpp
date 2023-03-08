// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vweights_rom__Syms.h"


void Vweights_rom___024root__traceChgSub0(Vweights_rom___024root* vlSelf, VerilatedVcd* tracep);

void Vweights_rom___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vweights_rom___024root* const __restrict vlSelf = static_cast<Vweights_rom___024root*>(voidSelf);
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vweights_rom___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vweights_rom___024root__traceChgSub0(Vweights_rom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgSData(oldp+0,(vlSelf->weights_rom__DOT__para_rom[0]),16);
            tracep->chgSData(oldp+1,(vlSelf->weights_rom__DOT__para_rom[1]),16);
            tracep->chgSData(oldp+2,(vlSelf->weights_rom__DOT__para_rom[2]),16);
            tracep->chgSData(oldp+3,(vlSelf->weights_rom__DOT__para_rom[3]),16);
            tracep->chgSData(oldp+4,(vlSelf->weights_rom__DOT__para_rom[4]),16);
            tracep->chgSData(oldp+5,(vlSelf->weights_rom__DOT__para_rom[5]),16);
            tracep->chgSData(oldp+6,(vlSelf->weights_rom__DOT__para_rom[6]),16);
            tracep->chgSData(oldp+7,(vlSelf->weights_rom__DOT__para_rom[7]),16);
            tracep->chgSData(oldp+8,(vlSelf->weights_rom__DOT__para_rom[8]),16);
            tracep->chgSData(oldp+9,(vlSelf->weights_rom__DOT__para_rom[9]),16);
            tracep->chgSData(oldp+10,(vlSelf->weights_rom__DOT__para_rom[10]),16);
            tracep->chgSData(oldp+11,(vlSelf->weights_rom__DOT__para_rom[11]),16);
            tracep->chgSData(oldp+12,(vlSelf->weights_rom__DOT__para_rom[12]),16);
            tracep->chgSData(oldp+13,(vlSelf->weights_rom__DOT__para_rom[13]),16);
            tracep->chgSData(oldp+14,(vlSelf->weights_rom__DOT__para_rom[14]),16);
            tracep->chgSData(oldp+15,(vlSelf->weights_rom__DOT__para_rom[15]),16);
            tracep->chgSData(oldp+16,(vlSelf->weights_rom__DOT__para_rom[16]),16);
            tracep->chgSData(oldp+17,(vlSelf->weights_rom__DOT__para_rom[17]),16);
            tracep->chgSData(oldp+18,(vlSelf->weights_rom__DOT__para_rom[18]),16);
            tracep->chgSData(oldp+19,(vlSelf->weights_rom__DOT__para_rom[19]),16);
            tracep->chgSData(oldp+20,(vlSelf->weights_rom__DOT__para_rom[20]),16);
            tracep->chgSData(oldp+21,(vlSelf->weights_rom__DOT__para_rom[21]),16);
            tracep->chgSData(oldp+22,(vlSelf->weights_rom__DOT__para_rom[22]),16);
            tracep->chgSData(oldp+23,(vlSelf->weights_rom__DOT__para_rom[23]),16);
            tracep->chgSData(oldp+24,(vlSelf->weights_rom__DOT__para_rom[24]),16);
        }
        tracep->chgBit(oldp+25,(vlSelf->clk));
        tracep->chgBit(oldp+26,(vlSelf->rom_r_en));
        tracep->chgCData(oldp+27,(vlSelf->rom_raddr),5);
        tracep->chgSData(oldp+28,(vlSelf->rom_dout),16);
    }
}

void Vweights_rom___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vweights_rom___024root* const __restrict vlSelf = static_cast<Vweights_rom___024root*>(voidSelf);
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    }
}
