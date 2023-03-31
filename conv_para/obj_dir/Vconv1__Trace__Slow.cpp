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
        tracep->declBit(c+133,"clk", false,-1);
        tracep->declBit(c+134,"rst_n", false,-1);
        tracep->declBus(c+135,"cnn_data_in", false,-1, 7,0);
        tracep->declBit(c+136,"cnn_data_in_valid", false,-1);
        tracep->declBit(c+137,"img_in_en", false,-1);
        tracep->declBus(c+138,"cnn_data_out", false,-1, 31,0);
        tracep->declBit(c+139,"cnn_data_out_valid", false,-1);
        tracep->declBus(c+140,"conv1 IMG_IN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+141,"conv1 KERNEL_WIDTH", false,-1, 31,0);
        tracep->declBit(c+133,"conv1 clk", false,-1);
        tracep->declBit(c+134,"conv1 rst_n", false,-1);
        tracep->declBus(c+135,"conv1 cnn_data_in", false,-1, 7,0);
        tracep->declBit(c+136,"conv1 cnn_data_in_valid", false,-1);
        tracep->declBit(c+137,"conv1 img_in_en", false,-1);
        tracep->declBus(c+138,"conv1 cnn_data_out", false,-1, 31,0);
        tracep->declBit(c+139,"conv1 cnn_data_out_valid", false,-1);
        tracep->declBus(c+37,"conv1 wr_addr", false,-1, 7,0);
        tracep->declBus(c+38,"conv1 rd_addr", false,-1, 7,0);
        tracep->declBus(c+39,"conv1 rd_addr_pre2", false,-1, 7,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+123+i*1,"conv1 window_in", true,(i+0), 7,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+26+i*1,"conv1 window_out", true,(i+0), 7,0);}}
        tracep->declBus(c+40,"conv1 window(0)(0)", false,-1, 7,0);
        tracep->declBus(c+41,"conv1 window(0)(1)", false,-1, 7,0);
        tracep->declBus(c+42,"conv1 window(0)(2)", false,-1, 7,0);
        tracep->declBus(c+43,"conv1 window(0)(3)", false,-1, 7,0);
        tracep->declBus(c+44,"conv1 window(0)(4)", false,-1, 7,0);
        tracep->declBus(c+45,"conv1 window(1)(0)", false,-1, 7,0);
        tracep->declBus(c+46,"conv1 window(1)(1)", false,-1, 7,0);
        tracep->declBus(c+47,"conv1 window(1)(2)", false,-1, 7,0);
        tracep->declBus(c+48,"conv1 window(1)(3)", false,-1, 7,0);
        tracep->declBus(c+49,"conv1 window(1)(4)", false,-1, 7,0);
        tracep->declBus(c+50,"conv1 window(2)(0)", false,-1, 7,0);
        tracep->declBus(c+51,"conv1 window(2)(1)", false,-1, 7,0);
        tracep->declBus(c+52,"conv1 window(2)(2)", false,-1, 7,0);
        tracep->declBus(c+53,"conv1 window(2)(3)", false,-1, 7,0);
        tracep->declBus(c+54,"conv1 window(2)(4)", false,-1, 7,0);
        tracep->declBus(c+55,"conv1 window(3)(0)", false,-1, 7,0);
        tracep->declBus(c+56,"conv1 window(3)(1)", false,-1, 7,0);
        tracep->declBus(c+57,"conv1 window(3)(2)", false,-1, 7,0);
        tracep->declBus(c+58,"conv1 window(3)(3)", false,-1, 7,0);
        tracep->declBus(c+59,"conv1 window(3)(4)", false,-1, 7,0);
        tracep->declBus(c+60,"conv1 window(4)(0)", false,-1, 7,0);
        tracep->declBus(c+61,"conv1 window(4)(1)", false,-1, 7,0);
        tracep->declBus(c+62,"conv1 window(4)(2)", false,-1, 7,0);
        tracep->declBus(c+63,"conv1 window(4)(3)", false,-1, 7,0);
        tracep->declBus(c+64,"conv1 window(4)(4)", false,-1, 7,0);
        tracep->declBus(c+65,"conv1 i", false,-1, 31,0);
        tracep->declBus(c+66,"conv1 j", false,-1, 31,0);
        tracep->declBus(c+67,"conv1 x_cnt", false,-1, 8,0);
        tracep->declBus(c+68,"conv1 y_cnt", false,-1, 8,0);
        tracep->declBit(c+142,"conv1 c1_w_rd_en", false,-1);
        tracep->declBus(c+69,"conv1 rd_c1_w_1_data", false,-1, 15,0);
        tracep->declBus(c+70,"conv1 c1_w_1(0)(0)", false,-1, 15,0);
        tracep->declBus(c+71,"conv1 c1_w_1(0)(1)", false,-1, 15,0);
        tracep->declBus(c+72,"conv1 c1_w_1(0)(2)", false,-1, 15,0);
        tracep->declBus(c+73,"conv1 c1_w_1(0)(3)", false,-1, 15,0);
        tracep->declBus(c+74,"conv1 c1_w_1(0)(4)", false,-1, 15,0);
        tracep->declBus(c+75,"conv1 c1_w_1(1)(0)", false,-1, 15,0);
        tracep->declBus(c+76,"conv1 c1_w_1(1)(1)", false,-1, 15,0);
        tracep->declBus(c+77,"conv1 c1_w_1(1)(2)", false,-1, 15,0);
        tracep->declBus(c+78,"conv1 c1_w_1(1)(3)", false,-1, 15,0);
        tracep->declBus(c+79,"conv1 c1_w_1(1)(4)", false,-1, 15,0);
        tracep->declBus(c+80,"conv1 c1_w_1(2)(0)", false,-1, 15,0);
        tracep->declBus(c+81,"conv1 c1_w_1(2)(1)", false,-1, 15,0);
        tracep->declBus(c+82,"conv1 c1_w_1(2)(2)", false,-1, 15,0);
        tracep->declBus(c+83,"conv1 c1_w_1(2)(3)", false,-1, 15,0);
        tracep->declBus(c+84,"conv1 c1_w_1(2)(4)", false,-1, 15,0);
        tracep->declBus(c+85,"conv1 c1_w_1(3)(0)", false,-1, 15,0);
        tracep->declBus(c+86,"conv1 c1_w_1(3)(1)", false,-1, 15,0);
        tracep->declBus(c+87,"conv1 c1_w_1(3)(2)", false,-1, 15,0);
        tracep->declBus(c+88,"conv1 c1_w_1(3)(3)", false,-1, 15,0);
        tracep->declBus(c+89,"conv1 c1_w_1(3)(4)", false,-1, 15,0);
        tracep->declBus(c+90,"conv1 c1_w_1(4)(0)", false,-1, 15,0);
        tracep->declBus(c+91,"conv1 c1_w_1(4)(1)", false,-1, 15,0);
        tracep->declBus(c+92,"conv1 c1_w_1(4)(2)", false,-1, 15,0);
        tracep->declBus(c+93,"conv1 c1_w_1(4)(3)", false,-1, 15,0);
        tracep->declBus(c+94,"conv1 c1_w_1(4)(4)", false,-1, 15,0);
        tracep->declBus(c+95,"conv1 rom_cnt", false,-1, 4,0);
        tracep->declBus(c+96,"conv1 window_mul_result_1(0)(0)", false,-1, 31,0);
        tracep->declBus(c+97,"conv1 window_mul_result_1(0)(1)", false,-1, 31,0);
        tracep->declBus(c+98,"conv1 window_mul_result_1(0)(2)", false,-1, 31,0);
        tracep->declBus(c+99,"conv1 window_mul_result_1(0)(3)", false,-1, 31,0);
        tracep->declBus(c+100,"conv1 window_mul_result_1(0)(4)", false,-1, 31,0);
        tracep->declBus(c+101,"conv1 window_mul_result_1(1)(0)", false,-1, 31,0);
        tracep->declBus(c+102,"conv1 window_mul_result_1(1)(1)", false,-1, 31,0);
        tracep->declBus(c+103,"conv1 window_mul_result_1(1)(2)", false,-1, 31,0);
        tracep->declBus(c+104,"conv1 window_mul_result_1(1)(3)", false,-1, 31,0);
        tracep->declBus(c+105,"conv1 window_mul_result_1(1)(4)", false,-1, 31,0);
        tracep->declBus(c+106,"conv1 window_mul_result_1(2)(0)", false,-1, 31,0);
        tracep->declBus(c+107,"conv1 window_mul_result_1(2)(1)", false,-1, 31,0);
        tracep->declBus(c+108,"conv1 window_mul_result_1(2)(2)", false,-1, 31,0);
        tracep->declBus(c+109,"conv1 window_mul_result_1(2)(3)", false,-1, 31,0);
        tracep->declBus(c+110,"conv1 window_mul_result_1(2)(4)", false,-1, 31,0);
        tracep->declBus(c+111,"conv1 window_mul_result_1(3)(0)", false,-1, 31,0);
        tracep->declBus(c+112,"conv1 window_mul_result_1(3)(1)", false,-1, 31,0);
        tracep->declBus(c+113,"conv1 window_mul_result_1(3)(2)", false,-1, 31,0);
        tracep->declBus(c+114,"conv1 window_mul_result_1(3)(3)", false,-1, 31,0);
        tracep->declBus(c+115,"conv1 window_mul_result_1(3)(4)", false,-1, 31,0);
        tracep->declBus(c+116,"conv1 window_mul_result_1(4)(0)", false,-1, 31,0);
        tracep->declBus(c+117,"conv1 window_mul_result_1(4)(1)", false,-1, 31,0);
        tracep->declBus(c+118,"conv1 window_mul_result_1(4)(2)", false,-1, 31,0);
        tracep->declBus(c+119,"conv1 window_mul_result_1(4)(3)", false,-1, 31,0);
        tracep->declBus(c+120,"conv1 window_mul_result_1(4)(4)", false,-1, 31,0);
        tracep->declBus(c+121,"conv1 window_sum_1", false,-1, 31,0);
        tracep->declBit(c+122,"conv1 data_out_valid_o", false,-1);
        tracep->declBit(c+31,"conv1 delay_data_out_valid_o", false,-1);
        tracep->declArray(c+143,"conv1 weights_rom_u1 FILE_NAME", false,-1, 327,0);
        tracep->declBit(c+142,"conv1 weights_rom_u1 rom_r_en", false,-1);
        tracep->declBus(c+95,"conv1 weights_rom_u1 rom_raddr", false,-1, 4,0);
        tracep->declBus(c+69,"conv1 weights_rom_u1 rom_dout", false,-1, 15,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+1+i*1,"conv1 weights_rom_u1 para_rom", true,(i+0), 15,0);}}
        tracep->declBus(c+140,"conv1 genblk2[0] graylinebuffer_U IMG_IN_WIDTH", false,-1, 31,0);
        tracep->declBit(c+133,"conv1 genblk2[0] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+133,"conv1 genblk2[0] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+136,"conv1 genblk2[0] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+142,"conv1 genblk2[0] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+37,"conv1 genblk2[0] graylinebuffer_U waddr", false,-1, 7,0);
        tracep->declBus(c+38,"conv1 genblk2[0] graylinebuffer_U raddr", false,-1, 7,0);
        tracep->declBus(c+128,"conv1 genblk2[0] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+32,"conv1 genblk2[0] graylinebuffer_U dout", false,-1, 7,0);
        tracep->declBus(c+140,"conv1 genblk2[1] graylinebuffer_U IMG_IN_WIDTH", false,-1, 31,0);
        tracep->declBit(c+133,"conv1 genblk2[1] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+133,"conv1 genblk2[1] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+136,"conv1 genblk2[1] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+142,"conv1 genblk2[1] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+37,"conv1 genblk2[1] graylinebuffer_U waddr", false,-1, 7,0);
        tracep->declBus(c+38,"conv1 genblk2[1] graylinebuffer_U raddr", false,-1, 7,0);
        tracep->declBus(c+129,"conv1 genblk2[1] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+33,"conv1 genblk2[1] graylinebuffer_U dout", false,-1, 7,0);
        tracep->declBus(c+140,"conv1 genblk2[2] graylinebuffer_U IMG_IN_WIDTH", false,-1, 31,0);
        tracep->declBit(c+133,"conv1 genblk2[2] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+133,"conv1 genblk2[2] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+136,"conv1 genblk2[2] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+142,"conv1 genblk2[2] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+37,"conv1 genblk2[2] graylinebuffer_U waddr", false,-1, 7,0);
        tracep->declBus(c+38,"conv1 genblk2[2] graylinebuffer_U raddr", false,-1, 7,0);
        tracep->declBus(c+130,"conv1 genblk2[2] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+34,"conv1 genblk2[2] graylinebuffer_U dout", false,-1, 7,0);
        tracep->declBus(c+140,"conv1 genblk2[3] graylinebuffer_U IMG_IN_WIDTH", false,-1, 31,0);
        tracep->declBit(c+133,"conv1 genblk2[3] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+133,"conv1 genblk2[3] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+136,"conv1 genblk2[3] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+142,"conv1 genblk2[3] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+37,"conv1 genblk2[3] graylinebuffer_U waddr", false,-1, 7,0);
        tracep->declBus(c+38,"conv1 genblk2[3] graylinebuffer_U raddr", false,-1, 7,0);
        tracep->declBus(c+131,"conv1 genblk2[3] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+35,"conv1 genblk2[3] graylinebuffer_U dout", false,-1, 7,0);
        tracep->declBus(c+140,"conv1 genblk2[4] graylinebuffer_U IMG_IN_WIDTH", false,-1, 31,0);
        tracep->declBit(c+133,"conv1 genblk2[4] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+133,"conv1 genblk2[4] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+136,"conv1 genblk2[4] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+142,"conv1 genblk2[4] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+37,"conv1 genblk2[4] graylinebuffer_U waddr", false,-1, 7,0);
        tracep->declBus(c+38,"conv1 genblk2[4] graylinebuffer_U raddr", false,-1, 7,0);
        tracep->declBus(c+132,"conv1 genblk2[4] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+36,"conv1 genblk2[4] graylinebuffer_U dout", false,-1, 7,0);
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
        tracep->fullCData(oldp+33,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__graylinebuffer_U__dout),8);
        tracep->fullCData(oldp+34,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__graylinebuffer_U__dout),8);
        tracep->fullCData(oldp+35,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__graylinebuffer_U__dout),8);
        tracep->fullCData(oldp+36,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__graylinebuffer_U__dout),8);
        tracep->fullCData(oldp+37,(vlSelf->conv1__DOT__wr_addr),8);
        tracep->fullCData(oldp+38,(vlSelf->conv1__DOT__rd_addr),8);
        tracep->fullCData(oldp+39,((0xffU & ((IData)(2U) 
                                             + (IData)(vlSelf->conv1__DOT__wr_addr)))),8);
        tracep->fullCData(oldp+40,(vlSelf->conv1__DOT__window
                                   [0U][0U]),8);
        tracep->fullCData(oldp+41,(vlSelf->conv1__DOT__window
                                   [0U][1U]),8);
        tracep->fullCData(oldp+42,(vlSelf->conv1__DOT__window
                                   [0U][2U]),8);
        tracep->fullCData(oldp+43,(vlSelf->conv1__DOT__window
                                   [0U][3U]),8);
        tracep->fullCData(oldp+44,(vlSelf->conv1__DOT__window
                                   [0U][4U]),8);
        tracep->fullCData(oldp+45,(vlSelf->conv1__DOT__window
                                   [1U][0U]),8);
        tracep->fullCData(oldp+46,(vlSelf->conv1__DOT__window
                                   [1U][1U]),8);
        tracep->fullCData(oldp+47,(vlSelf->conv1__DOT__window
                                   [1U][2U]),8);
        tracep->fullCData(oldp+48,(vlSelf->conv1__DOT__window
                                   [1U][3U]),8);
        tracep->fullCData(oldp+49,(vlSelf->conv1__DOT__window
                                   [1U][4U]),8);
        tracep->fullCData(oldp+50,(vlSelf->conv1__DOT__window
                                   [2U][0U]),8);
        tracep->fullCData(oldp+51,(vlSelf->conv1__DOT__window
                                   [2U][1U]),8);
        tracep->fullCData(oldp+52,(vlSelf->conv1__DOT__window
                                   [2U][2U]),8);
        tracep->fullCData(oldp+53,(vlSelf->conv1__DOT__window
                                   [2U][3U]),8);
        tracep->fullCData(oldp+54,(vlSelf->conv1__DOT__window
                                   [2U][4U]),8);
        tracep->fullCData(oldp+55,(vlSelf->conv1__DOT__window
                                   [3U][0U]),8);
        tracep->fullCData(oldp+56,(vlSelf->conv1__DOT__window
                                   [3U][1U]),8);
        tracep->fullCData(oldp+57,(vlSelf->conv1__DOT__window
                                   [3U][2U]),8);
        tracep->fullCData(oldp+58,(vlSelf->conv1__DOT__window
                                   [3U][3U]),8);
        tracep->fullCData(oldp+59,(vlSelf->conv1__DOT__window
                                   [3U][4U]),8);
        tracep->fullCData(oldp+60,(vlSelf->conv1__DOT__window
                                   [4U][0U]),8);
        tracep->fullCData(oldp+61,(vlSelf->conv1__DOT__window
                                   [4U][1U]),8);
        tracep->fullCData(oldp+62,(vlSelf->conv1__DOT__window
                                   [4U][2U]),8);
        tracep->fullCData(oldp+63,(vlSelf->conv1__DOT__window
                                   [4U][3U]),8);
        tracep->fullCData(oldp+64,(vlSelf->conv1__DOT__window
                                   [4U][4U]),8);
        tracep->fullIData(oldp+65,(vlSelf->conv1__DOT__i),32);
        tracep->fullIData(oldp+66,(vlSelf->conv1__DOT__j),32);
        tracep->fullSData(oldp+67,(vlSelf->conv1__DOT__x_cnt),9);
        tracep->fullSData(oldp+68,(vlSelf->conv1__DOT__y_cnt),9);
        tracep->fullSData(oldp+69,(((0x18U >= (IData)(vlSelf->conv1__DOT__rom_cnt))
                                     ? vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom
                                    [vlSelf->conv1__DOT__rom_cnt]
                                     : 0U)),16);
        tracep->fullSData(oldp+70,(vlSelf->conv1__DOT__c1_w_1
                                   [0U][0U]),16);
        tracep->fullSData(oldp+71,(vlSelf->conv1__DOT__c1_w_1
                                   [0U][1U]),16);
        tracep->fullSData(oldp+72,(vlSelf->conv1__DOT__c1_w_1
                                   [0U][2U]),16);
        tracep->fullSData(oldp+73,(vlSelf->conv1__DOT__c1_w_1
                                   [0U][3U]),16);
        tracep->fullSData(oldp+74,(vlSelf->conv1__DOT__c1_w_1
                                   [0U][4U]),16);
        tracep->fullSData(oldp+75,(vlSelf->conv1__DOT__c1_w_1
                                   [1U][0U]),16);
        tracep->fullSData(oldp+76,(vlSelf->conv1__DOT__c1_w_1
                                   [1U][1U]),16);
        tracep->fullSData(oldp+77,(vlSelf->conv1__DOT__c1_w_1
                                   [1U][2U]),16);
        tracep->fullSData(oldp+78,(vlSelf->conv1__DOT__c1_w_1
                                   [1U][3U]),16);
        tracep->fullSData(oldp+79,(vlSelf->conv1__DOT__c1_w_1
                                   [1U][4U]),16);
        tracep->fullSData(oldp+80,(vlSelf->conv1__DOT__c1_w_1
                                   [2U][0U]),16);
        tracep->fullSData(oldp+81,(vlSelf->conv1__DOT__c1_w_1
                                   [2U][1U]),16);
        tracep->fullSData(oldp+82,(vlSelf->conv1__DOT__c1_w_1
                                   [2U][2U]),16);
        tracep->fullSData(oldp+83,(vlSelf->conv1__DOT__c1_w_1
                                   [2U][3U]),16);
        tracep->fullSData(oldp+84,(vlSelf->conv1__DOT__c1_w_1
                                   [2U][4U]),16);
        tracep->fullSData(oldp+85,(vlSelf->conv1__DOT__c1_w_1
                                   [3U][0U]),16);
        tracep->fullSData(oldp+86,(vlSelf->conv1__DOT__c1_w_1
                                   [3U][1U]),16);
        tracep->fullSData(oldp+87,(vlSelf->conv1__DOT__c1_w_1
                                   [3U][2U]),16);
        tracep->fullSData(oldp+88,(vlSelf->conv1__DOT__c1_w_1
                                   [3U][3U]),16);
        tracep->fullSData(oldp+89,(vlSelf->conv1__DOT__c1_w_1
                                   [3U][4U]),16);
        tracep->fullSData(oldp+90,(vlSelf->conv1__DOT__c1_w_1
                                   [4U][0U]),16);
        tracep->fullSData(oldp+91,(vlSelf->conv1__DOT__c1_w_1
                                   [4U][1U]),16);
        tracep->fullSData(oldp+92,(vlSelf->conv1__DOT__c1_w_1
                                   [4U][2U]),16);
        tracep->fullSData(oldp+93,(vlSelf->conv1__DOT__c1_w_1
                                   [4U][3U]),16);
        tracep->fullSData(oldp+94,(vlSelf->conv1__DOT__c1_w_1
                                   [4U][4U]),16);
        tracep->fullCData(oldp+95,(vlSelf->conv1__DOT__rom_cnt),5);
        tracep->fullIData(oldp+96,(vlSelf->conv1__DOT__window_mul_result_1
                                   [0U][0U]),32);
        tracep->fullIData(oldp+97,(vlSelf->conv1__DOT__window_mul_result_1
                                   [0U][1U]),32);
        tracep->fullIData(oldp+98,(vlSelf->conv1__DOT__window_mul_result_1
                                   [0U][2U]),32);
        tracep->fullIData(oldp+99,(vlSelf->conv1__DOT__window_mul_result_1
                                   [0U][3U]),32);
        tracep->fullIData(oldp+100,(vlSelf->conv1__DOT__window_mul_result_1
                                    [0U][4U]),32);
        tracep->fullIData(oldp+101,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][0U]),32);
        tracep->fullIData(oldp+102,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][1U]),32);
        tracep->fullIData(oldp+103,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][2U]),32);
        tracep->fullIData(oldp+104,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][3U]),32);
        tracep->fullIData(oldp+105,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][4U]),32);
        tracep->fullIData(oldp+106,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][0U]),32);
        tracep->fullIData(oldp+107,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][1U]),32);
        tracep->fullIData(oldp+108,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][2U]),32);
        tracep->fullIData(oldp+109,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][3U]),32);
        tracep->fullIData(oldp+110,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][4U]),32);
        tracep->fullIData(oldp+111,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][0U]),32);
        tracep->fullIData(oldp+112,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][1U]),32);
        tracep->fullIData(oldp+113,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][2U]),32);
        tracep->fullIData(oldp+114,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][3U]),32);
        tracep->fullIData(oldp+115,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][4U]),32);
        tracep->fullIData(oldp+116,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][0U]),32);
        tracep->fullIData(oldp+117,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][1U]),32);
        tracep->fullIData(oldp+118,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][2U]),32);
        tracep->fullIData(oldp+119,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][3U]),32);
        tracep->fullIData(oldp+120,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][4U]),32);
        tracep->fullIData(oldp+121,(vlSelf->conv1__DOT__window_sum_1),32);
        tracep->fullBit(oldp+122,(((4U <= (IData)(vlSelf->conv1__DOT__x_cnt)) 
                                   & (4U <= (IData)(vlSelf->conv1__DOT__y_cnt)))));
        tracep->fullCData(oldp+123,(vlSelf->conv1__DOT__window_in[0]),8);
        tracep->fullCData(oldp+124,(vlSelf->conv1__DOT__window_in[1]),8);
        tracep->fullCData(oldp+125,(vlSelf->conv1__DOT__window_in[2]),8);
        tracep->fullCData(oldp+126,(vlSelf->conv1__DOT__window_in[3]),8);
        tracep->fullCData(oldp+127,(vlSelf->conv1__DOT__window_in[4]),8);
        tracep->fullCData(oldp+128,(vlSelf->conv1__DOT__window_in
                                    [0U]),8);
        tracep->fullCData(oldp+129,(vlSelf->conv1__DOT__window_in
                                    [1U]),8);
        tracep->fullCData(oldp+130,(vlSelf->conv1__DOT__window_in
                                    [2U]),8);
        tracep->fullCData(oldp+131,(vlSelf->conv1__DOT__window_in
                                    [3U]),8);
        tracep->fullCData(oldp+132,(vlSelf->conv1__DOT__window_in
                                    [4U]),8);
        tracep->fullBit(oldp+133,(vlSelf->clk));
        tracep->fullBit(oldp+134,(vlSelf->rst_n));
        tracep->fullCData(oldp+135,(vlSelf->cnn_data_in),8);
        tracep->fullBit(oldp+136,(vlSelf->cnn_data_in_valid));
        tracep->fullBit(oldp+137,(vlSelf->img_in_en));
        tracep->fullIData(oldp+138,(vlSelf->cnn_data_out),32);
        tracep->fullBit(oldp+139,(vlSelf->cnn_data_out_valid));
        tracep->fullIData(oldp+140,(0xc8U),32);
        tracep->fullIData(oldp+141,(5U),32);
        tracep->fullBit(oldp+142,(1U));
        tracep->fullWData(oldp+143,(Vconv1__ConstPool__CONST_37372f90_0),328);
    }
}
