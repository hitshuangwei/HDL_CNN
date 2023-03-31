// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconv1__Syms.h"


void Vconv1___024root__traceInitSub0(Vconv1___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vconv1___024root__traceInitTop(Vconv1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vconv1___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vconv1___024root__traceInitSub0(Vconv1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+258,"clk", false,-1);
        tracep->declBit(c+259,"rst_n", false,-1);
        tracep->declBus(c+260,"cnn_data_in", false,-1, 7,0);
        tracep->declBit(c+261,"cnn_data_in_valid", false,-1);
        tracep->declBit(c+262,"img_in_en", false,-1);
        tracep->declBus(c+263,"cnn_data_out", false,-1, 31,0);
        tracep->declBit(c+264,"cnn_data_out_valid", false,-1);
        tracep->declBus(c+265,"conv1 IMG_IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+266,"conv1 KERNEL_WIDTH", false,-1, 31,0);
        tracep->declBit(c+258,"conv1 clk", false,-1);
        tracep->declBit(c+259,"conv1 rst_n", false,-1);
        tracep->declBus(c+260,"conv1 cnn_data_in", false,-1, 7,0);
        tracep->declBit(c+261,"conv1 cnn_data_in_valid", false,-1);
        tracep->declBit(c+262,"conv1 img_in_en", false,-1);
        tracep->declBus(c+263,"conv1 cnn_data_out", false,-1, 31,0);
        tracep->declBit(c+264,"conv1 cnn_data_out_valid", false,-1);
        tracep->declBus(c+162,"conv1 wr_addr", false,-1, 4,0);
        tracep->declBus(c+163,"conv1 rd_addr", false,-1, 4,0);
        tracep->declBus(c+164,"conv1 rd_addr_pre2", false,-1, 4,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+248+i*1,"conv1 window_in", true,(i+0), 7,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+26+i*1,"conv1 window_out", true,(i+0), 7,0);}}
        tracep->declBus(c+165,"conv1 window(0)(0)", false,-1, 7,0);
        tracep->declBus(c+166,"conv1 window(0)(1)", false,-1, 7,0);
        tracep->declBus(c+167,"conv1 window(0)(2)", false,-1, 7,0);
        tracep->declBus(c+168,"conv1 window(0)(3)", false,-1, 7,0);
        tracep->declBus(c+169,"conv1 window(0)(4)", false,-1, 7,0);
        tracep->declBus(c+170,"conv1 window(1)(0)", false,-1, 7,0);
        tracep->declBus(c+171,"conv1 window(1)(1)", false,-1, 7,0);
        tracep->declBus(c+172,"conv1 window(1)(2)", false,-1, 7,0);
        tracep->declBus(c+173,"conv1 window(1)(3)", false,-1, 7,0);
        tracep->declBus(c+174,"conv1 window(1)(4)", false,-1, 7,0);
        tracep->declBus(c+175,"conv1 window(2)(0)", false,-1, 7,0);
        tracep->declBus(c+176,"conv1 window(2)(1)", false,-1, 7,0);
        tracep->declBus(c+177,"conv1 window(2)(2)", false,-1, 7,0);
        tracep->declBus(c+178,"conv1 window(2)(3)", false,-1, 7,0);
        tracep->declBus(c+179,"conv1 window(2)(4)", false,-1, 7,0);
        tracep->declBus(c+180,"conv1 window(3)(0)", false,-1, 7,0);
        tracep->declBus(c+181,"conv1 window(3)(1)", false,-1, 7,0);
        tracep->declBus(c+182,"conv1 window(3)(2)", false,-1, 7,0);
        tracep->declBus(c+183,"conv1 window(3)(3)", false,-1, 7,0);
        tracep->declBus(c+184,"conv1 window(3)(4)", false,-1, 7,0);
        tracep->declBus(c+185,"conv1 window(4)(0)", false,-1, 7,0);
        tracep->declBus(c+186,"conv1 window(4)(1)", false,-1, 7,0);
        tracep->declBus(c+187,"conv1 window(4)(2)", false,-1, 7,0);
        tracep->declBus(c+188,"conv1 window(4)(3)", false,-1, 7,0);
        tracep->declBus(c+189,"conv1 window(4)(4)", false,-1, 7,0);
        tracep->declBus(c+190,"conv1 i", false,-1, 31,0);
        tracep->declBus(c+191,"conv1 j", false,-1, 31,0);
        tracep->declBus(c+192,"conv1 x_cnt", false,-1, 4,0);
        tracep->declBus(c+193,"conv1 y_cnt", false,-1, 4,0);
        tracep->declBit(c+267,"conv1 c1_w_rd_en", false,-1);
        tracep->declBus(c+194,"conv1 rd_c1_w_1_data", false,-1, 15,0);
        tracep->declBus(c+195,"conv1 c1_w_1(0)(0)", false,-1, 15,0);
        tracep->declBus(c+196,"conv1 c1_w_1(0)(1)", false,-1, 15,0);
        tracep->declBus(c+197,"conv1 c1_w_1(0)(2)", false,-1, 15,0);
        tracep->declBus(c+198,"conv1 c1_w_1(0)(3)", false,-1, 15,0);
        tracep->declBus(c+199,"conv1 c1_w_1(0)(4)", false,-1, 15,0);
        tracep->declBus(c+200,"conv1 c1_w_1(1)(0)", false,-1, 15,0);
        tracep->declBus(c+201,"conv1 c1_w_1(1)(1)", false,-1, 15,0);
        tracep->declBus(c+202,"conv1 c1_w_1(1)(2)", false,-1, 15,0);
        tracep->declBus(c+203,"conv1 c1_w_1(1)(3)", false,-1, 15,0);
        tracep->declBus(c+204,"conv1 c1_w_1(1)(4)", false,-1, 15,0);
        tracep->declBus(c+205,"conv1 c1_w_1(2)(0)", false,-1, 15,0);
        tracep->declBus(c+206,"conv1 c1_w_1(2)(1)", false,-1, 15,0);
        tracep->declBus(c+207,"conv1 c1_w_1(2)(2)", false,-1, 15,0);
        tracep->declBus(c+208,"conv1 c1_w_1(2)(3)", false,-1, 15,0);
        tracep->declBus(c+209,"conv1 c1_w_1(2)(4)", false,-1, 15,0);
        tracep->declBus(c+210,"conv1 c1_w_1(3)(0)", false,-1, 15,0);
        tracep->declBus(c+211,"conv1 c1_w_1(3)(1)", false,-1, 15,0);
        tracep->declBus(c+212,"conv1 c1_w_1(3)(2)", false,-1, 15,0);
        tracep->declBus(c+213,"conv1 c1_w_1(3)(3)", false,-1, 15,0);
        tracep->declBus(c+214,"conv1 c1_w_1(3)(4)", false,-1, 15,0);
        tracep->declBus(c+215,"conv1 c1_w_1(4)(0)", false,-1, 15,0);
        tracep->declBus(c+216,"conv1 c1_w_1(4)(1)", false,-1, 15,0);
        tracep->declBus(c+217,"conv1 c1_w_1(4)(2)", false,-1, 15,0);
        tracep->declBus(c+218,"conv1 c1_w_1(4)(3)", false,-1, 15,0);
        tracep->declBus(c+219,"conv1 c1_w_1(4)(4)", false,-1, 15,0);
        tracep->declBus(c+220,"conv1 rom_cnt", false,-1, 4,0);
        tracep->declBus(c+221,"conv1 window_mul_result_1(0)(0)", false,-1, 31,0);
        tracep->declBus(c+222,"conv1 window_mul_result_1(0)(1)", false,-1, 31,0);
        tracep->declBus(c+223,"conv1 window_mul_result_1(0)(2)", false,-1, 31,0);
        tracep->declBus(c+224,"conv1 window_mul_result_1(0)(3)", false,-1, 31,0);
        tracep->declBus(c+225,"conv1 window_mul_result_1(0)(4)", false,-1, 31,0);
        tracep->declBus(c+226,"conv1 window_mul_result_1(1)(0)", false,-1, 31,0);
        tracep->declBus(c+227,"conv1 window_mul_result_1(1)(1)", false,-1, 31,0);
        tracep->declBus(c+228,"conv1 window_mul_result_1(1)(2)", false,-1, 31,0);
        tracep->declBus(c+229,"conv1 window_mul_result_1(1)(3)", false,-1, 31,0);
        tracep->declBus(c+230,"conv1 window_mul_result_1(1)(4)", false,-1, 31,0);
        tracep->declBus(c+231,"conv1 window_mul_result_1(2)(0)", false,-1, 31,0);
        tracep->declBus(c+232,"conv1 window_mul_result_1(2)(1)", false,-1, 31,0);
        tracep->declBus(c+233,"conv1 window_mul_result_1(2)(2)", false,-1, 31,0);
        tracep->declBus(c+234,"conv1 window_mul_result_1(2)(3)", false,-1, 31,0);
        tracep->declBus(c+235,"conv1 window_mul_result_1(2)(4)", false,-1, 31,0);
        tracep->declBus(c+236,"conv1 window_mul_result_1(3)(0)", false,-1, 31,0);
        tracep->declBus(c+237,"conv1 window_mul_result_1(3)(1)", false,-1, 31,0);
        tracep->declBus(c+238,"conv1 window_mul_result_1(3)(2)", false,-1, 31,0);
        tracep->declBus(c+239,"conv1 window_mul_result_1(3)(3)", false,-1, 31,0);
        tracep->declBus(c+240,"conv1 window_mul_result_1(3)(4)", false,-1, 31,0);
        tracep->declBus(c+241,"conv1 window_mul_result_1(4)(0)", false,-1, 31,0);
        tracep->declBus(c+242,"conv1 window_mul_result_1(4)(1)", false,-1, 31,0);
        tracep->declBus(c+243,"conv1 window_mul_result_1(4)(2)", false,-1, 31,0);
        tracep->declBus(c+244,"conv1 window_mul_result_1(4)(3)", false,-1, 31,0);
        tracep->declBus(c+245,"conv1 window_mul_result_1(4)(4)", false,-1, 31,0);
        tracep->declBus(c+246,"conv1 window_sum_1", false,-1, 31,0);
        tracep->declBit(c+247,"conv1 data_out_valid_o", false,-1);
        tracep->declBit(c+31,"conv1 delay_data_out_valid_o", false,-1);
        tracep->declArray(c+268,"conv1 weights_rom_u1 FILE_NAME", false,-1, 327,0);
        tracep->declBit(c+267,"conv1 weights_rom_u1 rom_r_en", false,-1);
        tracep->declBus(c+220,"conv1 weights_rom_u1 rom_raddr", false,-1, 4,0);
        tracep->declBus(c+194,"conv1 weights_rom_u1 rom_dout", false,-1, 15,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+1+i*1,"conv1 weights_rom_u1 para_rom", true,(i+0), 15,0);}}
        tracep->declBus(c+265,"conv1 genblk2[0] graylinebuffer_U IMG_IN_WIDTH", false,-1, 31,0);
        tracep->declBit(c+258,"conv1 genblk2[0] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+258,"conv1 genblk2[0] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+261,"conv1 genblk2[0] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+267,"conv1 genblk2[0] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+162,"conv1 genblk2[0] graylinebuffer_U waddr", false,-1, 4,0);
        tracep->declBus(c+163,"conv1 genblk2[0] graylinebuffer_U raddr", false,-1, 4,0);
        tracep->declBus(c+253,"conv1 genblk2[0] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+32,"conv1 genblk2[0] graylinebuffer_U dout", false,-1, 7,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+33+i*1,"conv1 genblk2[0] graylinebuffer_U buffer", true,(i+0), 7,0);}}
        tracep->declBus(c+265,"conv1 genblk2[1] graylinebuffer_U IMG_IN_WIDTH", false,-1, 31,0);
        tracep->declBit(c+258,"conv1 genblk2[1] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+258,"conv1 genblk2[1] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+261,"conv1 genblk2[1] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+267,"conv1 genblk2[1] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+162,"conv1 genblk2[1] graylinebuffer_U waddr", false,-1, 4,0);
        tracep->declBus(c+163,"conv1 genblk2[1] graylinebuffer_U raddr", false,-1, 4,0);
        tracep->declBus(c+254,"conv1 genblk2[1] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+58,"conv1 genblk2[1] graylinebuffer_U dout", false,-1, 7,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+59+i*1,"conv1 genblk2[1] graylinebuffer_U buffer", true,(i+0), 7,0);}}
        tracep->declBus(c+265,"conv1 genblk2[2] graylinebuffer_U IMG_IN_WIDTH", false,-1, 31,0);
        tracep->declBit(c+258,"conv1 genblk2[2] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+258,"conv1 genblk2[2] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+261,"conv1 genblk2[2] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+267,"conv1 genblk2[2] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+162,"conv1 genblk2[2] graylinebuffer_U waddr", false,-1, 4,0);
        tracep->declBus(c+163,"conv1 genblk2[2] graylinebuffer_U raddr", false,-1, 4,0);
        tracep->declBus(c+255,"conv1 genblk2[2] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+84,"conv1 genblk2[2] graylinebuffer_U dout", false,-1, 7,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+85+i*1,"conv1 genblk2[2] graylinebuffer_U buffer", true,(i+0), 7,0);}}
        tracep->declBus(c+265,"conv1 genblk2[3] graylinebuffer_U IMG_IN_WIDTH", false,-1, 31,0);
        tracep->declBit(c+258,"conv1 genblk2[3] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+258,"conv1 genblk2[3] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+261,"conv1 genblk2[3] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+267,"conv1 genblk2[3] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+162,"conv1 genblk2[3] graylinebuffer_U waddr", false,-1, 4,0);
        tracep->declBus(c+163,"conv1 genblk2[3] graylinebuffer_U raddr", false,-1, 4,0);
        tracep->declBus(c+256,"conv1 genblk2[3] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+110,"conv1 genblk2[3] graylinebuffer_U dout", false,-1, 7,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+111+i*1,"conv1 genblk2[3] graylinebuffer_U buffer", true,(i+0), 7,0);}}
        tracep->declBus(c+265,"conv1 genblk2[4] graylinebuffer_U IMG_IN_WIDTH", false,-1, 31,0);
        tracep->declBit(c+258,"conv1 genblk2[4] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+258,"conv1 genblk2[4] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+261,"conv1 genblk2[4] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+267,"conv1 genblk2[4] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+162,"conv1 genblk2[4] graylinebuffer_U waddr", false,-1, 4,0);
        tracep->declBus(c+163,"conv1 genblk2[4] graylinebuffer_U raddr", false,-1, 4,0);
        tracep->declBus(c+257,"conv1 genblk2[4] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+136,"conv1 genblk2[4] graylinebuffer_U dout", false,-1, 7,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+137+i*1,"conv1 genblk2[4] graylinebuffer_U buffer", true,(i+0), 7,0);}}
    }
}

void Vconv1___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vconv1___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vconv1___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vconv1___024root__traceRegister(Vconv1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vconv1___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vconv1___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vconv1___024root__traceCleanup, vlSelf);
    }
}

void Vconv1___024root__traceFullSub0(Vconv1___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vconv1___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vconv1___024root* const __restrict vlSelf = static_cast<Vconv1___024root*>(voidSelf);
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vconv1___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<11>/*351:0*/ Vconv1__ConstPool__CONST_37372f90_0;

void Vconv1___024root__traceFullSub0(Vconv1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[0]),16);
        tracep->fullSData(oldp+2,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[1]),16);
        tracep->fullSData(oldp+3,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[2]),16);
        tracep->fullSData(oldp+4,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[3]),16);
        tracep->fullSData(oldp+5,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[4]),16);
        tracep->fullSData(oldp+6,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[5]),16);
        tracep->fullSData(oldp+7,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[6]),16);
        tracep->fullSData(oldp+8,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[7]),16);
        tracep->fullSData(oldp+9,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[8]),16);
        tracep->fullSData(oldp+10,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[9]),16);
        tracep->fullSData(oldp+11,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[10]),16);
        tracep->fullSData(oldp+12,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[11]),16);
        tracep->fullSData(oldp+13,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[12]),16);
        tracep->fullSData(oldp+14,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[13]),16);
        tracep->fullSData(oldp+15,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[14]),16);
        tracep->fullSData(oldp+16,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[15]),16);
        tracep->fullSData(oldp+17,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[16]),16);
        tracep->fullSData(oldp+18,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[17]),16);
        tracep->fullSData(oldp+19,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[18]),16);
        tracep->fullSData(oldp+20,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[19]),16);
        tracep->fullSData(oldp+21,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[20]),16);
        tracep->fullSData(oldp+22,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[21]),16);
        tracep->fullSData(oldp+23,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[22]),16);
        tracep->fullSData(oldp+24,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[23]),16);
        tracep->fullSData(oldp+25,(vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom[24]),16);
        tracep->fullCData(oldp+26,(vlSelf->conv1__DOT__window_out[0]),8);
        tracep->fullCData(oldp+27,(vlSelf->conv1__DOT__window_out[1]),8);
        tracep->fullCData(oldp+28,(vlSelf->conv1__DOT__window_out[2]),8);
        tracep->fullCData(oldp+29,(vlSelf->conv1__DOT__window_out[3]),8);
        tracep->fullCData(oldp+30,(vlSelf->conv1__DOT__window_out[4]),8);
        tracep->fullBit(oldp+31,(vlSelf->conv1__DOT__delay_data_out_valid_o));
        tracep->fullCData(oldp+32,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__graylinebuffer_U__dout),8);
        tracep->fullCData(oldp+33,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
        tracep->fullCData(oldp+34,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
        tracep->fullCData(oldp+35,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
        tracep->fullCData(oldp+36,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
        tracep->fullCData(oldp+37,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
        tracep->fullCData(oldp+38,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
        tracep->fullCData(oldp+39,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
        tracep->fullCData(oldp+40,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
        tracep->fullCData(oldp+41,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
        tracep->fullCData(oldp+42,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
        tracep->fullCData(oldp+43,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
        tracep->fullCData(oldp+44,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
        tracep->fullCData(oldp+45,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
        tracep->fullCData(oldp+46,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
        tracep->fullCData(oldp+47,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
        tracep->fullCData(oldp+48,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
        tracep->fullCData(oldp+49,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
        tracep->fullCData(oldp+50,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
        tracep->fullCData(oldp+51,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
        tracep->fullCData(oldp+52,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
        tracep->fullCData(oldp+53,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
        tracep->fullCData(oldp+54,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
        tracep->fullCData(oldp+55,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
        tracep->fullCData(oldp+56,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
        tracep->fullCData(oldp+57,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
        tracep->fullCData(oldp+58,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__graylinebuffer_U__dout),8);
        tracep->fullCData(oldp+59,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
        tracep->fullCData(oldp+60,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
        tracep->fullCData(oldp+61,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
        tracep->fullCData(oldp+62,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
        tracep->fullCData(oldp+63,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
        tracep->fullCData(oldp+64,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
        tracep->fullCData(oldp+65,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
        tracep->fullCData(oldp+66,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
        tracep->fullCData(oldp+67,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
        tracep->fullCData(oldp+68,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
        tracep->fullCData(oldp+69,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
        tracep->fullCData(oldp+70,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
        tracep->fullCData(oldp+71,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
        tracep->fullCData(oldp+72,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
        tracep->fullCData(oldp+73,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
        tracep->fullCData(oldp+74,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
        tracep->fullCData(oldp+75,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
        tracep->fullCData(oldp+76,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
        tracep->fullCData(oldp+77,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
        tracep->fullCData(oldp+78,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
        tracep->fullCData(oldp+79,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
        tracep->fullCData(oldp+80,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
        tracep->fullCData(oldp+81,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
        tracep->fullCData(oldp+82,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
        tracep->fullCData(oldp+83,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
        tracep->fullCData(oldp+84,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__graylinebuffer_U__dout),8);
        tracep->fullCData(oldp+85,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
        tracep->fullCData(oldp+86,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
        tracep->fullCData(oldp+87,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
        tracep->fullCData(oldp+88,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
        tracep->fullCData(oldp+89,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
        tracep->fullCData(oldp+90,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
        tracep->fullCData(oldp+91,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
        tracep->fullCData(oldp+92,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
        tracep->fullCData(oldp+93,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
        tracep->fullCData(oldp+94,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
        tracep->fullCData(oldp+95,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
        tracep->fullCData(oldp+96,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
        tracep->fullCData(oldp+97,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
        tracep->fullCData(oldp+98,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
        tracep->fullCData(oldp+99,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
        tracep->fullCData(oldp+100,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
        tracep->fullCData(oldp+101,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
        tracep->fullCData(oldp+102,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
        tracep->fullCData(oldp+103,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
        tracep->fullCData(oldp+104,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
        tracep->fullCData(oldp+105,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
        tracep->fullCData(oldp+106,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
        tracep->fullCData(oldp+107,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
        tracep->fullCData(oldp+108,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
        tracep->fullCData(oldp+109,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
        tracep->fullCData(oldp+110,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__graylinebuffer_U__dout),8);
        tracep->fullCData(oldp+111,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
        tracep->fullCData(oldp+112,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
        tracep->fullCData(oldp+113,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
        tracep->fullCData(oldp+114,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
        tracep->fullCData(oldp+115,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
        tracep->fullCData(oldp+116,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
        tracep->fullCData(oldp+117,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
        tracep->fullCData(oldp+118,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
        tracep->fullCData(oldp+119,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
        tracep->fullCData(oldp+120,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
        tracep->fullCData(oldp+121,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
        tracep->fullCData(oldp+122,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
        tracep->fullCData(oldp+123,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
        tracep->fullCData(oldp+124,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
        tracep->fullCData(oldp+125,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
        tracep->fullCData(oldp+126,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
        tracep->fullCData(oldp+127,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
        tracep->fullCData(oldp+128,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
        tracep->fullCData(oldp+129,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
        tracep->fullCData(oldp+130,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
        tracep->fullCData(oldp+131,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
        tracep->fullCData(oldp+132,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
        tracep->fullCData(oldp+133,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
        tracep->fullCData(oldp+134,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
        tracep->fullCData(oldp+135,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
        tracep->fullCData(oldp+136,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__graylinebuffer_U__dout),8);
        tracep->fullCData(oldp+137,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
        tracep->fullCData(oldp+138,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
        tracep->fullCData(oldp+139,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
        tracep->fullCData(oldp+140,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
        tracep->fullCData(oldp+141,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
        tracep->fullCData(oldp+142,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
        tracep->fullCData(oldp+143,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
        tracep->fullCData(oldp+144,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
        tracep->fullCData(oldp+145,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
        tracep->fullCData(oldp+146,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
        tracep->fullCData(oldp+147,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
        tracep->fullCData(oldp+148,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
        tracep->fullCData(oldp+149,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
        tracep->fullCData(oldp+150,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
        tracep->fullCData(oldp+151,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
        tracep->fullCData(oldp+152,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
        tracep->fullCData(oldp+153,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
        tracep->fullCData(oldp+154,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
        tracep->fullCData(oldp+155,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
        tracep->fullCData(oldp+156,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
        tracep->fullCData(oldp+157,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
        tracep->fullCData(oldp+158,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
        tracep->fullCData(oldp+159,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
        tracep->fullCData(oldp+160,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
        tracep->fullCData(oldp+161,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
        tracep->fullCData(oldp+162,(vlSelf->conv1__DOT__wr_addr),5);
        tracep->fullCData(oldp+163,(vlSelf->conv1__DOT__rd_addr),5);
        tracep->fullCData(oldp+164,((0x1fU & ((IData)(2U) 
                                              + (IData)(vlSelf->conv1__DOT__wr_addr)))),5);
        tracep->fullCData(oldp+165,(vlSelf->conv1__DOT__window
                                    [0U][0U]),8);
        tracep->fullCData(oldp+166,(vlSelf->conv1__DOT__window
                                    [0U][1U]),8);
        tracep->fullCData(oldp+167,(vlSelf->conv1__DOT__window
                                    [0U][2U]),8);
        tracep->fullCData(oldp+168,(vlSelf->conv1__DOT__window
                                    [0U][3U]),8);
        tracep->fullCData(oldp+169,(vlSelf->conv1__DOT__window
                                    [0U][4U]),8);
        tracep->fullCData(oldp+170,(vlSelf->conv1__DOT__window
                                    [1U][0U]),8);
        tracep->fullCData(oldp+171,(vlSelf->conv1__DOT__window
                                    [1U][1U]),8);
        tracep->fullCData(oldp+172,(vlSelf->conv1__DOT__window
                                    [1U][2U]),8);
        tracep->fullCData(oldp+173,(vlSelf->conv1__DOT__window
                                    [1U][3U]),8);
        tracep->fullCData(oldp+174,(vlSelf->conv1__DOT__window
                                    [1U][4U]),8);
        tracep->fullCData(oldp+175,(vlSelf->conv1__DOT__window
                                    [2U][0U]),8);
        tracep->fullCData(oldp+176,(vlSelf->conv1__DOT__window
                                    [2U][1U]),8);
        tracep->fullCData(oldp+177,(vlSelf->conv1__DOT__window
                                    [2U][2U]),8);
        tracep->fullCData(oldp+178,(vlSelf->conv1__DOT__window
                                    [2U][3U]),8);
        tracep->fullCData(oldp+179,(vlSelf->conv1__DOT__window
                                    [2U][4U]),8);
        tracep->fullCData(oldp+180,(vlSelf->conv1__DOT__window
                                    [3U][0U]),8);
        tracep->fullCData(oldp+181,(vlSelf->conv1__DOT__window
                                    [3U][1U]),8);
        tracep->fullCData(oldp+182,(vlSelf->conv1__DOT__window
                                    [3U][2U]),8);
        tracep->fullCData(oldp+183,(vlSelf->conv1__DOT__window
                                    [3U][3U]),8);
        tracep->fullCData(oldp+184,(vlSelf->conv1__DOT__window
                                    [3U][4U]),8);
        tracep->fullCData(oldp+185,(vlSelf->conv1__DOT__window
                                    [4U][0U]),8);
        tracep->fullCData(oldp+186,(vlSelf->conv1__DOT__window
                                    [4U][1U]),8);
        tracep->fullCData(oldp+187,(vlSelf->conv1__DOT__window
                                    [4U][2U]),8);
        tracep->fullCData(oldp+188,(vlSelf->conv1__DOT__window
                                    [4U][3U]),8);
        tracep->fullCData(oldp+189,(vlSelf->conv1__DOT__window
                                    [4U][4U]),8);
        tracep->fullIData(oldp+190,(vlSelf->conv1__DOT__i),32);
        tracep->fullIData(oldp+191,(vlSelf->conv1__DOT__j),32);
        tracep->fullCData(oldp+192,(vlSelf->conv1__DOT__x_cnt),5);
        tracep->fullCData(oldp+193,(vlSelf->conv1__DOT__y_cnt),5);
        tracep->fullSData(oldp+194,(((0x18U >= (IData)(vlSelf->conv1__DOT__rom_cnt))
                                      ? vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom
                                     [vlSelf->conv1__DOT__rom_cnt]
                                      : 0U)),16);
        tracep->fullSData(oldp+195,(vlSelf->conv1__DOT__c1_w_1
                                    [0U][0U]),16);
        tracep->fullSData(oldp+196,(vlSelf->conv1__DOT__c1_w_1
                                    [0U][1U]),16);
        tracep->fullSData(oldp+197,(vlSelf->conv1__DOT__c1_w_1
                                    [0U][2U]),16);
        tracep->fullSData(oldp+198,(vlSelf->conv1__DOT__c1_w_1
                                    [0U][3U]),16);
        tracep->fullSData(oldp+199,(vlSelf->conv1__DOT__c1_w_1
                                    [0U][4U]),16);
        tracep->fullSData(oldp+200,(vlSelf->conv1__DOT__c1_w_1
                                    [1U][0U]),16);
        tracep->fullSData(oldp+201,(vlSelf->conv1__DOT__c1_w_1
                                    [1U][1U]),16);
        tracep->fullSData(oldp+202,(vlSelf->conv1__DOT__c1_w_1
                                    [1U][2U]),16);
        tracep->fullSData(oldp+203,(vlSelf->conv1__DOT__c1_w_1
                                    [1U][3U]),16);
        tracep->fullSData(oldp+204,(vlSelf->conv1__DOT__c1_w_1
                                    [1U][4U]),16);
        tracep->fullSData(oldp+205,(vlSelf->conv1__DOT__c1_w_1
                                    [2U][0U]),16);
        tracep->fullSData(oldp+206,(vlSelf->conv1__DOT__c1_w_1
                                    [2U][1U]),16);
        tracep->fullSData(oldp+207,(vlSelf->conv1__DOT__c1_w_1
                                    [2U][2U]),16);
        tracep->fullSData(oldp+208,(vlSelf->conv1__DOT__c1_w_1
                                    [2U][3U]),16);
        tracep->fullSData(oldp+209,(vlSelf->conv1__DOT__c1_w_1
                                    [2U][4U]),16);
        tracep->fullSData(oldp+210,(vlSelf->conv1__DOT__c1_w_1
                                    [3U][0U]),16);
        tracep->fullSData(oldp+211,(vlSelf->conv1__DOT__c1_w_1
                                    [3U][1U]),16);
        tracep->fullSData(oldp+212,(vlSelf->conv1__DOT__c1_w_1
                                    [3U][2U]),16);
        tracep->fullSData(oldp+213,(vlSelf->conv1__DOT__c1_w_1
                                    [3U][3U]),16);
        tracep->fullSData(oldp+214,(vlSelf->conv1__DOT__c1_w_1
                                    [3U][4U]),16);
        tracep->fullSData(oldp+215,(vlSelf->conv1__DOT__c1_w_1
                                    [4U][0U]),16);
        tracep->fullSData(oldp+216,(vlSelf->conv1__DOT__c1_w_1
                                    [4U][1U]),16);
        tracep->fullSData(oldp+217,(vlSelf->conv1__DOT__c1_w_1
                                    [4U][2U]),16);
        tracep->fullSData(oldp+218,(vlSelf->conv1__DOT__c1_w_1
                                    [4U][3U]),16);
        tracep->fullSData(oldp+219,(vlSelf->conv1__DOT__c1_w_1
                                    [4U][4U]),16);
        tracep->fullCData(oldp+220,(vlSelf->conv1__DOT__rom_cnt),5);
        tracep->fullIData(oldp+221,(vlSelf->conv1__DOT__window_mul_result_1
                                    [0U][0U]),32);
        tracep->fullIData(oldp+222,(vlSelf->conv1__DOT__window_mul_result_1
                                    [0U][1U]),32);
        tracep->fullIData(oldp+223,(vlSelf->conv1__DOT__window_mul_result_1
                                    [0U][2U]),32);
        tracep->fullIData(oldp+224,(vlSelf->conv1__DOT__window_mul_result_1
                                    [0U][3U]),32);
        tracep->fullIData(oldp+225,(vlSelf->conv1__DOT__window_mul_result_1
                                    [0U][4U]),32);
        tracep->fullIData(oldp+226,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][0U]),32);
        tracep->fullIData(oldp+227,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][1U]),32);
        tracep->fullIData(oldp+228,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][2U]),32);
        tracep->fullIData(oldp+229,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][3U]),32);
        tracep->fullIData(oldp+230,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][4U]),32);
        tracep->fullIData(oldp+231,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][0U]),32);
        tracep->fullIData(oldp+232,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][1U]),32);
        tracep->fullIData(oldp+233,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][2U]),32);
        tracep->fullIData(oldp+234,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][3U]),32);
        tracep->fullIData(oldp+235,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][4U]),32);
        tracep->fullIData(oldp+236,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][0U]),32);
        tracep->fullIData(oldp+237,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][1U]),32);
        tracep->fullIData(oldp+238,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][2U]),32);
        tracep->fullIData(oldp+239,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][3U]),32);
        tracep->fullIData(oldp+240,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][4U]),32);
        tracep->fullIData(oldp+241,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][0U]),32);
        tracep->fullIData(oldp+242,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][1U]),32);
        tracep->fullIData(oldp+243,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][2U]),32);
        tracep->fullIData(oldp+244,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][3U]),32);
        tracep->fullIData(oldp+245,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][4U]),32);
        tracep->fullIData(oldp+246,(vlSelf->conv1__DOT__window_sum_1),32);
        tracep->fullBit(oldp+247,(((4U <= (IData)(vlSelf->conv1__DOT__x_cnt)) 
                                   & (4U <= (IData)(vlSelf->conv1__DOT__y_cnt)))));
        tracep->fullCData(oldp+248,(vlSelf->conv1__DOT__window_in[0]),8);
        tracep->fullCData(oldp+249,(vlSelf->conv1__DOT__window_in[1]),8);
        tracep->fullCData(oldp+250,(vlSelf->conv1__DOT__window_in[2]),8);
        tracep->fullCData(oldp+251,(vlSelf->conv1__DOT__window_in[3]),8);
        tracep->fullCData(oldp+252,(vlSelf->conv1__DOT__window_in[4]),8);
        tracep->fullCData(oldp+253,(vlSelf->conv1__DOT__window_in
                                    [0U]),8);
        tracep->fullCData(oldp+254,(vlSelf->conv1__DOT__window_in
                                    [1U]),8);
        tracep->fullCData(oldp+255,(vlSelf->conv1__DOT__window_in
                                    [2U]),8);
        tracep->fullCData(oldp+256,(vlSelf->conv1__DOT__window_in
                                    [3U]),8);
        tracep->fullCData(oldp+257,(vlSelf->conv1__DOT__window_in
                                    [4U]),8);
        tracep->fullBit(oldp+258,(vlSelf->clk));
        tracep->fullBit(oldp+259,(vlSelf->rst_n));
        tracep->fullCData(oldp+260,(vlSelf->cnn_data_in),8);
        tracep->fullBit(oldp+261,(vlSelf->cnn_data_in_valid));
        tracep->fullBit(oldp+262,(vlSelf->img_in_en));
        tracep->fullIData(oldp+263,(vlSelf->cnn_data_out),32);
        tracep->fullBit(oldp+264,(vlSelf->cnn_data_out_valid));
        tracep->fullIData(oldp+265,(0x19U),32);
        tracep->fullIData(oldp+266,(5U),32);
        tracep->fullBit(oldp+267,(1U));
        tracep->fullWData(oldp+268,(Vconv1__ConstPool__CONST_37372f90_0),328);
    }
}
