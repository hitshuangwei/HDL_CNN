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
            tracep->chgCData(oldp+32,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__graylinebuffer_U__dout),8);
            tracep->chgCData(oldp+33,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__graylinebuffer_U__dout),8);
            tracep->chgCData(oldp+34,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__graylinebuffer_U__dout),8);
            tracep->chgCData(oldp+35,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__graylinebuffer_U__dout),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+36,(vlSelf->conv1__DOT__wr_addr),8);
            tracep->chgCData(oldp+37,(vlSelf->conv1__DOT__rd_addr),8);
            tracep->chgCData(oldp+38,((0xffU & ((IData)(2U) 
                                                + (IData)(vlSelf->conv1__DOT__wr_addr)))),8);
            tracep->chgCData(oldp+39,(vlSelf->conv1__DOT__window
                                      [0U][0U]),8);
            tracep->chgCData(oldp+40,(vlSelf->conv1__DOT__window
                                      [0U][1U]),8);
            tracep->chgCData(oldp+41,(vlSelf->conv1__DOT__window
                                      [0U][2U]),8);
            tracep->chgCData(oldp+42,(vlSelf->conv1__DOT__window
                                      [0U][3U]),8);
            tracep->chgCData(oldp+43,(vlSelf->conv1__DOT__window
                                      [0U][4U]),8);
            tracep->chgCData(oldp+44,(vlSelf->conv1__DOT__window
                                      [1U][0U]),8);
            tracep->chgCData(oldp+45,(vlSelf->conv1__DOT__window
                                      [1U][1U]),8);
            tracep->chgCData(oldp+46,(vlSelf->conv1__DOT__window
                                      [1U][2U]),8);
            tracep->chgCData(oldp+47,(vlSelf->conv1__DOT__window
                                      [1U][3U]),8);
            tracep->chgCData(oldp+48,(vlSelf->conv1__DOT__window
                                      [1U][4U]),8);
            tracep->chgCData(oldp+49,(vlSelf->conv1__DOT__window
                                      [2U][0U]),8);
            tracep->chgCData(oldp+50,(vlSelf->conv1__DOT__window
                                      [2U][1U]),8);
            tracep->chgCData(oldp+51,(vlSelf->conv1__DOT__window
                                      [2U][2U]),8);
            tracep->chgCData(oldp+52,(vlSelf->conv1__DOT__window
                                      [2U][3U]),8);
            tracep->chgCData(oldp+53,(vlSelf->conv1__DOT__window
                                      [2U][4U]),8);
            tracep->chgCData(oldp+54,(vlSelf->conv1__DOT__window
                                      [3U][0U]),8);
            tracep->chgCData(oldp+55,(vlSelf->conv1__DOT__window
                                      [3U][1U]),8);
            tracep->chgCData(oldp+56,(vlSelf->conv1__DOT__window
                                      [3U][2U]),8);
            tracep->chgCData(oldp+57,(vlSelf->conv1__DOT__window
                                      [3U][3U]),8);
            tracep->chgCData(oldp+58,(vlSelf->conv1__DOT__window
                                      [3U][4U]),8);
            tracep->chgCData(oldp+59,(vlSelf->conv1__DOT__window
                                      [4U][0U]),8);
            tracep->chgCData(oldp+60,(vlSelf->conv1__DOT__window
                                      [4U][1U]),8);
            tracep->chgCData(oldp+61,(vlSelf->conv1__DOT__window
                                      [4U][2U]),8);
            tracep->chgCData(oldp+62,(vlSelf->conv1__DOT__window
                                      [4U][3U]),8);
            tracep->chgCData(oldp+63,(vlSelf->conv1__DOT__window
                                      [4U][4U]),8);
            tracep->chgIData(oldp+64,(vlSelf->conv1__DOT__i),32);
            tracep->chgIData(oldp+65,(vlSelf->conv1__DOT__j),32);
            tracep->chgSData(oldp+66,(vlSelf->conv1__DOT__x_cnt),9);
            tracep->chgSData(oldp+67,(vlSelf->conv1__DOT__y_cnt),9);
            tracep->chgSData(oldp+68,(((0x18U >= (IData)(vlSelf->conv1__DOT__rom_cnt))
                                        ? vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom
                                       [vlSelf->conv1__DOT__rom_cnt]
                                        : 0U)),16);
            tracep->chgSData(oldp+69,(vlSelf->conv1__DOT__c1_w_1
                                      [0U][0U]),16);
            tracep->chgSData(oldp+70,(vlSelf->conv1__DOT__c1_w_1
                                      [0U][1U]),16);
            tracep->chgSData(oldp+71,(vlSelf->conv1__DOT__c1_w_1
                                      [0U][2U]),16);
            tracep->chgSData(oldp+72,(vlSelf->conv1__DOT__c1_w_1
                                      [0U][3U]),16);
            tracep->chgSData(oldp+73,(vlSelf->conv1__DOT__c1_w_1
                                      [0U][4U]),16);
            tracep->chgSData(oldp+74,(vlSelf->conv1__DOT__c1_w_1
                                      [1U][0U]),16);
            tracep->chgSData(oldp+75,(vlSelf->conv1__DOT__c1_w_1
                                      [1U][1U]),16);
            tracep->chgSData(oldp+76,(vlSelf->conv1__DOT__c1_w_1
                                      [1U][2U]),16);
            tracep->chgSData(oldp+77,(vlSelf->conv1__DOT__c1_w_1
                                      [1U][3U]),16);
            tracep->chgSData(oldp+78,(vlSelf->conv1__DOT__c1_w_1
                                      [1U][4U]),16);
            tracep->chgSData(oldp+79,(vlSelf->conv1__DOT__c1_w_1
                                      [2U][0U]),16);
            tracep->chgSData(oldp+80,(vlSelf->conv1__DOT__c1_w_1
                                      [2U][1U]),16);
            tracep->chgSData(oldp+81,(vlSelf->conv1__DOT__c1_w_1
                                      [2U][2U]),16);
            tracep->chgSData(oldp+82,(vlSelf->conv1__DOT__c1_w_1
                                      [2U][3U]),16);
            tracep->chgSData(oldp+83,(vlSelf->conv1__DOT__c1_w_1
                                      [2U][4U]),16);
            tracep->chgSData(oldp+84,(vlSelf->conv1__DOT__c1_w_1
                                      [3U][0U]),16);
            tracep->chgSData(oldp+85,(vlSelf->conv1__DOT__c1_w_1
                                      [3U][1U]),16);
            tracep->chgSData(oldp+86,(vlSelf->conv1__DOT__c1_w_1
                                      [3U][2U]),16);
            tracep->chgSData(oldp+87,(vlSelf->conv1__DOT__c1_w_1
                                      [3U][3U]),16);
            tracep->chgSData(oldp+88,(vlSelf->conv1__DOT__c1_w_1
                                      [3U][4U]),16);
            tracep->chgSData(oldp+89,(vlSelf->conv1__DOT__c1_w_1
                                      [4U][0U]),16);
            tracep->chgSData(oldp+90,(vlSelf->conv1__DOT__c1_w_1
                                      [4U][1U]),16);
            tracep->chgSData(oldp+91,(vlSelf->conv1__DOT__c1_w_1
                                      [4U][2U]),16);
            tracep->chgSData(oldp+92,(vlSelf->conv1__DOT__c1_w_1
                                      [4U][3U]),16);
            tracep->chgSData(oldp+93,(vlSelf->conv1__DOT__c1_w_1
                                      [4U][4U]),16);
            tracep->chgCData(oldp+94,(vlSelf->conv1__DOT__rom_cnt),5);
            tracep->chgIData(oldp+95,(vlSelf->conv1__DOT__window_mul_result_1
                                      [0U][0U]),32);
            tracep->chgIData(oldp+96,(vlSelf->conv1__DOT__window_mul_result_1
                                      [0U][1U]),32);
            tracep->chgIData(oldp+97,(vlSelf->conv1__DOT__window_mul_result_1
                                      [0U][2U]),32);
            tracep->chgIData(oldp+98,(vlSelf->conv1__DOT__window_mul_result_1
                                      [0U][3U]),32);
            tracep->chgIData(oldp+99,(vlSelf->conv1__DOT__window_mul_result_1
                                      [0U][4U]),32);
            tracep->chgIData(oldp+100,(vlSelf->conv1__DOT__window_mul_result_1
                                       [1U][0U]),32);
            tracep->chgIData(oldp+101,(vlSelf->conv1__DOT__window_mul_result_1
                                       [1U][1U]),32);
            tracep->chgIData(oldp+102,(vlSelf->conv1__DOT__window_mul_result_1
                                       [1U][2U]),32);
            tracep->chgIData(oldp+103,(vlSelf->conv1__DOT__window_mul_result_1
                                       [1U][3U]),32);
            tracep->chgIData(oldp+104,(vlSelf->conv1__DOT__window_mul_result_1
                                       [1U][4U]),32);
            tracep->chgIData(oldp+105,(vlSelf->conv1__DOT__window_mul_result_1
                                       [2U][0U]),32);
            tracep->chgIData(oldp+106,(vlSelf->conv1__DOT__window_mul_result_1
                                       [2U][1U]),32);
            tracep->chgIData(oldp+107,(vlSelf->conv1__DOT__window_mul_result_1
                                       [2U][2U]),32);
            tracep->chgIData(oldp+108,(vlSelf->conv1__DOT__window_mul_result_1
                                       [2U][3U]),32);
            tracep->chgIData(oldp+109,(vlSelf->conv1__DOT__window_mul_result_1
                                       [2U][4U]),32);
            tracep->chgIData(oldp+110,(vlSelf->conv1__DOT__window_mul_result_1
                                       [3U][0U]),32);
            tracep->chgIData(oldp+111,(vlSelf->conv1__DOT__window_mul_result_1
                                       [3U][1U]),32);
            tracep->chgIData(oldp+112,(vlSelf->conv1__DOT__window_mul_result_1
                                       [3U][2U]),32);
            tracep->chgIData(oldp+113,(vlSelf->conv1__DOT__window_mul_result_1
                                       [3U][3U]),32);
            tracep->chgIData(oldp+114,(vlSelf->conv1__DOT__window_mul_result_1
                                       [3U][4U]),32);
            tracep->chgIData(oldp+115,(vlSelf->conv1__DOT__window_mul_result_1
                                       [4U][0U]),32);
            tracep->chgIData(oldp+116,(vlSelf->conv1__DOT__window_mul_result_1
                                       [4U][1U]),32);
            tracep->chgIData(oldp+117,(vlSelf->conv1__DOT__window_mul_result_1
                                       [4U][2U]),32);
            tracep->chgIData(oldp+118,(vlSelf->conv1__DOT__window_mul_result_1
                                       [4U][3U]),32);
            tracep->chgIData(oldp+119,(vlSelf->conv1__DOT__window_mul_result_1
                                       [4U][4U]),32);
            tracep->chgIData(oldp+120,(vlSelf->conv1__DOT__window_sum_1),32);
            tracep->chgBit(oldp+121,(((4U <= (IData)(vlSelf->conv1__DOT__x_cnt)) 
                                      & (4U <= (IData)(vlSelf->conv1__DOT__y_cnt)))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [3U] | vlSelf->__Vm_traceActivity
                         [4U]))) {
            tracep->chgCData(oldp+122,(vlSelf->conv1__DOT__window_in[0]),8);
            tracep->chgCData(oldp+123,(vlSelf->conv1__DOT__window_in[1]),8);
            tracep->chgCData(oldp+124,(vlSelf->conv1__DOT__window_in[2]),8);
            tracep->chgCData(oldp+125,(vlSelf->conv1__DOT__window_in[3]),8);
            tracep->chgCData(oldp+126,(vlSelf->conv1__DOT__window_in[4]),8);
            tracep->chgCData(oldp+127,(vlSelf->conv1__DOT__window_in
                                       [0U]),8);
            tracep->chgCData(oldp+128,(vlSelf->conv1__DOT__window_in
                                       [1U]),8);
            tracep->chgCData(oldp+129,(vlSelf->conv1__DOT__window_in
                                       [2U]),8);
            tracep->chgCData(oldp+130,(vlSelf->conv1__DOT__window_in
                                       [3U]),8);
            tracep->chgCData(oldp+131,(vlSelf->conv1__DOT__window_in
                                       [4U]),8);
        }
        tracep->chgBit(oldp+132,(vlSelf->clk));
        tracep->chgBit(oldp+133,(vlSelf->rst_n));
        tracep->chgCData(oldp+134,(vlSelf->cnn_data_in),8);
        tracep->chgBit(oldp+135,(vlSelf->cnn_data_in_valid));
        tracep->chgBit(oldp+136,(vlSelf->img_in_en));
        tracep->chgIData(oldp+137,(vlSelf->cnn_data_out),32);
        tracep->chgBit(oldp+138,(vlSelf->cnn_data_out_valid));
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
