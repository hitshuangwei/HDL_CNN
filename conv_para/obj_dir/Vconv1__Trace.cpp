// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconv1__Syms.h"


void Vconv1___024root__traceChgSub0(Vconv1___024root* vlSelf, VerilatedVcd* tracep);

void Vconv1___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vconv1___024root* const __restrict vlSelf = static_cast<Vconv1___024root*>(voidSelf);
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vconv1___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vconv1___024root__traceChgSub0(Vconv1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgSData(oldp+0,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[0]),16);
            tracep->chgSData(oldp+1,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[1]),16);
            tracep->chgSData(oldp+2,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[2]),16);
            tracep->chgSData(oldp+3,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[3]),16);
            tracep->chgSData(oldp+4,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[4]),16);
            tracep->chgSData(oldp+5,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[5]),16);
            tracep->chgSData(oldp+6,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[6]),16);
            tracep->chgSData(oldp+7,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[7]),16);
            tracep->chgSData(oldp+8,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[8]),16);
            tracep->chgSData(oldp+9,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[9]),16);
            tracep->chgSData(oldp+10,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[10]),16);
            tracep->chgSData(oldp+11,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[11]),16);
            tracep->chgSData(oldp+12,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[12]),16);
            tracep->chgSData(oldp+13,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[13]),16);
            tracep->chgSData(oldp+14,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[14]),16);
            tracep->chgSData(oldp+15,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[15]),16);
            tracep->chgSData(oldp+16,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[16]),16);
            tracep->chgSData(oldp+17,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[17]),16);
            tracep->chgSData(oldp+18,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[18]),16);
            tracep->chgSData(oldp+19,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[19]),16);
            tracep->chgSData(oldp+20,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[20]),16);
            tracep->chgSData(oldp+21,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[21]),16);
            tracep->chgSData(oldp+22,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[22]),16);
            tracep->chgSData(oldp+23,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[23]),16);
            tracep->chgSData(oldp+24,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[24]),16);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+25,(vlSelf->conv1__DOT__window_out[0]),8);
            tracep->chgCData(oldp+26,(vlSelf->conv1__DOT__window_out[1]),8);
            tracep->chgCData(oldp+27,(vlSelf->conv1__DOT__window_out[2]),8);
            tracep->chgCData(oldp+28,(vlSelf->conv1__DOT__window_out[3]),8);
            tracep->chgCData(oldp+29,(vlSelf->conv1__DOT__window_out[4]),8);
            tracep->chgBit(oldp+30,(vlSelf->conv1__DOT__delay_data_out_valid_o));
            tracep->chgCData(oldp+31,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__graylinebuffer_U__dout),8);
            tracep->chgCData(oldp+32,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
            tracep->chgCData(oldp+33,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
            tracep->chgCData(oldp+34,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
            tracep->chgCData(oldp+35,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
            tracep->chgCData(oldp+36,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
            tracep->chgCData(oldp+37,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
            tracep->chgCData(oldp+38,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
            tracep->chgCData(oldp+39,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
            tracep->chgCData(oldp+40,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
            tracep->chgCData(oldp+41,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
            tracep->chgCData(oldp+42,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
            tracep->chgCData(oldp+43,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
            tracep->chgCData(oldp+44,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
            tracep->chgCData(oldp+45,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
            tracep->chgCData(oldp+46,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
            tracep->chgCData(oldp+47,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
            tracep->chgCData(oldp+48,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
            tracep->chgCData(oldp+49,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
            tracep->chgCData(oldp+50,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
            tracep->chgCData(oldp+51,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
            tracep->chgCData(oldp+52,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
            tracep->chgCData(oldp+53,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
            tracep->chgCData(oldp+54,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
            tracep->chgCData(oldp+55,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
            tracep->chgCData(oldp+56,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
            tracep->chgCData(oldp+57,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__graylinebuffer_U__dout),8);
            tracep->chgCData(oldp+58,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
            tracep->chgCData(oldp+59,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
            tracep->chgCData(oldp+60,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
            tracep->chgCData(oldp+61,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
            tracep->chgCData(oldp+62,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
            tracep->chgCData(oldp+63,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
            tracep->chgCData(oldp+64,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
            tracep->chgCData(oldp+65,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
            tracep->chgCData(oldp+66,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
            tracep->chgCData(oldp+67,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
            tracep->chgCData(oldp+68,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
            tracep->chgCData(oldp+69,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
            tracep->chgCData(oldp+70,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
            tracep->chgCData(oldp+71,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
            tracep->chgCData(oldp+72,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
            tracep->chgCData(oldp+73,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
            tracep->chgCData(oldp+74,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
            tracep->chgCData(oldp+75,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
            tracep->chgCData(oldp+76,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
            tracep->chgCData(oldp+77,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
            tracep->chgCData(oldp+78,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
            tracep->chgCData(oldp+79,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
            tracep->chgCData(oldp+80,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
            tracep->chgCData(oldp+81,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
            tracep->chgCData(oldp+82,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
            tracep->chgCData(oldp+83,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__graylinebuffer_U__dout),8);
            tracep->chgCData(oldp+84,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
            tracep->chgCData(oldp+85,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
            tracep->chgCData(oldp+86,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
            tracep->chgCData(oldp+87,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
            tracep->chgCData(oldp+88,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
            tracep->chgCData(oldp+89,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
            tracep->chgCData(oldp+90,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
            tracep->chgCData(oldp+91,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
            tracep->chgCData(oldp+92,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
            tracep->chgCData(oldp+93,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
            tracep->chgCData(oldp+94,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
            tracep->chgCData(oldp+95,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
            tracep->chgCData(oldp+96,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
            tracep->chgCData(oldp+97,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
            tracep->chgCData(oldp+98,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
            tracep->chgCData(oldp+99,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
            tracep->chgCData(oldp+100,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
            tracep->chgCData(oldp+101,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
            tracep->chgCData(oldp+102,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
            tracep->chgCData(oldp+103,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
            tracep->chgCData(oldp+104,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
            tracep->chgCData(oldp+105,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
            tracep->chgCData(oldp+106,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
            tracep->chgCData(oldp+107,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
            tracep->chgCData(oldp+108,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
            tracep->chgCData(oldp+109,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__graylinebuffer_U__dout),8);
            tracep->chgCData(oldp+110,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
            tracep->chgCData(oldp+111,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
            tracep->chgCData(oldp+112,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
            tracep->chgCData(oldp+113,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
            tracep->chgCData(oldp+114,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
            tracep->chgCData(oldp+115,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
            tracep->chgCData(oldp+116,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
            tracep->chgCData(oldp+117,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
            tracep->chgCData(oldp+118,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
            tracep->chgCData(oldp+119,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
            tracep->chgCData(oldp+120,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
            tracep->chgCData(oldp+121,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
            tracep->chgCData(oldp+122,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
            tracep->chgCData(oldp+123,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
            tracep->chgCData(oldp+124,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
            tracep->chgCData(oldp+125,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
            tracep->chgCData(oldp+126,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
            tracep->chgCData(oldp+127,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
            tracep->chgCData(oldp+128,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
            tracep->chgCData(oldp+129,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
            tracep->chgCData(oldp+130,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
            tracep->chgCData(oldp+131,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
            tracep->chgCData(oldp+132,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
            tracep->chgCData(oldp+133,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
            tracep->chgCData(oldp+134,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
            tracep->chgCData(oldp+135,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__graylinebuffer_U__dout),8);
            tracep->chgCData(oldp+136,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
            tracep->chgCData(oldp+137,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
            tracep->chgCData(oldp+138,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
            tracep->chgCData(oldp+139,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
            tracep->chgCData(oldp+140,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
            tracep->chgCData(oldp+141,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
            tracep->chgCData(oldp+142,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
            tracep->chgCData(oldp+143,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
            tracep->chgCData(oldp+144,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
            tracep->chgCData(oldp+145,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
            tracep->chgCData(oldp+146,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
            tracep->chgCData(oldp+147,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
            tracep->chgCData(oldp+148,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
            tracep->chgCData(oldp+149,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
            tracep->chgCData(oldp+150,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
            tracep->chgCData(oldp+151,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
            tracep->chgCData(oldp+152,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
            tracep->chgCData(oldp+153,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
            tracep->chgCData(oldp+154,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
            tracep->chgCData(oldp+155,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
            tracep->chgCData(oldp+156,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
            tracep->chgCData(oldp+157,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
            tracep->chgCData(oldp+158,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
            tracep->chgCData(oldp+159,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
            tracep->chgCData(oldp+160,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+161,(vlSelf->conv1__DOT__wr_addr),5);
            tracep->chgCData(oldp+162,(vlSelf->conv1__DOT__rd_addr),5);
            tracep->chgCData(oldp+163,((0x1fU & ((IData)(2U) 
                                                 + (IData)(vlSelf->conv1__DOT__wr_addr)))),5);
            tracep->chgCData(oldp+164,(vlSelf->conv1__DOT__window
                                       [0U][0U]),8);
            tracep->chgCData(oldp+165,(vlSelf->conv1__DOT__window
                                       [0U][1U]),8);
            tracep->chgCData(oldp+166,(vlSelf->conv1__DOT__window
                                       [0U][2U]),8);
            tracep->chgCData(oldp+167,(vlSelf->conv1__DOT__window
                                       [0U][3U]),8);
            tracep->chgCData(oldp+168,(vlSelf->conv1__DOT__window
                                       [0U][4U]),8);
            tracep->chgCData(oldp+169,(vlSelf->conv1__DOT__window
                                       [1U][0U]),8);
            tracep->chgCData(oldp+170,(vlSelf->conv1__DOT__window
                                       [1U][1U]),8);
            tracep->chgCData(oldp+171,(vlSelf->conv1__DOT__window
                                       [1U][2U]),8);
            tracep->chgCData(oldp+172,(vlSelf->conv1__DOT__window
                                       [1U][3U]),8);
            tracep->chgCData(oldp+173,(vlSelf->conv1__DOT__window
                                       [1U][4U]),8);
            tracep->chgCData(oldp+174,(vlSelf->conv1__DOT__window
                                       [2U][0U]),8);
            tracep->chgCData(oldp+175,(vlSelf->conv1__DOT__window
                                       [2U][1U]),8);
            tracep->chgCData(oldp+176,(vlSelf->conv1__DOT__window
                                       [2U][2U]),8);
            tracep->chgCData(oldp+177,(vlSelf->conv1__DOT__window
                                       [2U][3U]),8);
            tracep->chgCData(oldp+178,(vlSelf->conv1__DOT__window
                                       [2U][4U]),8);
            tracep->chgCData(oldp+179,(vlSelf->conv1__DOT__window
                                       [3U][0U]),8);
            tracep->chgCData(oldp+180,(vlSelf->conv1__DOT__window
                                       [3U][1U]),8);
            tracep->chgCData(oldp+181,(vlSelf->conv1__DOT__window
                                       [3U][2U]),8);
            tracep->chgCData(oldp+182,(vlSelf->conv1__DOT__window
                                       [3U][3U]),8);
            tracep->chgCData(oldp+183,(vlSelf->conv1__DOT__window
                                       [3U][4U]),8);
            tracep->chgCData(oldp+184,(vlSelf->conv1__DOT__window
                                       [4U][0U]),8);
            tracep->chgCData(oldp+185,(vlSelf->conv1__DOT__window
                                       [4U][1U]),8);
            tracep->chgCData(oldp+186,(vlSelf->conv1__DOT__window
                                       [4U][2U]),8);
            tracep->chgCData(oldp+187,(vlSelf->conv1__DOT__window
                                       [4U][3U]),8);
            tracep->chgCData(oldp+188,(vlSelf->conv1__DOT__window
                                       [4U][4U]),8);
            tracep->chgIData(oldp+189,(vlSelf->conv1__DOT__i),32);
            tracep->chgIData(oldp+190,(vlSelf->conv1__DOT__j),32);
            tracep->chgCData(oldp+191,(vlSelf->conv1__DOT__x_cnt),5);
            tracep->chgCData(oldp+192,(vlSelf->conv1__DOT__y_cnt),5);
            tracep->chgSData(oldp+193,(((0x18U >= (IData)(vlSelf->conv1__DOT__rom_cnt))
                                         ? vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom
                                        [vlSelf->conv1__DOT__rom_cnt]
                                         : 0U)),16);
            tracep->chgSData(oldp+194,(vlSelf->conv1__DOT__c1_w_1
                                       [0U][0U]),16);
            tracep->chgSData(oldp+195,(vlSelf->conv1__DOT__c1_w_1
                                       [0U][1U]),16);
            tracep->chgSData(oldp+196,(vlSelf->conv1__DOT__c1_w_1
                                       [0U][2U]),16);
            tracep->chgSData(oldp+197,(vlSelf->conv1__DOT__c1_w_1
                                       [0U][3U]),16);
            tracep->chgSData(oldp+198,(vlSelf->conv1__DOT__c1_w_1
                                       [0U][4U]),16);
            tracep->chgSData(oldp+199,(vlSelf->conv1__DOT__c1_w_1
                                       [1U][0U]),16);
            tracep->chgSData(oldp+200,(vlSelf->conv1__DOT__c1_w_1
                                       [1U][1U]),16);
            tracep->chgSData(oldp+201,(vlSelf->conv1__DOT__c1_w_1
                                       [1U][2U]),16);
            tracep->chgSData(oldp+202,(vlSelf->conv1__DOT__c1_w_1
                                       [1U][3U]),16);
            tracep->chgSData(oldp+203,(vlSelf->conv1__DOT__c1_w_1
                                       [1U][4U]),16);
            tracep->chgSData(oldp+204,(vlSelf->conv1__DOT__c1_w_1
                                       [2U][0U]),16);
            tracep->chgSData(oldp+205,(vlSelf->conv1__DOT__c1_w_1
                                       [2U][1U]),16);
            tracep->chgSData(oldp+206,(vlSelf->conv1__DOT__c1_w_1
                                       [2U][2U]),16);
            tracep->chgSData(oldp+207,(vlSelf->conv1__DOT__c1_w_1
                                       [2U][3U]),16);
            tracep->chgSData(oldp+208,(vlSelf->conv1__DOT__c1_w_1
                                       [2U][4U]),16);
            tracep->chgSData(oldp+209,(vlSelf->conv1__DOT__c1_w_1
                                       [3U][0U]),16);
            tracep->chgSData(oldp+210,(vlSelf->conv1__DOT__c1_w_1
                                       [3U][1U]),16);
            tracep->chgSData(oldp+211,(vlSelf->conv1__DOT__c1_w_1
                                       [3U][2U]),16);
            tracep->chgSData(oldp+212,(vlSelf->conv1__DOT__c1_w_1
                                       [3U][3U]),16);
            tracep->chgSData(oldp+213,(vlSelf->conv1__DOT__c1_w_1
                                       [3U][4U]),16);
            tracep->chgSData(oldp+214,(vlSelf->conv1__DOT__c1_w_1
                                       [4U][0U]),16);
            tracep->chgSData(oldp+215,(vlSelf->conv1__DOT__c1_w_1
                                       [4U][1U]),16);
            tracep->chgSData(oldp+216,(vlSelf->conv1__DOT__c1_w_1
                                       [4U][2U]),16);
            tracep->chgSData(oldp+217,(vlSelf->conv1__DOT__c1_w_1
                                       [4U][3U]),16);
            tracep->chgSData(oldp+218,(vlSelf->conv1__DOT__c1_w_1
                                       [4U][4U]),16);
            tracep->chgCData(oldp+219,(vlSelf->conv1__DOT__rom_cnt),5);
            tracep->chgIData(oldp+220,(vlSelf->conv1__DOT__window_mul_result_1
                                       [0U][0U]),32);
            tracep->chgIData(oldp+221,(vlSelf->conv1__DOT__window_mul_result_1
                                       [0U][1U]),32);
            tracep->chgIData(oldp+222,(vlSelf->conv1__DOT__window_mul_result_1
                                       [0U][2U]),32);
            tracep->chgIData(oldp+223,(vlSelf->conv1__DOT__window_mul_result_1
                                       [0U][3U]),32);
            tracep->chgIData(oldp+224,(vlSelf->conv1__DOT__window_mul_result_1
                                       [0U][4U]),32);
            tracep->chgIData(oldp+225,(vlSelf->conv1__DOT__window_mul_result_1
                                       [1U][0U]),32);
            tracep->chgIData(oldp+226,(vlSelf->conv1__DOT__window_mul_result_1
                                       [1U][1U]),32);
            tracep->chgIData(oldp+227,(vlSelf->conv1__DOT__window_mul_result_1
                                       [1U][2U]),32);
            tracep->chgIData(oldp+228,(vlSelf->conv1__DOT__window_mul_result_1
                                       [1U][3U]),32);
            tracep->chgIData(oldp+229,(vlSelf->conv1__DOT__window_mul_result_1
                                       [1U][4U]),32);
            tracep->chgIData(oldp+230,(vlSelf->conv1__DOT__window_mul_result_1
                                       [2U][0U]),32);
            tracep->chgIData(oldp+231,(vlSelf->conv1__DOT__window_mul_result_1
                                       [2U][1U]),32);
            tracep->chgIData(oldp+232,(vlSelf->conv1__DOT__window_mul_result_1
                                       [2U][2U]),32);
            tracep->chgIData(oldp+233,(vlSelf->conv1__DOT__window_mul_result_1
                                       [2U][3U]),32);
            tracep->chgIData(oldp+234,(vlSelf->conv1__DOT__window_mul_result_1
                                       [2U][4U]),32);
            tracep->chgIData(oldp+235,(vlSelf->conv1__DOT__window_mul_result_1
                                       [3U][0U]),32);
            tracep->chgIData(oldp+236,(vlSelf->conv1__DOT__window_mul_result_1
                                       [3U][1U]),32);
            tracep->chgIData(oldp+237,(vlSelf->conv1__DOT__window_mul_result_1
                                       [3U][2U]),32);
            tracep->chgIData(oldp+238,(vlSelf->conv1__DOT__window_mul_result_1
                                       [3U][3U]),32);
            tracep->chgIData(oldp+239,(vlSelf->conv1__DOT__window_mul_result_1
                                       [3U][4U]),32);
            tracep->chgIData(oldp+240,(vlSelf->conv1__DOT__window_mul_result_1
                                       [4U][0U]),32);
            tracep->chgIData(oldp+241,(vlSelf->conv1__DOT__window_mul_result_1
                                       [4U][1U]),32);
            tracep->chgIData(oldp+242,(vlSelf->conv1__DOT__window_mul_result_1
                                       [4U][2U]),32);
            tracep->chgIData(oldp+243,(vlSelf->conv1__DOT__window_mul_result_1
                                       [4U][3U]),32);
            tracep->chgIData(oldp+244,(vlSelf->conv1__DOT__window_mul_result_1
                                       [4U][4U]),32);
            tracep->chgIData(oldp+245,(vlSelf->conv1__DOT__window_sum_1),32);
            tracep->chgBit(oldp+246,(((4U <= (IData)(vlSelf->conv1__DOT__x_cnt)) 
                                      & (4U <= (IData)(vlSelf->conv1__DOT__y_cnt)))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [3U] | vlSelf->__Vm_traceActivity
                         [4U]))) {
            tracep->chgCData(oldp+247,(vlSelf->conv1__DOT__window_in[0]),8);
            tracep->chgCData(oldp+248,(vlSelf->conv1__DOT__window_in[1]),8);
            tracep->chgCData(oldp+249,(vlSelf->conv1__DOT__window_in[2]),8);
            tracep->chgCData(oldp+250,(vlSelf->conv1__DOT__window_in[3]),8);
            tracep->chgCData(oldp+251,(vlSelf->conv1__DOT__window_in[4]),8);
            tracep->chgCData(oldp+252,(vlSelf->conv1__DOT__window_in
                                       [0U]),8);
            tracep->chgCData(oldp+253,(vlSelf->conv1__DOT__window_in
                                       [1U]),8);
            tracep->chgCData(oldp+254,(vlSelf->conv1__DOT__window_in
                                       [2U]),8);
            tracep->chgCData(oldp+255,(vlSelf->conv1__DOT__window_in
                                       [3U]),8);
            tracep->chgCData(oldp+256,(vlSelf->conv1__DOT__window_in
                                       [4U]),8);
        }
        tracep->chgBit(oldp+257,(vlSelf->clk));
        tracep->chgBit(oldp+258,(vlSelf->rst_n));
        tracep->chgCData(oldp+259,(vlSelf->cnn_data_in),8);
        tracep->chgBit(oldp+260,(vlSelf->cnn_data_in_valid));
        tracep->chgBit(oldp+261,(vlSelf->img_in_en));
        tracep->chgIData(oldp+262,(vlSelf->cnn_data_out),32);
        tracep->chgBit(oldp+263,(vlSelf->cnn_data_out_valid));
    }
}

void Vconv1___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vconv1___024root* const __restrict vlSelf = static_cast<Vconv1___024root*>(voidSelf);
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    }
}
