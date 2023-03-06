// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vweights_rom__Syms.h"


void Vweights_rom___024root__traceInitSub0(Vweights_rom___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vweights_rom___024root__traceInitTop(Vweights_rom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vweights_rom___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vweights_rom___024root__traceInitSub0(Vweights_rom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+26,"clk", false,-1);
        tracep->declBit(c+27,"rom_r_en", false,-1);
        tracep->declBus(c+28,"rom_raddr", false,-1, 4,0);
        tracep->declBus(c+29,"rom_dout", false,-1, 15,0);
        tracep->declQuad(c+30,"weights_rom FILE_NAME", false,-1, 63,0);
        tracep->declBit(c+26,"weights_rom clk", false,-1);
        tracep->declBit(c+27,"weights_rom rom_r_en", false,-1);
        tracep->declBus(c+28,"weights_rom rom_raddr", false,-1, 4,0);
        tracep->declBus(c+29,"weights_rom rom_dout", false,-1, 15,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+1+i*1,"weights_rom para_rom", true,(i+0), 15,0);}}
    }
}

void Vweights_rom___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vweights_rom___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vweights_rom___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vweights_rom___024root__traceRegister(Vweights_rom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vweights_rom___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vweights_rom___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vweights_rom___024root__traceCleanup, vlSelf);
    }
}

void Vweights_rom___024root__traceFullSub0(Vweights_rom___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vweights_rom___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vweights_rom___024root* const __restrict vlSelf = static_cast<Vweights_rom___024root*>(voidSelf);
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vweights_rom___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vweights_rom___024root__traceFullSub0(Vweights_rom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->weights_rom__DOT__para_rom[0]),16);
        tracep->fullSData(oldp+2,(vlSelf->weights_rom__DOT__para_rom[1]),16);
        tracep->fullSData(oldp+3,(vlSelf->weights_rom__DOT__para_rom[2]),16);
        tracep->fullSData(oldp+4,(vlSelf->weights_rom__DOT__para_rom[3]),16);
        tracep->fullSData(oldp+5,(vlSelf->weights_rom__DOT__para_rom[4]),16);
        tracep->fullSData(oldp+6,(vlSelf->weights_rom__DOT__para_rom[5]),16);
        tracep->fullSData(oldp+7,(vlSelf->weights_rom__DOT__para_rom[6]),16);
        tracep->fullSData(oldp+8,(vlSelf->weights_rom__DOT__para_rom[7]),16);
        tracep->fullSData(oldp+9,(vlSelf->weights_rom__DOT__para_rom[8]),16);
        tracep->fullSData(oldp+10,(vlSelf->weights_rom__DOT__para_rom[9]),16);
        tracep->fullSData(oldp+11,(vlSelf->weights_rom__DOT__para_rom[10]),16);
        tracep->fullSData(oldp+12,(vlSelf->weights_rom__DOT__para_rom[11]),16);
        tracep->fullSData(oldp+13,(vlSelf->weights_rom__DOT__para_rom[12]),16);
        tracep->fullSData(oldp+14,(vlSelf->weights_rom__DOT__para_rom[13]),16);
        tracep->fullSData(oldp+15,(vlSelf->weights_rom__DOT__para_rom[14]),16);
        tracep->fullSData(oldp+16,(vlSelf->weights_rom__DOT__para_rom[15]),16);
        tracep->fullSData(oldp+17,(vlSelf->weights_rom__DOT__para_rom[16]),16);
        tracep->fullSData(oldp+18,(vlSelf->weights_rom__DOT__para_rom[17]),16);
        tracep->fullSData(oldp+19,(vlSelf->weights_rom__DOT__para_rom[18]),16);
        tracep->fullSData(oldp+20,(vlSelf->weights_rom__DOT__para_rom[19]),16);
        tracep->fullSData(oldp+21,(vlSelf->weights_rom__DOT__para_rom[20]),16);
        tracep->fullSData(oldp+22,(vlSelf->weights_rom__DOT__para_rom[21]),16);
        tracep->fullSData(oldp+23,(vlSelf->weights_rom__DOT__para_rom[22]),16);
        tracep->fullSData(oldp+24,(vlSelf->weights_rom__DOT__para_rom[23]),16);
        tracep->fullSData(oldp+25,(vlSelf->weights_rom__DOT__para_rom[24]),16);
        tracep->fullBit(oldp+26,(vlSelf->clk));
        tracep->fullBit(oldp+27,(vlSelf->rom_r_en));
        tracep->fullCData(oldp+28,(vlSelf->rom_raddr),5);
        tracep->fullSData(oldp+29,(vlSelf->rom_dout),16);
        tracep->fullQData(oldp+30,(0x66696c652e747874ULL),64);
    }
}
