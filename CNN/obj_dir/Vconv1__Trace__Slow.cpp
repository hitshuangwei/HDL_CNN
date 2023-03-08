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
        tracep->declBit(c+658,"clk", false,-1);
        tracep->declBit(c+659,"rst_n", false,-1);
        tracep->declBus(c+660,"cnn_data_in", false,-1, 7,0);
        tracep->declBit(c+661,"cnn_data_in_valid", false,-1);
        tracep->declArray(c+662,"cnn_data_out", false,-1, 191,0);
        tracep->declBit(c+668,"cnn_data_out_valid", false,-1);
        tracep->declBit(c+658,"conv1 clk", false,-1);
        tracep->declBit(c+659,"conv1 rst_n", false,-1);
        tracep->declBus(c+660,"conv1 cnn_data_in", false,-1, 7,0);
        tracep->declBit(c+661,"conv1 cnn_data_in_valid", false,-1);
        tracep->declArray(c+662,"conv1 cnn_data_out", false,-1, 191,0);
        tracep->declBit(c+668,"conv1 cnn_data_out_valid", false,-1);
        tracep->declBus(c+302,"conv1 wr_addr", false,-1, 4,0);
        tracep->declBus(c+303,"conv1 rd_addr", false,-1, 4,0);
        tracep->declBus(c+304,"conv1 rd_addr_pre2", false,-1, 4,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+648+i*1,"conv1 window_in", true,(i+0), 7,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+151+i*1,"conv1 window_out", true,(i+0), 7,0);}}
        tracep->declBus(c+305,"conv1 window(0)(0)", false,-1, 7,0);
        tracep->declBus(c+306,"conv1 window(0)(1)", false,-1, 7,0);
        tracep->declBus(c+307,"conv1 window(0)(2)", false,-1, 7,0);
        tracep->declBus(c+308,"conv1 window(0)(3)", false,-1, 7,0);
        tracep->declBus(c+309,"conv1 window(0)(4)", false,-1, 7,0);
        tracep->declBus(c+310,"conv1 window(1)(0)", false,-1, 7,0);
        tracep->declBus(c+311,"conv1 window(1)(1)", false,-1, 7,0);
        tracep->declBus(c+312,"conv1 window(1)(2)", false,-1, 7,0);
        tracep->declBus(c+313,"conv1 window(1)(3)", false,-1, 7,0);
        tracep->declBus(c+314,"conv1 window(1)(4)", false,-1, 7,0);
        tracep->declBus(c+315,"conv1 window(2)(0)", false,-1, 7,0);
        tracep->declBus(c+316,"conv1 window(2)(1)", false,-1, 7,0);
        tracep->declBus(c+317,"conv1 window(2)(2)", false,-1, 7,0);
        tracep->declBus(c+318,"conv1 window(2)(3)", false,-1, 7,0);
        tracep->declBus(c+319,"conv1 window(2)(4)", false,-1, 7,0);
        tracep->declBus(c+320,"conv1 window(3)(0)", false,-1, 7,0);
        tracep->declBus(c+321,"conv1 window(3)(1)", false,-1, 7,0);
        tracep->declBus(c+322,"conv1 window(3)(2)", false,-1, 7,0);
        tracep->declBus(c+323,"conv1 window(3)(3)", false,-1, 7,0);
        tracep->declBus(c+324,"conv1 window(3)(4)", false,-1, 7,0);
        tracep->declBus(c+325,"conv1 window(4)(0)", false,-1, 7,0);
        tracep->declBus(c+326,"conv1 window(4)(1)", false,-1, 7,0);
        tracep->declBus(c+327,"conv1 window(4)(2)", false,-1, 7,0);
        tracep->declBus(c+328,"conv1 window(4)(3)", false,-1, 7,0);
        tracep->declBus(c+329,"conv1 window(4)(4)", false,-1, 7,0);
        tracep->declBus(c+330,"conv1 i", false,-1, 31,0);
        tracep->declBus(c+331,"conv1 j", false,-1, 31,0);
        tracep->declBus(c+332,"conv1 x_cnt", false,-1, 4,0);
        tracep->declBus(c+333,"conv1 y_cnt", false,-1, 4,0);
        tracep->declBit(c+669,"conv1 c1_w_rd_en", false,-1);
        tracep->declBus(c+334,"conv1 rd_c1_w_1_data", false,-1, 15,0);
        tracep->declBus(c+335,"conv1 rd_c1_w_2_data", false,-1, 15,0);
        tracep->declBus(c+336,"conv1 rd_c1_w_3_data", false,-1, 15,0);
        tracep->declBus(c+337,"conv1 rd_c1_w_4_data", false,-1, 15,0);
        tracep->declBus(c+338,"conv1 rd_c1_w_5_data", false,-1, 15,0);
        tracep->declBus(c+339,"conv1 rd_c1_w_6_data", false,-1, 15,0);
        tracep->declBus(c+340,"conv1 c1_w_1(0)(0)", false,-1, 15,0);
        tracep->declBus(c+341,"conv1 c1_w_1(0)(1)", false,-1, 15,0);
        tracep->declBus(c+342,"conv1 c1_w_1(0)(2)", false,-1, 15,0);
        tracep->declBus(c+343,"conv1 c1_w_1(0)(3)", false,-1, 15,0);
        tracep->declBus(c+344,"conv1 c1_w_1(0)(4)", false,-1, 15,0);
        tracep->declBus(c+345,"conv1 c1_w_1(1)(0)", false,-1, 15,0);
        tracep->declBus(c+346,"conv1 c1_w_1(1)(1)", false,-1, 15,0);
        tracep->declBus(c+347,"conv1 c1_w_1(1)(2)", false,-1, 15,0);
        tracep->declBus(c+348,"conv1 c1_w_1(1)(3)", false,-1, 15,0);
        tracep->declBus(c+349,"conv1 c1_w_1(1)(4)", false,-1, 15,0);
        tracep->declBus(c+350,"conv1 c1_w_1(2)(0)", false,-1, 15,0);
        tracep->declBus(c+351,"conv1 c1_w_1(2)(1)", false,-1, 15,0);
        tracep->declBus(c+352,"conv1 c1_w_1(2)(2)", false,-1, 15,0);
        tracep->declBus(c+353,"conv1 c1_w_1(2)(3)", false,-1, 15,0);
        tracep->declBus(c+354,"conv1 c1_w_1(2)(4)", false,-1, 15,0);
        tracep->declBus(c+355,"conv1 c1_w_1(3)(0)", false,-1, 15,0);
        tracep->declBus(c+356,"conv1 c1_w_1(3)(1)", false,-1, 15,0);
        tracep->declBus(c+357,"conv1 c1_w_1(3)(2)", false,-1, 15,0);
        tracep->declBus(c+358,"conv1 c1_w_1(3)(3)", false,-1, 15,0);
        tracep->declBus(c+359,"conv1 c1_w_1(3)(4)", false,-1, 15,0);
        tracep->declBus(c+360,"conv1 c1_w_1(4)(0)", false,-1, 15,0);
        tracep->declBus(c+361,"conv1 c1_w_1(4)(1)", false,-1, 15,0);
        tracep->declBus(c+362,"conv1 c1_w_1(4)(2)", false,-1, 15,0);
        tracep->declBus(c+363,"conv1 c1_w_1(4)(3)", false,-1, 15,0);
        tracep->declBus(c+364,"conv1 c1_w_1(4)(4)", false,-1, 15,0);
        tracep->declBus(c+365,"conv1 c1_w_2(0)(0)", false,-1, 15,0);
        tracep->declBus(c+366,"conv1 c1_w_2(0)(1)", false,-1, 15,0);
        tracep->declBus(c+367,"conv1 c1_w_2(0)(2)", false,-1, 15,0);
        tracep->declBus(c+368,"conv1 c1_w_2(0)(3)", false,-1, 15,0);
        tracep->declBus(c+369,"conv1 c1_w_2(0)(4)", false,-1, 15,0);
        tracep->declBus(c+370,"conv1 c1_w_2(1)(0)", false,-1, 15,0);
        tracep->declBus(c+371,"conv1 c1_w_2(1)(1)", false,-1, 15,0);
        tracep->declBus(c+372,"conv1 c1_w_2(1)(2)", false,-1, 15,0);
        tracep->declBus(c+373,"conv1 c1_w_2(1)(3)", false,-1, 15,0);
        tracep->declBus(c+374,"conv1 c1_w_2(1)(4)", false,-1, 15,0);
        tracep->declBus(c+375,"conv1 c1_w_2(2)(0)", false,-1, 15,0);
        tracep->declBus(c+376,"conv1 c1_w_2(2)(1)", false,-1, 15,0);
        tracep->declBus(c+377,"conv1 c1_w_2(2)(2)", false,-1, 15,0);
        tracep->declBus(c+378,"conv1 c1_w_2(2)(3)", false,-1, 15,0);
        tracep->declBus(c+379,"conv1 c1_w_2(2)(4)", false,-1, 15,0);
        tracep->declBus(c+380,"conv1 c1_w_2(3)(0)", false,-1, 15,0);
        tracep->declBus(c+381,"conv1 c1_w_2(3)(1)", false,-1, 15,0);
        tracep->declBus(c+382,"conv1 c1_w_2(3)(2)", false,-1, 15,0);
        tracep->declBus(c+383,"conv1 c1_w_2(3)(3)", false,-1, 15,0);
        tracep->declBus(c+384,"conv1 c1_w_2(3)(4)", false,-1, 15,0);
        tracep->declBus(c+385,"conv1 c1_w_2(4)(0)", false,-1, 15,0);
        tracep->declBus(c+386,"conv1 c1_w_2(4)(1)", false,-1, 15,0);
        tracep->declBus(c+387,"conv1 c1_w_2(4)(2)", false,-1, 15,0);
        tracep->declBus(c+388,"conv1 c1_w_2(4)(3)", false,-1, 15,0);
        tracep->declBus(c+389,"conv1 c1_w_2(4)(4)", false,-1, 15,0);
        tracep->declBus(c+390,"conv1 c1_w_3(0)(0)", false,-1, 15,0);
        tracep->declBus(c+391,"conv1 c1_w_3(0)(1)", false,-1, 15,0);
        tracep->declBus(c+392,"conv1 c1_w_3(0)(2)", false,-1, 15,0);
        tracep->declBus(c+393,"conv1 c1_w_3(0)(3)", false,-1, 15,0);
        tracep->declBus(c+394,"conv1 c1_w_3(0)(4)", false,-1, 15,0);
        tracep->declBus(c+395,"conv1 c1_w_3(1)(0)", false,-1, 15,0);
        tracep->declBus(c+396,"conv1 c1_w_3(1)(1)", false,-1, 15,0);
        tracep->declBus(c+397,"conv1 c1_w_3(1)(2)", false,-1, 15,0);
        tracep->declBus(c+398,"conv1 c1_w_3(1)(3)", false,-1, 15,0);
        tracep->declBus(c+399,"conv1 c1_w_3(1)(4)", false,-1, 15,0);
        tracep->declBus(c+400,"conv1 c1_w_3(2)(0)", false,-1, 15,0);
        tracep->declBus(c+401,"conv1 c1_w_3(2)(1)", false,-1, 15,0);
        tracep->declBus(c+402,"conv1 c1_w_3(2)(2)", false,-1, 15,0);
        tracep->declBus(c+403,"conv1 c1_w_3(2)(3)", false,-1, 15,0);
        tracep->declBus(c+404,"conv1 c1_w_3(2)(4)", false,-1, 15,0);
        tracep->declBus(c+405,"conv1 c1_w_3(3)(0)", false,-1, 15,0);
        tracep->declBus(c+406,"conv1 c1_w_3(3)(1)", false,-1, 15,0);
        tracep->declBus(c+407,"conv1 c1_w_3(3)(2)", false,-1, 15,0);
        tracep->declBus(c+408,"conv1 c1_w_3(3)(3)", false,-1, 15,0);
        tracep->declBus(c+409,"conv1 c1_w_3(3)(4)", false,-1, 15,0);
        tracep->declBus(c+410,"conv1 c1_w_3(4)(0)", false,-1, 15,0);
        tracep->declBus(c+411,"conv1 c1_w_3(4)(1)", false,-1, 15,0);
        tracep->declBus(c+412,"conv1 c1_w_3(4)(2)", false,-1, 15,0);
        tracep->declBus(c+413,"conv1 c1_w_3(4)(3)", false,-1, 15,0);
        tracep->declBus(c+414,"conv1 c1_w_3(4)(4)", false,-1, 15,0);
        tracep->declBus(c+415,"conv1 c1_w_4(0)(0)", false,-1, 15,0);
        tracep->declBus(c+416,"conv1 c1_w_4(0)(1)", false,-1, 15,0);
        tracep->declBus(c+417,"conv1 c1_w_4(0)(2)", false,-1, 15,0);
        tracep->declBus(c+418,"conv1 c1_w_4(0)(3)", false,-1, 15,0);
        tracep->declBus(c+419,"conv1 c1_w_4(0)(4)", false,-1, 15,0);
        tracep->declBus(c+420,"conv1 c1_w_4(1)(0)", false,-1, 15,0);
        tracep->declBus(c+421,"conv1 c1_w_4(1)(1)", false,-1, 15,0);
        tracep->declBus(c+422,"conv1 c1_w_4(1)(2)", false,-1, 15,0);
        tracep->declBus(c+423,"conv1 c1_w_4(1)(3)", false,-1, 15,0);
        tracep->declBus(c+424,"conv1 c1_w_4(1)(4)", false,-1, 15,0);
        tracep->declBus(c+425,"conv1 c1_w_4(2)(0)", false,-1, 15,0);
        tracep->declBus(c+426,"conv1 c1_w_4(2)(1)", false,-1, 15,0);
        tracep->declBus(c+427,"conv1 c1_w_4(2)(2)", false,-1, 15,0);
        tracep->declBus(c+428,"conv1 c1_w_4(2)(3)", false,-1, 15,0);
        tracep->declBus(c+429,"conv1 c1_w_4(2)(4)", false,-1, 15,0);
        tracep->declBus(c+430,"conv1 c1_w_4(3)(0)", false,-1, 15,0);
        tracep->declBus(c+431,"conv1 c1_w_4(3)(1)", false,-1, 15,0);
        tracep->declBus(c+432,"conv1 c1_w_4(3)(2)", false,-1, 15,0);
        tracep->declBus(c+433,"conv1 c1_w_4(3)(3)", false,-1, 15,0);
        tracep->declBus(c+434,"conv1 c1_w_4(3)(4)", false,-1, 15,0);
        tracep->declBus(c+435,"conv1 c1_w_4(4)(0)", false,-1, 15,0);
        tracep->declBus(c+436,"conv1 c1_w_4(4)(1)", false,-1, 15,0);
        tracep->declBus(c+437,"conv1 c1_w_4(4)(2)", false,-1, 15,0);
        tracep->declBus(c+438,"conv1 c1_w_4(4)(3)", false,-1, 15,0);
        tracep->declBus(c+439,"conv1 c1_w_4(4)(4)", false,-1, 15,0);
        tracep->declBus(c+440,"conv1 c1_w_5(0)(0)", false,-1, 15,0);
        tracep->declBus(c+441,"conv1 c1_w_5(0)(1)", false,-1, 15,0);
        tracep->declBus(c+442,"conv1 c1_w_5(0)(2)", false,-1, 15,0);
        tracep->declBus(c+443,"conv1 c1_w_5(0)(3)", false,-1, 15,0);
        tracep->declBus(c+444,"conv1 c1_w_5(0)(4)", false,-1, 15,0);
        tracep->declBus(c+445,"conv1 c1_w_5(1)(0)", false,-1, 15,0);
        tracep->declBus(c+446,"conv1 c1_w_5(1)(1)", false,-1, 15,0);
        tracep->declBus(c+447,"conv1 c1_w_5(1)(2)", false,-1, 15,0);
        tracep->declBus(c+448,"conv1 c1_w_5(1)(3)", false,-1, 15,0);
        tracep->declBus(c+449,"conv1 c1_w_5(1)(4)", false,-1, 15,0);
        tracep->declBus(c+450,"conv1 c1_w_5(2)(0)", false,-1, 15,0);
        tracep->declBus(c+451,"conv1 c1_w_5(2)(1)", false,-1, 15,0);
        tracep->declBus(c+452,"conv1 c1_w_5(2)(2)", false,-1, 15,0);
        tracep->declBus(c+453,"conv1 c1_w_5(2)(3)", false,-1, 15,0);
        tracep->declBus(c+454,"conv1 c1_w_5(2)(4)", false,-1, 15,0);
        tracep->declBus(c+455,"conv1 c1_w_5(3)(0)", false,-1, 15,0);
        tracep->declBus(c+456,"conv1 c1_w_5(3)(1)", false,-1, 15,0);
        tracep->declBus(c+457,"conv1 c1_w_5(3)(2)", false,-1, 15,0);
        tracep->declBus(c+458,"conv1 c1_w_5(3)(3)", false,-1, 15,0);
        tracep->declBus(c+459,"conv1 c1_w_5(3)(4)", false,-1, 15,0);
        tracep->declBus(c+460,"conv1 c1_w_5(4)(0)", false,-1, 15,0);
        tracep->declBus(c+461,"conv1 c1_w_5(4)(1)", false,-1, 15,0);
        tracep->declBus(c+462,"conv1 c1_w_5(4)(2)", false,-1, 15,0);
        tracep->declBus(c+463,"conv1 c1_w_5(4)(3)", false,-1, 15,0);
        tracep->declBus(c+464,"conv1 c1_w_5(4)(4)", false,-1, 15,0);
        tracep->declBus(c+465,"conv1 c1_w_6(0)(0)", false,-1, 15,0);
        tracep->declBus(c+466,"conv1 c1_w_6(0)(1)", false,-1, 15,0);
        tracep->declBus(c+467,"conv1 c1_w_6(0)(2)", false,-1, 15,0);
        tracep->declBus(c+468,"conv1 c1_w_6(0)(3)", false,-1, 15,0);
        tracep->declBus(c+469,"conv1 c1_w_6(0)(4)", false,-1, 15,0);
        tracep->declBus(c+470,"conv1 c1_w_6(1)(0)", false,-1, 15,0);
        tracep->declBus(c+471,"conv1 c1_w_6(1)(1)", false,-1, 15,0);
        tracep->declBus(c+472,"conv1 c1_w_6(1)(2)", false,-1, 15,0);
        tracep->declBus(c+473,"conv1 c1_w_6(1)(3)", false,-1, 15,0);
        tracep->declBus(c+474,"conv1 c1_w_6(1)(4)", false,-1, 15,0);
        tracep->declBus(c+475,"conv1 c1_w_6(2)(0)", false,-1, 15,0);
        tracep->declBus(c+476,"conv1 c1_w_6(2)(1)", false,-1, 15,0);
        tracep->declBus(c+477,"conv1 c1_w_6(2)(2)", false,-1, 15,0);
        tracep->declBus(c+478,"conv1 c1_w_6(2)(3)", false,-1, 15,0);
        tracep->declBus(c+479,"conv1 c1_w_6(2)(4)", false,-1, 15,0);
        tracep->declBus(c+480,"conv1 c1_w_6(3)(0)", false,-1, 15,0);
        tracep->declBus(c+481,"conv1 c1_w_6(3)(1)", false,-1, 15,0);
        tracep->declBus(c+482,"conv1 c1_w_6(3)(2)", false,-1, 15,0);
        tracep->declBus(c+483,"conv1 c1_w_6(3)(3)", false,-1, 15,0);
        tracep->declBus(c+484,"conv1 c1_w_6(3)(4)", false,-1, 15,0);
        tracep->declBus(c+485,"conv1 c1_w_6(4)(0)", false,-1, 15,0);
        tracep->declBus(c+486,"conv1 c1_w_6(4)(1)", false,-1, 15,0);
        tracep->declBus(c+487,"conv1 c1_w_6(4)(2)", false,-1, 15,0);
        tracep->declBus(c+488,"conv1 c1_w_6(4)(3)", false,-1, 15,0);
        tracep->declBus(c+489,"conv1 c1_w_6(4)(4)", false,-1, 15,0);
        tracep->declBus(c+490,"conv1 rom_cnt", false,-1, 4,0);
        tracep->declBus(c+491,"conv1 window_mul_result_1(0)(0)", false,-1, 31,0);
        tracep->declBus(c+492,"conv1 window_mul_result_1(0)(1)", false,-1, 31,0);
        tracep->declBus(c+493,"conv1 window_mul_result_1(0)(2)", false,-1, 31,0);
        tracep->declBus(c+494,"conv1 window_mul_result_1(0)(3)", false,-1, 31,0);
        tracep->declBus(c+495,"conv1 window_mul_result_1(0)(4)", false,-1, 31,0);
        tracep->declBus(c+496,"conv1 window_mul_result_1(1)(0)", false,-1, 31,0);
        tracep->declBus(c+497,"conv1 window_mul_result_1(1)(1)", false,-1, 31,0);
        tracep->declBus(c+498,"conv1 window_mul_result_1(1)(2)", false,-1, 31,0);
        tracep->declBus(c+499,"conv1 window_mul_result_1(1)(3)", false,-1, 31,0);
        tracep->declBus(c+500,"conv1 window_mul_result_1(1)(4)", false,-1, 31,0);
        tracep->declBus(c+501,"conv1 window_mul_result_1(2)(0)", false,-1, 31,0);
        tracep->declBus(c+502,"conv1 window_mul_result_1(2)(1)", false,-1, 31,0);
        tracep->declBus(c+503,"conv1 window_mul_result_1(2)(2)", false,-1, 31,0);
        tracep->declBus(c+504,"conv1 window_mul_result_1(2)(3)", false,-1, 31,0);
        tracep->declBus(c+505,"conv1 window_mul_result_1(2)(4)", false,-1, 31,0);
        tracep->declBus(c+506,"conv1 window_mul_result_1(3)(0)", false,-1, 31,0);
        tracep->declBus(c+507,"conv1 window_mul_result_1(3)(1)", false,-1, 31,0);
        tracep->declBus(c+508,"conv1 window_mul_result_1(3)(2)", false,-1, 31,0);
        tracep->declBus(c+509,"conv1 window_mul_result_1(3)(3)", false,-1, 31,0);
        tracep->declBus(c+510,"conv1 window_mul_result_1(3)(4)", false,-1, 31,0);
        tracep->declBus(c+511,"conv1 window_mul_result_1(4)(0)", false,-1, 31,0);
        tracep->declBus(c+512,"conv1 window_mul_result_1(4)(1)", false,-1, 31,0);
        tracep->declBus(c+513,"conv1 window_mul_result_1(4)(2)", false,-1, 31,0);
        tracep->declBus(c+514,"conv1 window_mul_result_1(4)(3)", false,-1, 31,0);
        tracep->declBus(c+515,"conv1 window_mul_result_1(4)(4)", false,-1, 31,0);
        tracep->declBus(c+516,"conv1 window_mul_result_2(0)(0)", false,-1, 31,0);
        tracep->declBus(c+517,"conv1 window_mul_result_2(0)(1)", false,-1, 31,0);
        tracep->declBus(c+518,"conv1 window_mul_result_2(0)(2)", false,-1, 31,0);
        tracep->declBus(c+519,"conv1 window_mul_result_2(0)(3)", false,-1, 31,0);
        tracep->declBus(c+520,"conv1 window_mul_result_2(0)(4)", false,-1, 31,0);
        tracep->declBus(c+521,"conv1 window_mul_result_2(1)(0)", false,-1, 31,0);
        tracep->declBus(c+522,"conv1 window_mul_result_2(1)(1)", false,-1, 31,0);
        tracep->declBus(c+523,"conv1 window_mul_result_2(1)(2)", false,-1, 31,0);
        tracep->declBus(c+524,"conv1 window_mul_result_2(1)(3)", false,-1, 31,0);
        tracep->declBus(c+525,"conv1 window_mul_result_2(1)(4)", false,-1, 31,0);
        tracep->declBus(c+526,"conv1 window_mul_result_2(2)(0)", false,-1, 31,0);
        tracep->declBus(c+527,"conv1 window_mul_result_2(2)(1)", false,-1, 31,0);
        tracep->declBus(c+528,"conv1 window_mul_result_2(2)(2)", false,-1, 31,0);
        tracep->declBus(c+529,"conv1 window_mul_result_2(2)(3)", false,-1, 31,0);
        tracep->declBus(c+530,"conv1 window_mul_result_2(2)(4)", false,-1, 31,0);
        tracep->declBus(c+531,"conv1 window_mul_result_2(3)(0)", false,-1, 31,0);
        tracep->declBus(c+532,"conv1 window_mul_result_2(3)(1)", false,-1, 31,0);
        tracep->declBus(c+533,"conv1 window_mul_result_2(3)(2)", false,-1, 31,0);
        tracep->declBus(c+534,"conv1 window_mul_result_2(3)(3)", false,-1, 31,0);
        tracep->declBus(c+535,"conv1 window_mul_result_2(3)(4)", false,-1, 31,0);
        tracep->declBus(c+536,"conv1 window_mul_result_2(4)(0)", false,-1, 31,0);
        tracep->declBus(c+537,"conv1 window_mul_result_2(4)(1)", false,-1, 31,0);
        tracep->declBus(c+538,"conv1 window_mul_result_2(4)(2)", false,-1, 31,0);
        tracep->declBus(c+539,"conv1 window_mul_result_2(4)(3)", false,-1, 31,0);
        tracep->declBus(c+540,"conv1 window_mul_result_2(4)(4)", false,-1, 31,0);
        tracep->declBus(c+541,"conv1 window_mul_result_3(0)(0)", false,-1, 31,0);
        tracep->declBus(c+542,"conv1 window_mul_result_3(0)(1)", false,-1, 31,0);
        tracep->declBus(c+543,"conv1 window_mul_result_3(0)(2)", false,-1, 31,0);
        tracep->declBus(c+544,"conv1 window_mul_result_3(0)(3)", false,-1, 31,0);
        tracep->declBus(c+545,"conv1 window_mul_result_3(0)(4)", false,-1, 31,0);
        tracep->declBus(c+546,"conv1 window_mul_result_3(1)(0)", false,-1, 31,0);
        tracep->declBus(c+547,"conv1 window_mul_result_3(1)(1)", false,-1, 31,0);
        tracep->declBus(c+548,"conv1 window_mul_result_3(1)(2)", false,-1, 31,0);
        tracep->declBus(c+549,"conv1 window_mul_result_3(1)(3)", false,-1, 31,0);
        tracep->declBus(c+550,"conv1 window_mul_result_3(1)(4)", false,-1, 31,0);
        tracep->declBus(c+551,"conv1 window_mul_result_3(2)(0)", false,-1, 31,0);
        tracep->declBus(c+552,"conv1 window_mul_result_3(2)(1)", false,-1, 31,0);
        tracep->declBus(c+553,"conv1 window_mul_result_3(2)(2)", false,-1, 31,0);
        tracep->declBus(c+554,"conv1 window_mul_result_3(2)(3)", false,-1, 31,0);
        tracep->declBus(c+555,"conv1 window_mul_result_3(2)(4)", false,-1, 31,0);
        tracep->declBus(c+556,"conv1 window_mul_result_3(3)(0)", false,-1, 31,0);
        tracep->declBus(c+557,"conv1 window_mul_result_3(3)(1)", false,-1, 31,0);
        tracep->declBus(c+558,"conv1 window_mul_result_3(3)(2)", false,-1, 31,0);
        tracep->declBus(c+559,"conv1 window_mul_result_3(3)(3)", false,-1, 31,0);
        tracep->declBus(c+560,"conv1 window_mul_result_3(3)(4)", false,-1, 31,0);
        tracep->declBus(c+561,"conv1 window_mul_result_3(4)(0)", false,-1, 31,0);
        tracep->declBus(c+562,"conv1 window_mul_result_3(4)(1)", false,-1, 31,0);
        tracep->declBus(c+563,"conv1 window_mul_result_3(4)(2)", false,-1, 31,0);
        tracep->declBus(c+564,"conv1 window_mul_result_3(4)(3)", false,-1, 31,0);
        tracep->declBus(c+565,"conv1 window_mul_result_3(4)(4)", false,-1, 31,0);
        tracep->declBus(c+566,"conv1 window_mul_result_4(0)(0)", false,-1, 31,0);
        tracep->declBus(c+567,"conv1 window_mul_result_4(0)(1)", false,-1, 31,0);
        tracep->declBus(c+568,"conv1 window_mul_result_4(0)(2)", false,-1, 31,0);
        tracep->declBus(c+569,"conv1 window_mul_result_4(0)(3)", false,-1, 31,0);
        tracep->declBus(c+570,"conv1 window_mul_result_4(0)(4)", false,-1, 31,0);
        tracep->declBus(c+571,"conv1 window_mul_result_4(1)(0)", false,-1, 31,0);
        tracep->declBus(c+572,"conv1 window_mul_result_4(1)(1)", false,-1, 31,0);
        tracep->declBus(c+573,"conv1 window_mul_result_4(1)(2)", false,-1, 31,0);
        tracep->declBus(c+574,"conv1 window_mul_result_4(1)(3)", false,-1, 31,0);
        tracep->declBus(c+575,"conv1 window_mul_result_4(1)(4)", false,-1, 31,0);
        tracep->declBus(c+576,"conv1 window_mul_result_4(2)(0)", false,-1, 31,0);
        tracep->declBus(c+577,"conv1 window_mul_result_4(2)(1)", false,-1, 31,0);
        tracep->declBus(c+578,"conv1 window_mul_result_4(2)(2)", false,-1, 31,0);
        tracep->declBus(c+579,"conv1 window_mul_result_4(2)(3)", false,-1, 31,0);
        tracep->declBus(c+580,"conv1 window_mul_result_4(2)(4)", false,-1, 31,0);
        tracep->declBus(c+581,"conv1 window_mul_result_4(3)(0)", false,-1, 31,0);
        tracep->declBus(c+582,"conv1 window_mul_result_4(3)(1)", false,-1, 31,0);
        tracep->declBus(c+583,"conv1 window_mul_result_4(3)(2)", false,-1, 31,0);
        tracep->declBus(c+584,"conv1 window_mul_result_4(3)(3)", false,-1, 31,0);
        tracep->declBus(c+585,"conv1 window_mul_result_4(3)(4)", false,-1, 31,0);
        tracep->declBus(c+586,"conv1 window_mul_result_4(4)(0)", false,-1, 31,0);
        tracep->declBus(c+587,"conv1 window_mul_result_4(4)(1)", false,-1, 31,0);
        tracep->declBus(c+588,"conv1 window_mul_result_4(4)(2)", false,-1, 31,0);
        tracep->declBus(c+589,"conv1 window_mul_result_4(4)(3)", false,-1, 31,0);
        tracep->declBus(c+590,"conv1 window_mul_result_4(4)(4)", false,-1, 31,0);
        tracep->declBus(c+591,"conv1 window_mul_result_5(0)(0)", false,-1, 31,0);
        tracep->declBus(c+592,"conv1 window_mul_result_5(0)(1)", false,-1, 31,0);
        tracep->declBus(c+593,"conv1 window_mul_result_5(0)(2)", false,-1, 31,0);
        tracep->declBus(c+594,"conv1 window_mul_result_5(0)(3)", false,-1, 31,0);
        tracep->declBus(c+595,"conv1 window_mul_result_5(0)(4)", false,-1, 31,0);
        tracep->declBus(c+596,"conv1 window_mul_result_5(1)(0)", false,-1, 31,0);
        tracep->declBus(c+597,"conv1 window_mul_result_5(1)(1)", false,-1, 31,0);
        tracep->declBus(c+598,"conv1 window_mul_result_5(1)(2)", false,-1, 31,0);
        tracep->declBus(c+599,"conv1 window_mul_result_5(1)(3)", false,-1, 31,0);
        tracep->declBus(c+600,"conv1 window_mul_result_5(1)(4)", false,-1, 31,0);
        tracep->declBus(c+601,"conv1 window_mul_result_5(2)(0)", false,-1, 31,0);
        tracep->declBus(c+602,"conv1 window_mul_result_5(2)(1)", false,-1, 31,0);
        tracep->declBus(c+603,"conv1 window_mul_result_5(2)(2)", false,-1, 31,0);
        tracep->declBus(c+604,"conv1 window_mul_result_5(2)(3)", false,-1, 31,0);
        tracep->declBus(c+605,"conv1 window_mul_result_5(2)(4)", false,-1, 31,0);
        tracep->declBus(c+606,"conv1 window_mul_result_5(3)(0)", false,-1, 31,0);
        tracep->declBus(c+607,"conv1 window_mul_result_5(3)(1)", false,-1, 31,0);
        tracep->declBus(c+608,"conv1 window_mul_result_5(3)(2)", false,-1, 31,0);
        tracep->declBus(c+609,"conv1 window_mul_result_5(3)(3)", false,-1, 31,0);
        tracep->declBus(c+610,"conv1 window_mul_result_5(3)(4)", false,-1, 31,0);
        tracep->declBus(c+611,"conv1 window_mul_result_5(4)(0)", false,-1, 31,0);
        tracep->declBus(c+612,"conv1 window_mul_result_5(4)(1)", false,-1, 31,0);
        tracep->declBus(c+613,"conv1 window_mul_result_5(4)(2)", false,-1, 31,0);
        tracep->declBus(c+614,"conv1 window_mul_result_5(4)(3)", false,-1, 31,0);
        tracep->declBus(c+615,"conv1 window_mul_result_5(4)(4)", false,-1, 31,0);
        tracep->declBus(c+616,"conv1 window_mul_result_6(0)(0)", false,-1, 31,0);
        tracep->declBus(c+617,"conv1 window_mul_result_6(0)(1)", false,-1, 31,0);
        tracep->declBus(c+618,"conv1 window_mul_result_6(0)(2)", false,-1, 31,0);
        tracep->declBus(c+619,"conv1 window_mul_result_6(0)(3)", false,-1, 31,0);
        tracep->declBus(c+620,"conv1 window_mul_result_6(0)(4)", false,-1, 31,0);
        tracep->declBus(c+621,"conv1 window_mul_result_6(1)(0)", false,-1, 31,0);
        tracep->declBus(c+622,"conv1 window_mul_result_6(1)(1)", false,-1, 31,0);
        tracep->declBus(c+623,"conv1 window_mul_result_6(1)(2)", false,-1, 31,0);
        tracep->declBus(c+624,"conv1 window_mul_result_6(1)(3)", false,-1, 31,0);
        tracep->declBus(c+625,"conv1 window_mul_result_6(1)(4)", false,-1, 31,0);
        tracep->declBus(c+626,"conv1 window_mul_result_6(2)(0)", false,-1, 31,0);
        tracep->declBus(c+627,"conv1 window_mul_result_6(2)(1)", false,-1, 31,0);
        tracep->declBus(c+628,"conv1 window_mul_result_6(2)(2)", false,-1, 31,0);
        tracep->declBus(c+629,"conv1 window_mul_result_6(2)(3)", false,-1, 31,0);
        tracep->declBus(c+630,"conv1 window_mul_result_6(2)(4)", false,-1, 31,0);
        tracep->declBus(c+631,"conv1 window_mul_result_6(3)(0)", false,-1, 31,0);
        tracep->declBus(c+632,"conv1 window_mul_result_6(3)(1)", false,-1, 31,0);
        tracep->declBus(c+633,"conv1 window_mul_result_6(3)(2)", false,-1, 31,0);
        tracep->declBus(c+634,"conv1 window_mul_result_6(3)(3)", false,-1, 31,0);
        tracep->declBus(c+635,"conv1 window_mul_result_6(3)(4)", false,-1, 31,0);
        tracep->declBus(c+636,"conv1 window_mul_result_6(4)(0)", false,-1, 31,0);
        tracep->declBus(c+637,"conv1 window_mul_result_6(4)(1)", false,-1, 31,0);
        tracep->declBus(c+638,"conv1 window_mul_result_6(4)(2)", false,-1, 31,0);
        tracep->declBus(c+639,"conv1 window_mul_result_6(4)(3)", false,-1, 31,0);
        tracep->declBus(c+640,"conv1 window_mul_result_6(4)(4)", false,-1, 31,0);
        tracep->declBus(c+641,"conv1 window_sum_1", false,-1, 31,0);
        tracep->declBus(c+642,"conv1 window_sum_2", false,-1, 31,0);
        tracep->declBus(c+643,"conv1 window_sum_3", false,-1, 31,0);
        tracep->declBus(c+644,"conv1 window_sum_4", false,-1, 31,0);
        tracep->declBus(c+645,"conv1 window_sum_5", false,-1, 31,0);
        tracep->declBus(c+646,"conv1 window_sum_6", false,-1, 31,0);
        tracep->declBit(c+647,"conv1 data_out_valid_o", false,-1);
        tracep->declBit(c+156,"conv1 delay_data_out_valid_o", false,-1);
        tracep->declArray(c+670,"conv1 weights_rom_u1 FILE_NAME", false,-1, 319,0);
        tracep->declBit(c+669,"conv1 weights_rom_u1 rom_r_en", false,-1);
        tracep->declBus(c+490,"conv1 weights_rom_u1 rom_raddr", false,-1, 4,0);
        tracep->declBus(c+334,"conv1 weights_rom_u1 rom_dout", false,-1, 15,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+1+i*1,"conv1 weights_rom_u1 para_rom", true,(i+0), 15,0);}}
        tracep->declArray(c+670,"conv1 weights_rom_u2 FILE_NAME", false,-1, 319,0);
        tracep->declBit(c+669,"conv1 weights_rom_u2 rom_r_en", false,-1);
        tracep->declBus(c+490,"conv1 weights_rom_u2 rom_raddr", false,-1, 4,0);
        tracep->declBus(c+335,"conv1 weights_rom_u2 rom_dout", false,-1, 15,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+26+i*1,"conv1 weights_rom_u2 para_rom", true,(i+0), 15,0);}}
        tracep->declArray(c+670,"conv1 weights_rom_u3 FILE_NAME", false,-1, 319,0);
        tracep->declBit(c+669,"conv1 weights_rom_u3 rom_r_en", false,-1);
        tracep->declBus(c+490,"conv1 weights_rom_u3 rom_raddr", false,-1, 4,0);
        tracep->declBus(c+336,"conv1 weights_rom_u3 rom_dout", false,-1, 15,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+51+i*1,"conv1 weights_rom_u3 para_rom", true,(i+0), 15,0);}}
        tracep->declArray(c+670,"conv1 weights_rom_u4 FILE_NAME", false,-1, 319,0);
        tracep->declBit(c+669,"conv1 weights_rom_u4 rom_r_en", false,-1);
        tracep->declBus(c+490,"conv1 weights_rom_u4 rom_raddr", false,-1, 4,0);
        tracep->declBus(c+337,"conv1 weights_rom_u4 rom_dout", false,-1, 15,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+76+i*1,"conv1 weights_rom_u4 para_rom", true,(i+0), 15,0);}}
        tracep->declArray(c+670,"conv1 weights_rom_u5 FILE_NAME", false,-1, 319,0);
        tracep->declBit(c+669,"conv1 weights_rom_u5 rom_r_en", false,-1);
        tracep->declBus(c+490,"conv1 weights_rom_u5 rom_raddr", false,-1, 4,0);
        tracep->declBus(c+338,"conv1 weights_rom_u5 rom_dout", false,-1, 15,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+101+i*1,"conv1 weights_rom_u5 para_rom", true,(i+0), 15,0);}}
        tracep->declArray(c+670,"conv1 weights_rom_u6 FILE_NAME", false,-1, 319,0);
        tracep->declBit(c+669,"conv1 weights_rom_u6 rom_r_en", false,-1);
        tracep->declBus(c+490,"conv1 weights_rom_u6 rom_raddr", false,-1, 4,0);
        tracep->declBus(c+339,"conv1 weights_rom_u6 rom_dout", false,-1, 15,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+126+i*1,"conv1 weights_rom_u6 para_rom", true,(i+0), 15,0);}}
        tracep->declBit(c+658,"conv1 genblk2[0] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+658,"conv1 genblk2[0] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+661,"conv1 genblk2[0] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+669,"conv1 genblk2[0] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+302,"conv1 genblk2[0] graylinebuffer_U waddr", false,-1, 4,0);
        tracep->declBus(c+303,"conv1 genblk2[0] graylinebuffer_U raddr", false,-1, 4,0);
        tracep->declBus(c+653,"conv1 genblk2[0] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+157,"conv1 genblk2[0] graylinebuffer_U dout", false,-1, 7,0);
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+158+i*1,"conv1 genblk2[0] graylinebuffer_U buffer", true,(i+0), 7,0);}}
        tracep->declBit(c+658,"conv1 genblk2[1] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+658,"conv1 genblk2[1] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+661,"conv1 genblk2[1] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+669,"conv1 genblk2[1] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+302,"conv1 genblk2[1] graylinebuffer_U waddr", false,-1, 4,0);
        tracep->declBus(c+303,"conv1 genblk2[1] graylinebuffer_U raddr", false,-1, 4,0);
        tracep->declBus(c+654,"conv1 genblk2[1] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+186,"conv1 genblk2[1] graylinebuffer_U dout", false,-1, 7,0);
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+187+i*1,"conv1 genblk2[1] graylinebuffer_U buffer", true,(i+0), 7,0);}}
        tracep->declBit(c+658,"conv1 genblk2[2] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+658,"conv1 genblk2[2] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+661,"conv1 genblk2[2] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+669,"conv1 genblk2[2] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+302,"conv1 genblk2[2] graylinebuffer_U waddr", false,-1, 4,0);
        tracep->declBus(c+303,"conv1 genblk2[2] graylinebuffer_U raddr", false,-1, 4,0);
        tracep->declBus(c+655,"conv1 genblk2[2] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+215,"conv1 genblk2[2] graylinebuffer_U dout", false,-1, 7,0);
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+216+i*1,"conv1 genblk2[2] graylinebuffer_U buffer", true,(i+0), 7,0);}}
        tracep->declBit(c+658,"conv1 genblk2[3] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+658,"conv1 genblk2[3] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+661,"conv1 genblk2[3] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+669,"conv1 genblk2[3] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+302,"conv1 genblk2[3] graylinebuffer_U waddr", false,-1, 4,0);
        tracep->declBus(c+303,"conv1 genblk2[3] graylinebuffer_U raddr", false,-1, 4,0);
        tracep->declBus(c+656,"conv1 genblk2[3] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+244,"conv1 genblk2[3] graylinebuffer_U dout", false,-1, 7,0);
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+245+i*1,"conv1 genblk2[3] graylinebuffer_U buffer", true,(i+0), 7,0);}}
        tracep->declBit(c+658,"conv1 genblk2[4] graylinebuffer_U clkw", false,-1);
        tracep->declBit(c+658,"conv1 genblk2[4] graylinebuffer_U clkr", false,-1);
        tracep->declBit(c+661,"conv1 genblk2[4] graylinebuffer_U w_en", false,-1);
        tracep->declBit(c+669,"conv1 genblk2[4] graylinebuffer_U r_en", false,-1);
        tracep->declBus(c+302,"conv1 genblk2[4] graylinebuffer_U waddr", false,-1, 4,0);
        tracep->declBus(c+303,"conv1 genblk2[4] graylinebuffer_U raddr", false,-1, 4,0);
        tracep->declBus(c+657,"conv1 genblk2[4] graylinebuffer_U din", false,-1, 7,0);
        tracep->declBus(c+273,"conv1 genblk2[4] graylinebuffer_U dout", false,-1, 7,0);
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+274+i*1,"conv1 genblk2[4] graylinebuffer_U buffer", true,(i+0), 7,0);}}
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

extern const VlWide<10>/*319:0*/ Vconv1__ConstPool__CONST_4ece9269_0;

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
        tracep->fullSData(oldp+26,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[0]),16);
        tracep->fullSData(oldp+27,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[1]),16);
        tracep->fullSData(oldp+28,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[2]),16);
        tracep->fullSData(oldp+29,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[3]),16);
        tracep->fullSData(oldp+30,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[4]),16);
        tracep->fullSData(oldp+31,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[5]),16);
        tracep->fullSData(oldp+32,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[6]),16);
        tracep->fullSData(oldp+33,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[7]),16);
        tracep->fullSData(oldp+34,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[8]),16);
        tracep->fullSData(oldp+35,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[9]),16);
        tracep->fullSData(oldp+36,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[10]),16);
        tracep->fullSData(oldp+37,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[11]),16);
        tracep->fullSData(oldp+38,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[12]),16);
        tracep->fullSData(oldp+39,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[13]),16);
        tracep->fullSData(oldp+40,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[14]),16);
        tracep->fullSData(oldp+41,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[15]),16);
        tracep->fullSData(oldp+42,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[16]),16);
        tracep->fullSData(oldp+43,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[17]),16);
        tracep->fullSData(oldp+44,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[18]),16);
        tracep->fullSData(oldp+45,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[19]),16);
        tracep->fullSData(oldp+46,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[20]),16);
        tracep->fullSData(oldp+47,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[21]),16);
        tracep->fullSData(oldp+48,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[22]),16);
        tracep->fullSData(oldp+49,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[23]),16);
        tracep->fullSData(oldp+50,(vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom[24]),16);
        tracep->fullSData(oldp+51,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[0]),16);
        tracep->fullSData(oldp+52,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[1]),16);
        tracep->fullSData(oldp+53,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[2]),16);
        tracep->fullSData(oldp+54,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[3]),16);
        tracep->fullSData(oldp+55,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[4]),16);
        tracep->fullSData(oldp+56,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[5]),16);
        tracep->fullSData(oldp+57,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[6]),16);
        tracep->fullSData(oldp+58,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[7]),16);
        tracep->fullSData(oldp+59,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[8]),16);
        tracep->fullSData(oldp+60,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[9]),16);
        tracep->fullSData(oldp+61,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[10]),16);
        tracep->fullSData(oldp+62,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[11]),16);
        tracep->fullSData(oldp+63,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[12]),16);
        tracep->fullSData(oldp+64,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[13]),16);
        tracep->fullSData(oldp+65,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[14]),16);
        tracep->fullSData(oldp+66,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[15]),16);
        tracep->fullSData(oldp+67,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[16]),16);
        tracep->fullSData(oldp+68,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[17]),16);
        tracep->fullSData(oldp+69,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[18]),16);
        tracep->fullSData(oldp+70,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[19]),16);
        tracep->fullSData(oldp+71,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[20]),16);
        tracep->fullSData(oldp+72,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[21]),16);
        tracep->fullSData(oldp+73,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[22]),16);
        tracep->fullSData(oldp+74,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[23]),16);
        tracep->fullSData(oldp+75,(vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom[24]),16);
        tracep->fullSData(oldp+76,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[0]),16);
        tracep->fullSData(oldp+77,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[1]),16);
        tracep->fullSData(oldp+78,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[2]),16);
        tracep->fullSData(oldp+79,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[3]),16);
        tracep->fullSData(oldp+80,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[4]),16);
        tracep->fullSData(oldp+81,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[5]),16);
        tracep->fullSData(oldp+82,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[6]),16);
        tracep->fullSData(oldp+83,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[7]),16);
        tracep->fullSData(oldp+84,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[8]),16);
        tracep->fullSData(oldp+85,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[9]),16);
        tracep->fullSData(oldp+86,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[10]),16);
        tracep->fullSData(oldp+87,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[11]),16);
        tracep->fullSData(oldp+88,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[12]),16);
        tracep->fullSData(oldp+89,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[13]),16);
        tracep->fullSData(oldp+90,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[14]),16);
        tracep->fullSData(oldp+91,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[15]),16);
        tracep->fullSData(oldp+92,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[16]),16);
        tracep->fullSData(oldp+93,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[17]),16);
        tracep->fullSData(oldp+94,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[18]),16);
        tracep->fullSData(oldp+95,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[19]),16);
        tracep->fullSData(oldp+96,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[20]),16);
        tracep->fullSData(oldp+97,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[21]),16);
        tracep->fullSData(oldp+98,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[22]),16);
        tracep->fullSData(oldp+99,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[23]),16);
        tracep->fullSData(oldp+100,(vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom[24]),16);
        tracep->fullSData(oldp+101,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[0]),16);
        tracep->fullSData(oldp+102,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[1]),16);
        tracep->fullSData(oldp+103,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[2]),16);
        tracep->fullSData(oldp+104,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[3]),16);
        tracep->fullSData(oldp+105,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[4]),16);
        tracep->fullSData(oldp+106,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[5]),16);
        tracep->fullSData(oldp+107,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[6]),16);
        tracep->fullSData(oldp+108,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[7]),16);
        tracep->fullSData(oldp+109,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[8]),16);
        tracep->fullSData(oldp+110,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[9]),16);
        tracep->fullSData(oldp+111,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[10]),16);
        tracep->fullSData(oldp+112,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[11]),16);
        tracep->fullSData(oldp+113,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[12]),16);
        tracep->fullSData(oldp+114,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[13]),16);
        tracep->fullSData(oldp+115,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[14]),16);
        tracep->fullSData(oldp+116,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[15]),16);
        tracep->fullSData(oldp+117,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[16]),16);
        tracep->fullSData(oldp+118,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[17]),16);
        tracep->fullSData(oldp+119,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[18]),16);
        tracep->fullSData(oldp+120,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[19]),16);
        tracep->fullSData(oldp+121,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[20]),16);
        tracep->fullSData(oldp+122,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[21]),16);
        tracep->fullSData(oldp+123,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[22]),16);
        tracep->fullSData(oldp+124,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[23]),16);
        tracep->fullSData(oldp+125,(vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom[24]),16);
        tracep->fullSData(oldp+126,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[0]),16);
        tracep->fullSData(oldp+127,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[1]),16);
        tracep->fullSData(oldp+128,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[2]),16);
        tracep->fullSData(oldp+129,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[3]),16);
        tracep->fullSData(oldp+130,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[4]),16);
        tracep->fullSData(oldp+131,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[5]),16);
        tracep->fullSData(oldp+132,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[6]),16);
        tracep->fullSData(oldp+133,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[7]),16);
        tracep->fullSData(oldp+134,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[8]),16);
        tracep->fullSData(oldp+135,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[9]),16);
        tracep->fullSData(oldp+136,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[10]),16);
        tracep->fullSData(oldp+137,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[11]),16);
        tracep->fullSData(oldp+138,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[12]),16);
        tracep->fullSData(oldp+139,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[13]),16);
        tracep->fullSData(oldp+140,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[14]),16);
        tracep->fullSData(oldp+141,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[15]),16);
        tracep->fullSData(oldp+142,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[16]),16);
        tracep->fullSData(oldp+143,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[17]),16);
        tracep->fullSData(oldp+144,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[18]),16);
        tracep->fullSData(oldp+145,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[19]),16);
        tracep->fullSData(oldp+146,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[20]),16);
        tracep->fullSData(oldp+147,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[21]),16);
        tracep->fullSData(oldp+148,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[22]),16);
        tracep->fullSData(oldp+149,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[23]),16);
        tracep->fullSData(oldp+150,(vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom[24]),16);
        tracep->fullCData(oldp+151,(vlSelf->conv1__DOT__window_out[0]),8);
        tracep->fullCData(oldp+152,(vlSelf->conv1__DOT__window_out[1]),8);
        tracep->fullCData(oldp+153,(vlSelf->conv1__DOT__window_out[2]),8);
        tracep->fullCData(oldp+154,(vlSelf->conv1__DOT__window_out[3]),8);
        tracep->fullCData(oldp+155,(vlSelf->conv1__DOT__window_out[4]),8);
        tracep->fullBit(oldp+156,(vlSelf->conv1__DOT__delay_data_out_valid_o));
        tracep->fullCData(oldp+157,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__graylinebuffer_U__dout),8);
        tracep->fullCData(oldp+158,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
        tracep->fullCData(oldp+159,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
        tracep->fullCData(oldp+160,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
        tracep->fullCData(oldp+161,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
        tracep->fullCData(oldp+162,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
        tracep->fullCData(oldp+163,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
        tracep->fullCData(oldp+164,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
        tracep->fullCData(oldp+165,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
        tracep->fullCData(oldp+166,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
        tracep->fullCData(oldp+167,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
        tracep->fullCData(oldp+168,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
        tracep->fullCData(oldp+169,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
        tracep->fullCData(oldp+170,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
        tracep->fullCData(oldp+171,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
        tracep->fullCData(oldp+172,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
        tracep->fullCData(oldp+173,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
        tracep->fullCData(oldp+174,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
        tracep->fullCData(oldp+175,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
        tracep->fullCData(oldp+176,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
        tracep->fullCData(oldp+177,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
        tracep->fullCData(oldp+178,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
        tracep->fullCData(oldp+179,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
        tracep->fullCData(oldp+180,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
        tracep->fullCData(oldp+181,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
        tracep->fullCData(oldp+182,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
        tracep->fullCData(oldp+183,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[25]),8);
        tracep->fullCData(oldp+184,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[26]),8);
        tracep->fullCData(oldp+185,(vlSelf->conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer[27]),8);
        tracep->fullCData(oldp+186,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__graylinebuffer_U__dout),8);
        tracep->fullCData(oldp+187,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
        tracep->fullCData(oldp+188,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
        tracep->fullCData(oldp+189,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
        tracep->fullCData(oldp+190,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
        tracep->fullCData(oldp+191,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
        tracep->fullCData(oldp+192,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
        tracep->fullCData(oldp+193,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
        tracep->fullCData(oldp+194,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
        tracep->fullCData(oldp+195,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
        tracep->fullCData(oldp+196,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
        tracep->fullCData(oldp+197,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
        tracep->fullCData(oldp+198,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
        tracep->fullCData(oldp+199,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
        tracep->fullCData(oldp+200,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
        tracep->fullCData(oldp+201,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
        tracep->fullCData(oldp+202,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
        tracep->fullCData(oldp+203,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
        tracep->fullCData(oldp+204,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
        tracep->fullCData(oldp+205,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
        tracep->fullCData(oldp+206,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
        tracep->fullCData(oldp+207,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
        tracep->fullCData(oldp+208,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
        tracep->fullCData(oldp+209,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
        tracep->fullCData(oldp+210,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
        tracep->fullCData(oldp+211,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
        tracep->fullCData(oldp+212,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[25]),8);
        tracep->fullCData(oldp+213,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[26]),8);
        tracep->fullCData(oldp+214,(vlSelf->conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer[27]),8);
        tracep->fullCData(oldp+215,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__graylinebuffer_U__dout),8);
        tracep->fullCData(oldp+216,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
        tracep->fullCData(oldp+217,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
        tracep->fullCData(oldp+218,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
        tracep->fullCData(oldp+219,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
        tracep->fullCData(oldp+220,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
        tracep->fullCData(oldp+221,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
        tracep->fullCData(oldp+222,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
        tracep->fullCData(oldp+223,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
        tracep->fullCData(oldp+224,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
        tracep->fullCData(oldp+225,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
        tracep->fullCData(oldp+226,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
        tracep->fullCData(oldp+227,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
        tracep->fullCData(oldp+228,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
        tracep->fullCData(oldp+229,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
        tracep->fullCData(oldp+230,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
        tracep->fullCData(oldp+231,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
        tracep->fullCData(oldp+232,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
        tracep->fullCData(oldp+233,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
        tracep->fullCData(oldp+234,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
        tracep->fullCData(oldp+235,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
        tracep->fullCData(oldp+236,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
        tracep->fullCData(oldp+237,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
        tracep->fullCData(oldp+238,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
        tracep->fullCData(oldp+239,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
        tracep->fullCData(oldp+240,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
        tracep->fullCData(oldp+241,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[25]),8);
        tracep->fullCData(oldp+242,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[26]),8);
        tracep->fullCData(oldp+243,(vlSelf->conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer[27]),8);
        tracep->fullCData(oldp+244,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__graylinebuffer_U__dout),8);
        tracep->fullCData(oldp+245,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
        tracep->fullCData(oldp+246,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
        tracep->fullCData(oldp+247,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
        tracep->fullCData(oldp+248,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
        tracep->fullCData(oldp+249,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
        tracep->fullCData(oldp+250,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
        tracep->fullCData(oldp+251,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
        tracep->fullCData(oldp+252,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
        tracep->fullCData(oldp+253,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
        tracep->fullCData(oldp+254,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
        tracep->fullCData(oldp+255,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
        tracep->fullCData(oldp+256,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
        tracep->fullCData(oldp+257,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
        tracep->fullCData(oldp+258,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
        tracep->fullCData(oldp+259,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
        tracep->fullCData(oldp+260,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
        tracep->fullCData(oldp+261,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
        tracep->fullCData(oldp+262,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
        tracep->fullCData(oldp+263,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
        tracep->fullCData(oldp+264,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
        tracep->fullCData(oldp+265,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
        tracep->fullCData(oldp+266,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
        tracep->fullCData(oldp+267,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
        tracep->fullCData(oldp+268,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
        tracep->fullCData(oldp+269,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
        tracep->fullCData(oldp+270,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[25]),8);
        tracep->fullCData(oldp+271,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[26]),8);
        tracep->fullCData(oldp+272,(vlSelf->conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer[27]),8);
        tracep->fullCData(oldp+273,(vlSelf->conv1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__graylinebuffer_U__dout),8);
        tracep->fullCData(oldp+274,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[0]),8);
        tracep->fullCData(oldp+275,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[1]),8);
        tracep->fullCData(oldp+276,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[2]),8);
        tracep->fullCData(oldp+277,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[3]),8);
        tracep->fullCData(oldp+278,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[4]),8);
        tracep->fullCData(oldp+279,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[5]),8);
        tracep->fullCData(oldp+280,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[6]),8);
        tracep->fullCData(oldp+281,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[7]),8);
        tracep->fullCData(oldp+282,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[8]),8);
        tracep->fullCData(oldp+283,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[9]),8);
        tracep->fullCData(oldp+284,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[10]),8);
        tracep->fullCData(oldp+285,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[11]),8);
        tracep->fullCData(oldp+286,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[12]),8);
        tracep->fullCData(oldp+287,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[13]),8);
        tracep->fullCData(oldp+288,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[14]),8);
        tracep->fullCData(oldp+289,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[15]),8);
        tracep->fullCData(oldp+290,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[16]),8);
        tracep->fullCData(oldp+291,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[17]),8);
        tracep->fullCData(oldp+292,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[18]),8);
        tracep->fullCData(oldp+293,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[19]),8);
        tracep->fullCData(oldp+294,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[20]),8);
        tracep->fullCData(oldp+295,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[21]),8);
        tracep->fullCData(oldp+296,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[22]),8);
        tracep->fullCData(oldp+297,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[23]),8);
        tracep->fullCData(oldp+298,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[24]),8);
        tracep->fullCData(oldp+299,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[25]),8);
        tracep->fullCData(oldp+300,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[26]),8);
        tracep->fullCData(oldp+301,(vlSelf->conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer[27]),8);
        tracep->fullCData(oldp+302,(vlSelf->conv1__DOT__wr_addr),5);
        tracep->fullCData(oldp+303,(vlSelf->conv1__DOT__rd_addr),5);
        tracep->fullCData(oldp+304,((0x1fU & ((IData)(2U) 
                                              + (IData)(vlSelf->conv1__DOT__wr_addr)))),5);
        tracep->fullCData(oldp+305,(vlSelf->conv1__DOT__window
                                    [0U][0U]),8);
        tracep->fullCData(oldp+306,(vlSelf->conv1__DOT__window
                                    [0U][1U]),8);
        tracep->fullCData(oldp+307,(vlSelf->conv1__DOT__window
                                    [0U][2U]),8);
        tracep->fullCData(oldp+308,(vlSelf->conv1__DOT__window
                                    [0U][3U]),8);
        tracep->fullCData(oldp+309,(vlSelf->conv1__DOT__window
                                    [0U][4U]),8);
        tracep->fullCData(oldp+310,(vlSelf->conv1__DOT__window
                                    [1U][0U]),8);
        tracep->fullCData(oldp+311,(vlSelf->conv1__DOT__window
                                    [1U][1U]),8);
        tracep->fullCData(oldp+312,(vlSelf->conv1__DOT__window
                                    [1U][2U]),8);
        tracep->fullCData(oldp+313,(vlSelf->conv1__DOT__window
                                    [1U][3U]),8);
        tracep->fullCData(oldp+314,(vlSelf->conv1__DOT__window
                                    [1U][4U]),8);
        tracep->fullCData(oldp+315,(vlSelf->conv1__DOT__window
                                    [2U][0U]),8);
        tracep->fullCData(oldp+316,(vlSelf->conv1__DOT__window
                                    [2U][1U]),8);
        tracep->fullCData(oldp+317,(vlSelf->conv1__DOT__window
                                    [2U][2U]),8);
        tracep->fullCData(oldp+318,(vlSelf->conv1__DOT__window
                                    [2U][3U]),8);
        tracep->fullCData(oldp+319,(vlSelf->conv1__DOT__window
                                    [2U][4U]),8);
        tracep->fullCData(oldp+320,(vlSelf->conv1__DOT__window
                                    [3U][0U]),8);
        tracep->fullCData(oldp+321,(vlSelf->conv1__DOT__window
                                    [3U][1U]),8);
        tracep->fullCData(oldp+322,(vlSelf->conv1__DOT__window
                                    [3U][2U]),8);
        tracep->fullCData(oldp+323,(vlSelf->conv1__DOT__window
                                    [3U][3U]),8);
        tracep->fullCData(oldp+324,(vlSelf->conv1__DOT__window
                                    [3U][4U]),8);
        tracep->fullCData(oldp+325,(vlSelf->conv1__DOT__window
                                    [4U][0U]),8);
        tracep->fullCData(oldp+326,(vlSelf->conv1__DOT__window
                                    [4U][1U]),8);
        tracep->fullCData(oldp+327,(vlSelf->conv1__DOT__window
                                    [4U][2U]),8);
        tracep->fullCData(oldp+328,(vlSelf->conv1__DOT__window
                                    [4U][3U]),8);
        tracep->fullCData(oldp+329,(vlSelf->conv1__DOT__window
                                    [4U][4U]),8);
        tracep->fullIData(oldp+330,(vlSelf->conv1__DOT__i),32);
        tracep->fullIData(oldp+331,(vlSelf->conv1__DOT__j),32);
        tracep->fullCData(oldp+332,(vlSelf->conv1__DOT__x_cnt),5);
        tracep->fullCData(oldp+333,(vlSelf->conv1__DOT__y_cnt),5);
        tracep->fullSData(oldp+334,(((0x18U >= (IData)(vlSelf->conv1__DOT__rom_cnt))
                                      ? vlSelf->conv1__DOT__weights_rom_u1__DOT__para_rom
                                     [vlSelf->conv1__DOT__rom_cnt]
                                      : 0U)),16);
        tracep->fullSData(oldp+335,(((0x18U >= (IData)(vlSelf->conv1__DOT__rom_cnt))
                                      ? vlSelf->conv1__DOT__weights_rom_u2__DOT__para_rom
                                     [vlSelf->conv1__DOT__rom_cnt]
                                      : 0U)),16);
        tracep->fullSData(oldp+336,(((0x18U >= (IData)(vlSelf->conv1__DOT__rom_cnt))
                                      ? vlSelf->conv1__DOT__weights_rom_u3__DOT__para_rom
                                     [vlSelf->conv1__DOT__rom_cnt]
                                      : 0U)),16);
        tracep->fullSData(oldp+337,(((0x18U >= (IData)(vlSelf->conv1__DOT__rom_cnt))
                                      ? vlSelf->conv1__DOT__weights_rom_u4__DOT__para_rom
                                     [vlSelf->conv1__DOT__rom_cnt]
                                      : 0U)),16);
        tracep->fullSData(oldp+338,(((0x18U >= (IData)(vlSelf->conv1__DOT__rom_cnt))
                                      ? vlSelf->conv1__DOT__weights_rom_u5__DOT__para_rom
                                     [vlSelf->conv1__DOT__rom_cnt]
                                      : 0U)),16);
        tracep->fullSData(oldp+339,(((0x18U >= (IData)(vlSelf->conv1__DOT__rom_cnt))
                                      ? vlSelf->conv1__DOT__weights_rom_u6__DOT__para_rom
                                     [vlSelf->conv1__DOT__rom_cnt]
                                      : 0U)),16);
        tracep->fullSData(oldp+340,(vlSelf->conv1__DOT__c1_w_1
                                    [0U][0U]),16);
        tracep->fullSData(oldp+341,(vlSelf->conv1__DOT__c1_w_1
                                    [0U][1U]),16);
        tracep->fullSData(oldp+342,(vlSelf->conv1__DOT__c1_w_1
                                    [0U][2U]),16);
        tracep->fullSData(oldp+343,(vlSelf->conv1__DOT__c1_w_1
                                    [0U][3U]),16);
        tracep->fullSData(oldp+344,(vlSelf->conv1__DOT__c1_w_1
                                    [0U][4U]),16);
        tracep->fullSData(oldp+345,(vlSelf->conv1__DOT__c1_w_1
                                    [1U][0U]),16);
        tracep->fullSData(oldp+346,(vlSelf->conv1__DOT__c1_w_1
                                    [1U][1U]),16);
        tracep->fullSData(oldp+347,(vlSelf->conv1__DOT__c1_w_1
                                    [1U][2U]),16);
        tracep->fullSData(oldp+348,(vlSelf->conv1__DOT__c1_w_1
                                    [1U][3U]),16);
        tracep->fullSData(oldp+349,(vlSelf->conv1__DOT__c1_w_1
                                    [1U][4U]),16);
        tracep->fullSData(oldp+350,(vlSelf->conv1__DOT__c1_w_1
                                    [2U][0U]),16);
        tracep->fullSData(oldp+351,(vlSelf->conv1__DOT__c1_w_1
                                    [2U][1U]),16);
        tracep->fullSData(oldp+352,(vlSelf->conv1__DOT__c1_w_1
                                    [2U][2U]),16);
        tracep->fullSData(oldp+353,(vlSelf->conv1__DOT__c1_w_1
                                    [2U][3U]),16);
        tracep->fullSData(oldp+354,(vlSelf->conv1__DOT__c1_w_1
                                    [2U][4U]),16);
        tracep->fullSData(oldp+355,(vlSelf->conv1__DOT__c1_w_1
                                    [3U][0U]),16);
        tracep->fullSData(oldp+356,(vlSelf->conv1__DOT__c1_w_1
                                    [3U][1U]),16);
        tracep->fullSData(oldp+357,(vlSelf->conv1__DOT__c1_w_1
                                    [3U][2U]),16);
        tracep->fullSData(oldp+358,(vlSelf->conv1__DOT__c1_w_1
                                    [3U][3U]),16);
        tracep->fullSData(oldp+359,(vlSelf->conv1__DOT__c1_w_1
                                    [3U][4U]),16);
        tracep->fullSData(oldp+360,(vlSelf->conv1__DOT__c1_w_1
                                    [4U][0U]),16);
        tracep->fullSData(oldp+361,(vlSelf->conv1__DOT__c1_w_1
                                    [4U][1U]),16);
        tracep->fullSData(oldp+362,(vlSelf->conv1__DOT__c1_w_1
                                    [4U][2U]),16);
        tracep->fullSData(oldp+363,(vlSelf->conv1__DOT__c1_w_1
                                    [4U][3U]),16);
        tracep->fullSData(oldp+364,(vlSelf->conv1__DOT__c1_w_1
                                    [4U][4U]),16);
        tracep->fullSData(oldp+365,(vlSelf->conv1__DOT__c1_w_2
                                    [0U][0U]),16);
        tracep->fullSData(oldp+366,(vlSelf->conv1__DOT__c1_w_2
                                    [0U][1U]),16);
        tracep->fullSData(oldp+367,(vlSelf->conv1__DOT__c1_w_2
                                    [0U][2U]),16);
        tracep->fullSData(oldp+368,(vlSelf->conv1__DOT__c1_w_2
                                    [0U][3U]),16);
        tracep->fullSData(oldp+369,(vlSelf->conv1__DOT__c1_w_2
                                    [0U][4U]),16);
        tracep->fullSData(oldp+370,(vlSelf->conv1__DOT__c1_w_2
                                    [1U][0U]),16);
        tracep->fullSData(oldp+371,(vlSelf->conv1__DOT__c1_w_2
                                    [1U][1U]),16);
        tracep->fullSData(oldp+372,(vlSelf->conv1__DOT__c1_w_2
                                    [1U][2U]),16);
        tracep->fullSData(oldp+373,(vlSelf->conv1__DOT__c1_w_2
                                    [1U][3U]),16);
        tracep->fullSData(oldp+374,(vlSelf->conv1__DOT__c1_w_2
                                    [1U][4U]),16);
        tracep->fullSData(oldp+375,(vlSelf->conv1__DOT__c1_w_2
                                    [2U][0U]),16);
        tracep->fullSData(oldp+376,(vlSelf->conv1__DOT__c1_w_2
                                    [2U][1U]),16);
        tracep->fullSData(oldp+377,(vlSelf->conv1__DOT__c1_w_2
                                    [2U][2U]),16);
        tracep->fullSData(oldp+378,(vlSelf->conv1__DOT__c1_w_2
                                    [2U][3U]),16);
        tracep->fullSData(oldp+379,(vlSelf->conv1__DOT__c1_w_2
                                    [2U][4U]),16);
        tracep->fullSData(oldp+380,(vlSelf->conv1__DOT__c1_w_2
                                    [3U][0U]),16);
        tracep->fullSData(oldp+381,(vlSelf->conv1__DOT__c1_w_2
                                    [3U][1U]),16);
        tracep->fullSData(oldp+382,(vlSelf->conv1__DOT__c1_w_2
                                    [3U][2U]),16);
        tracep->fullSData(oldp+383,(vlSelf->conv1__DOT__c1_w_2
                                    [3U][3U]),16);
        tracep->fullSData(oldp+384,(vlSelf->conv1__DOT__c1_w_2
                                    [3U][4U]),16);
        tracep->fullSData(oldp+385,(vlSelf->conv1__DOT__c1_w_2
                                    [4U][0U]),16);
        tracep->fullSData(oldp+386,(vlSelf->conv1__DOT__c1_w_2
                                    [4U][1U]),16);
        tracep->fullSData(oldp+387,(vlSelf->conv1__DOT__c1_w_2
                                    [4U][2U]),16);
        tracep->fullSData(oldp+388,(vlSelf->conv1__DOT__c1_w_2
                                    [4U][3U]),16);
        tracep->fullSData(oldp+389,(vlSelf->conv1__DOT__c1_w_2
                                    [4U][4U]),16);
        tracep->fullSData(oldp+390,(vlSelf->conv1__DOT__c1_w_3
                                    [0U][0U]),16);
        tracep->fullSData(oldp+391,(vlSelf->conv1__DOT__c1_w_3
                                    [0U][1U]),16);
        tracep->fullSData(oldp+392,(vlSelf->conv1__DOT__c1_w_3
                                    [0U][2U]),16);
        tracep->fullSData(oldp+393,(vlSelf->conv1__DOT__c1_w_3
                                    [0U][3U]),16);
        tracep->fullSData(oldp+394,(vlSelf->conv1__DOT__c1_w_3
                                    [0U][4U]),16);
        tracep->fullSData(oldp+395,(vlSelf->conv1__DOT__c1_w_3
                                    [1U][0U]),16);
        tracep->fullSData(oldp+396,(vlSelf->conv1__DOT__c1_w_3
                                    [1U][1U]),16);
        tracep->fullSData(oldp+397,(vlSelf->conv1__DOT__c1_w_3
                                    [1U][2U]),16);
        tracep->fullSData(oldp+398,(vlSelf->conv1__DOT__c1_w_3
                                    [1U][3U]),16);
        tracep->fullSData(oldp+399,(vlSelf->conv1__DOT__c1_w_3
                                    [1U][4U]),16);
        tracep->fullSData(oldp+400,(vlSelf->conv1__DOT__c1_w_3
                                    [2U][0U]),16);
        tracep->fullSData(oldp+401,(vlSelf->conv1__DOT__c1_w_3
                                    [2U][1U]),16);
        tracep->fullSData(oldp+402,(vlSelf->conv1__DOT__c1_w_3
                                    [2U][2U]),16);
        tracep->fullSData(oldp+403,(vlSelf->conv1__DOT__c1_w_3
                                    [2U][3U]),16);
        tracep->fullSData(oldp+404,(vlSelf->conv1__DOT__c1_w_3
                                    [2U][4U]),16);
        tracep->fullSData(oldp+405,(vlSelf->conv1__DOT__c1_w_3
                                    [3U][0U]),16);
        tracep->fullSData(oldp+406,(vlSelf->conv1__DOT__c1_w_3
                                    [3U][1U]),16);
        tracep->fullSData(oldp+407,(vlSelf->conv1__DOT__c1_w_3
                                    [3U][2U]),16);
        tracep->fullSData(oldp+408,(vlSelf->conv1__DOT__c1_w_3
                                    [3U][3U]),16);
        tracep->fullSData(oldp+409,(vlSelf->conv1__DOT__c1_w_3
                                    [3U][4U]),16);
        tracep->fullSData(oldp+410,(vlSelf->conv1__DOT__c1_w_3
                                    [4U][0U]),16);
        tracep->fullSData(oldp+411,(vlSelf->conv1__DOT__c1_w_3
                                    [4U][1U]),16);
        tracep->fullSData(oldp+412,(vlSelf->conv1__DOT__c1_w_3
                                    [4U][2U]),16);
        tracep->fullSData(oldp+413,(vlSelf->conv1__DOT__c1_w_3
                                    [4U][3U]),16);
        tracep->fullSData(oldp+414,(vlSelf->conv1__DOT__c1_w_3
                                    [4U][4U]),16);
        tracep->fullSData(oldp+415,(vlSelf->conv1__DOT__c1_w_4
                                    [0U][0U]),16);
        tracep->fullSData(oldp+416,(vlSelf->conv1__DOT__c1_w_4
                                    [0U][1U]),16);
        tracep->fullSData(oldp+417,(vlSelf->conv1__DOT__c1_w_4
                                    [0U][2U]),16);
        tracep->fullSData(oldp+418,(vlSelf->conv1__DOT__c1_w_4
                                    [0U][3U]),16);
        tracep->fullSData(oldp+419,(vlSelf->conv1__DOT__c1_w_4
                                    [0U][4U]),16);
        tracep->fullSData(oldp+420,(vlSelf->conv1__DOT__c1_w_4
                                    [1U][0U]),16);
        tracep->fullSData(oldp+421,(vlSelf->conv1__DOT__c1_w_4
                                    [1U][1U]),16);
        tracep->fullSData(oldp+422,(vlSelf->conv1__DOT__c1_w_4
                                    [1U][2U]),16);
        tracep->fullSData(oldp+423,(vlSelf->conv1__DOT__c1_w_4
                                    [1U][3U]),16);
        tracep->fullSData(oldp+424,(vlSelf->conv1__DOT__c1_w_4
                                    [1U][4U]),16);
        tracep->fullSData(oldp+425,(vlSelf->conv1__DOT__c1_w_4
                                    [2U][0U]),16);
        tracep->fullSData(oldp+426,(vlSelf->conv1__DOT__c1_w_4
                                    [2U][1U]),16);
        tracep->fullSData(oldp+427,(vlSelf->conv1__DOT__c1_w_4
                                    [2U][2U]),16);
        tracep->fullSData(oldp+428,(vlSelf->conv1__DOT__c1_w_4
                                    [2U][3U]),16);
        tracep->fullSData(oldp+429,(vlSelf->conv1__DOT__c1_w_4
                                    [2U][4U]),16);
        tracep->fullSData(oldp+430,(vlSelf->conv1__DOT__c1_w_4
                                    [3U][0U]),16);
        tracep->fullSData(oldp+431,(vlSelf->conv1__DOT__c1_w_4
                                    [3U][1U]),16);
        tracep->fullSData(oldp+432,(vlSelf->conv1__DOT__c1_w_4
                                    [3U][2U]),16);
        tracep->fullSData(oldp+433,(vlSelf->conv1__DOT__c1_w_4
                                    [3U][3U]),16);
        tracep->fullSData(oldp+434,(vlSelf->conv1__DOT__c1_w_4
                                    [3U][4U]),16);
        tracep->fullSData(oldp+435,(vlSelf->conv1__DOT__c1_w_4
                                    [4U][0U]),16);
        tracep->fullSData(oldp+436,(vlSelf->conv1__DOT__c1_w_4
                                    [4U][1U]),16);
        tracep->fullSData(oldp+437,(vlSelf->conv1__DOT__c1_w_4
                                    [4U][2U]),16);
        tracep->fullSData(oldp+438,(vlSelf->conv1__DOT__c1_w_4
                                    [4U][3U]),16);
        tracep->fullSData(oldp+439,(vlSelf->conv1__DOT__c1_w_4
                                    [4U][4U]),16);
        tracep->fullSData(oldp+440,(vlSelf->conv1__DOT__c1_w_5
                                    [0U][0U]),16);
        tracep->fullSData(oldp+441,(vlSelf->conv1__DOT__c1_w_5
                                    [0U][1U]),16);
        tracep->fullSData(oldp+442,(vlSelf->conv1__DOT__c1_w_5
                                    [0U][2U]),16);
        tracep->fullSData(oldp+443,(vlSelf->conv1__DOT__c1_w_5
                                    [0U][3U]),16);
        tracep->fullSData(oldp+444,(vlSelf->conv1__DOT__c1_w_5
                                    [0U][4U]),16);
        tracep->fullSData(oldp+445,(vlSelf->conv1__DOT__c1_w_5
                                    [1U][0U]),16);
        tracep->fullSData(oldp+446,(vlSelf->conv1__DOT__c1_w_5
                                    [1U][1U]),16);
        tracep->fullSData(oldp+447,(vlSelf->conv1__DOT__c1_w_5
                                    [1U][2U]),16);
        tracep->fullSData(oldp+448,(vlSelf->conv1__DOT__c1_w_5
                                    [1U][3U]),16);
        tracep->fullSData(oldp+449,(vlSelf->conv1__DOT__c1_w_5
                                    [1U][4U]),16);
        tracep->fullSData(oldp+450,(vlSelf->conv1__DOT__c1_w_5
                                    [2U][0U]),16);
        tracep->fullSData(oldp+451,(vlSelf->conv1__DOT__c1_w_5
                                    [2U][1U]),16);
        tracep->fullSData(oldp+452,(vlSelf->conv1__DOT__c1_w_5
                                    [2U][2U]),16);
        tracep->fullSData(oldp+453,(vlSelf->conv1__DOT__c1_w_5
                                    [2U][3U]),16);
        tracep->fullSData(oldp+454,(vlSelf->conv1__DOT__c1_w_5
                                    [2U][4U]),16);
        tracep->fullSData(oldp+455,(vlSelf->conv1__DOT__c1_w_5
                                    [3U][0U]),16);
        tracep->fullSData(oldp+456,(vlSelf->conv1__DOT__c1_w_5
                                    [3U][1U]),16);
        tracep->fullSData(oldp+457,(vlSelf->conv1__DOT__c1_w_5
                                    [3U][2U]),16);
        tracep->fullSData(oldp+458,(vlSelf->conv1__DOT__c1_w_5
                                    [3U][3U]),16);
        tracep->fullSData(oldp+459,(vlSelf->conv1__DOT__c1_w_5
                                    [3U][4U]),16);
        tracep->fullSData(oldp+460,(vlSelf->conv1__DOT__c1_w_5
                                    [4U][0U]),16);
        tracep->fullSData(oldp+461,(vlSelf->conv1__DOT__c1_w_5
                                    [4U][1U]),16);
        tracep->fullSData(oldp+462,(vlSelf->conv1__DOT__c1_w_5
                                    [4U][2U]),16);
        tracep->fullSData(oldp+463,(vlSelf->conv1__DOT__c1_w_5
                                    [4U][3U]),16);
        tracep->fullSData(oldp+464,(vlSelf->conv1__DOT__c1_w_5
                                    [4U][4U]),16);
        tracep->fullSData(oldp+465,(vlSelf->conv1__DOT__c1_w_6
                                    [0U][0U]),16);
        tracep->fullSData(oldp+466,(vlSelf->conv1__DOT__c1_w_6
                                    [0U][1U]),16);
        tracep->fullSData(oldp+467,(vlSelf->conv1__DOT__c1_w_6
                                    [0U][2U]),16);
        tracep->fullSData(oldp+468,(vlSelf->conv1__DOT__c1_w_6
                                    [0U][3U]),16);
        tracep->fullSData(oldp+469,(vlSelf->conv1__DOT__c1_w_6
                                    [0U][4U]),16);
        tracep->fullSData(oldp+470,(vlSelf->conv1__DOT__c1_w_6
                                    [1U][0U]),16);
        tracep->fullSData(oldp+471,(vlSelf->conv1__DOT__c1_w_6
                                    [1U][1U]),16);
        tracep->fullSData(oldp+472,(vlSelf->conv1__DOT__c1_w_6
                                    [1U][2U]),16);
        tracep->fullSData(oldp+473,(vlSelf->conv1__DOT__c1_w_6
                                    [1U][3U]),16);
        tracep->fullSData(oldp+474,(vlSelf->conv1__DOT__c1_w_6
                                    [1U][4U]),16);
        tracep->fullSData(oldp+475,(vlSelf->conv1__DOT__c1_w_6
                                    [2U][0U]),16);
        tracep->fullSData(oldp+476,(vlSelf->conv1__DOT__c1_w_6
                                    [2U][1U]),16);
        tracep->fullSData(oldp+477,(vlSelf->conv1__DOT__c1_w_6
                                    [2U][2U]),16);
        tracep->fullSData(oldp+478,(vlSelf->conv1__DOT__c1_w_6
                                    [2U][3U]),16);
        tracep->fullSData(oldp+479,(vlSelf->conv1__DOT__c1_w_6
                                    [2U][4U]),16);
        tracep->fullSData(oldp+480,(vlSelf->conv1__DOT__c1_w_6
                                    [3U][0U]),16);
        tracep->fullSData(oldp+481,(vlSelf->conv1__DOT__c1_w_6
                                    [3U][1U]),16);
        tracep->fullSData(oldp+482,(vlSelf->conv1__DOT__c1_w_6
                                    [3U][2U]),16);
        tracep->fullSData(oldp+483,(vlSelf->conv1__DOT__c1_w_6
                                    [3U][3U]),16);
        tracep->fullSData(oldp+484,(vlSelf->conv1__DOT__c1_w_6
                                    [3U][4U]),16);
        tracep->fullSData(oldp+485,(vlSelf->conv1__DOT__c1_w_6
                                    [4U][0U]),16);
        tracep->fullSData(oldp+486,(vlSelf->conv1__DOT__c1_w_6
                                    [4U][1U]),16);
        tracep->fullSData(oldp+487,(vlSelf->conv1__DOT__c1_w_6
                                    [4U][2U]),16);
        tracep->fullSData(oldp+488,(vlSelf->conv1__DOT__c1_w_6
                                    [4U][3U]),16);
        tracep->fullSData(oldp+489,(vlSelf->conv1__DOT__c1_w_6
                                    [4U][4U]),16);
        tracep->fullCData(oldp+490,(vlSelf->conv1__DOT__rom_cnt),5);
        tracep->fullIData(oldp+491,(vlSelf->conv1__DOT__window_mul_result_1
                                    [0U][0U]),32);
        tracep->fullIData(oldp+492,(vlSelf->conv1__DOT__window_mul_result_1
                                    [0U][1U]),32);
        tracep->fullIData(oldp+493,(vlSelf->conv1__DOT__window_mul_result_1
                                    [0U][2U]),32);
        tracep->fullIData(oldp+494,(vlSelf->conv1__DOT__window_mul_result_1
                                    [0U][3U]),32);
        tracep->fullIData(oldp+495,(vlSelf->conv1__DOT__window_mul_result_1
                                    [0U][4U]),32);
        tracep->fullIData(oldp+496,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][0U]),32);
        tracep->fullIData(oldp+497,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][1U]),32);
        tracep->fullIData(oldp+498,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][2U]),32);
        tracep->fullIData(oldp+499,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][3U]),32);
        tracep->fullIData(oldp+500,(vlSelf->conv1__DOT__window_mul_result_1
                                    [1U][4U]),32);
        tracep->fullIData(oldp+501,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][0U]),32);
        tracep->fullIData(oldp+502,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][1U]),32);
        tracep->fullIData(oldp+503,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][2U]),32);
        tracep->fullIData(oldp+504,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][3U]),32);
        tracep->fullIData(oldp+505,(vlSelf->conv1__DOT__window_mul_result_1
                                    [2U][4U]),32);
        tracep->fullIData(oldp+506,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][0U]),32);
        tracep->fullIData(oldp+507,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][1U]),32);
        tracep->fullIData(oldp+508,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][2U]),32);
        tracep->fullIData(oldp+509,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][3U]),32);
        tracep->fullIData(oldp+510,(vlSelf->conv1__DOT__window_mul_result_1
                                    [3U][4U]),32);
        tracep->fullIData(oldp+511,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][0U]),32);
        tracep->fullIData(oldp+512,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][1U]),32);
        tracep->fullIData(oldp+513,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][2U]),32);
        tracep->fullIData(oldp+514,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][3U]),32);
        tracep->fullIData(oldp+515,(vlSelf->conv1__DOT__window_mul_result_1
                                    [4U][4U]),32);
        tracep->fullIData(oldp+516,(vlSelf->conv1__DOT__window_mul_result_2
                                    [0U][0U]),32);
        tracep->fullIData(oldp+517,(vlSelf->conv1__DOT__window_mul_result_2
                                    [0U][1U]),32);
        tracep->fullIData(oldp+518,(vlSelf->conv1__DOT__window_mul_result_2
                                    [0U][2U]),32);
        tracep->fullIData(oldp+519,(vlSelf->conv1__DOT__window_mul_result_2
                                    [0U][3U]),32);
        tracep->fullIData(oldp+520,(vlSelf->conv1__DOT__window_mul_result_2
                                    [0U][4U]),32);
        tracep->fullIData(oldp+521,(vlSelf->conv1__DOT__window_mul_result_2
                                    [1U][0U]),32);
        tracep->fullIData(oldp+522,(vlSelf->conv1__DOT__window_mul_result_2
                                    [1U][1U]),32);
        tracep->fullIData(oldp+523,(vlSelf->conv1__DOT__window_mul_result_2
                                    [1U][2U]),32);
        tracep->fullIData(oldp+524,(vlSelf->conv1__DOT__window_mul_result_2
                                    [1U][3U]),32);
        tracep->fullIData(oldp+525,(vlSelf->conv1__DOT__window_mul_result_2
                                    [1U][4U]),32);
        tracep->fullIData(oldp+526,(vlSelf->conv1__DOT__window_mul_result_2
                                    [2U][0U]),32);
        tracep->fullIData(oldp+527,(vlSelf->conv1__DOT__window_mul_result_2
                                    [2U][1U]),32);
        tracep->fullIData(oldp+528,(vlSelf->conv1__DOT__window_mul_result_2
                                    [2U][2U]),32);
        tracep->fullIData(oldp+529,(vlSelf->conv1__DOT__window_mul_result_2
                                    [2U][3U]),32);
        tracep->fullIData(oldp+530,(vlSelf->conv1__DOT__window_mul_result_2
                                    [2U][4U]),32);
        tracep->fullIData(oldp+531,(vlSelf->conv1__DOT__window_mul_result_2
                                    [3U][0U]),32);
        tracep->fullIData(oldp+532,(vlSelf->conv1__DOT__window_mul_result_2
                                    [3U][1U]),32);
        tracep->fullIData(oldp+533,(vlSelf->conv1__DOT__window_mul_result_2
                                    [3U][2U]),32);
        tracep->fullIData(oldp+534,(vlSelf->conv1__DOT__window_mul_result_2
                                    [3U][3U]),32);
        tracep->fullIData(oldp+535,(vlSelf->conv1__DOT__window_mul_result_2
                                    [3U][4U]),32);
        tracep->fullIData(oldp+536,(vlSelf->conv1__DOT__window_mul_result_2
                                    [4U][0U]),32);
        tracep->fullIData(oldp+537,(vlSelf->conv1__DOT__window_mul_result_2
                                    [4U][1U]),32);
        tracep->fullIData(oldp+538,(vlSelf->conv1__DOT__window_mul_result_2
                                    [4U][2U]),32);
        tracep->fullIData(oldp+539,(vlSelf->conv1__DOT__window_mul_result_2
                                    [4U][3U]),32);
        tracep->fullIData(oldp+540,(vlSelf->conv1__DOT__window_mul_result_2
                                    [4U][4U]),32);
        tracep->fullIData(oldp+541,(vlSelf->conv1__DOT__window_mul_result_3
                                    [0U][0U]),32);
        tracep->fullIData(oldp+542,(vlSelf->conv1__DOT__window_mul_result_3
                                    [0U][1U]),32);
        tracep->fullIData(oldp+543,(vlSelf->conv1__DOT__window_mul_result_3
                                    [0U][2U]),32);
        tracep->fullIData(oldp+544,(vlSelf->conv1__DOT__window_mul_result_3
                                    [0U][3U]),32);
        tracep->fullIData(oldp+545,(vlSelf->conv1__DOT__window_mul_result_3
                                    [0U][4U]),32);
        tracep->fullIData(oldp+546,(vlSelf->conv1__DOT__window_mul_result_3
                                    [1U][0U]),32);
        tracep->fullIData(oldp+547,(vlSelf->conv1__DOT__window_mul_result_3
                                    [1U][1U]),32);
        tracep->fullIData(oldp+548,(vlSelf->conv1__DOT__window_mul_result_3
                                    [1U][2U]),32);
        tracep->fullIData(oldp+549,(vlSelf->conv1__DOT__window_mul_result_3
                                    [1U][3U]),32);
        tracep->fullIData(oldp+550,(vlSelf->conv1__DOT__window_mul_result_3
                                    [1U][4U]),32);
        tracep->fullIData(oldp+551,(vlSelf->conv1__DOT__window_mul_result_3
                                    [2U][0U]),32);
        tracep->fullIData(oldp+552,(vlSelf->conv1__DOT__window_mul_result_3
                                    [2U][1U]),32);
        tracep->fullIData(oldp+553,(vlSelf->conv1__DOT__window_mul_result_3
                                    [2U][2U]),32);
        tracep->fullIData(oldp+554,(vlSelf->conv1__DOT__window_mul_result_3
                                    [2U][3U]),32);
        tracep->fullIData(oldp+555,(vlSelf->conv1__DOT__window_mul_result_3
                                    [2U][4U]),32);
        tracep->fullIData(oldp+556,(vlSelf->conv1__DOT__window_mul_result_3
                                    [3U][0U]),32);
        tracep->fullIData(oldp+557,(vlSelf->conv1__DOT__window_mul_result_3
                                    [3U][1U]),32);
        tracep->fullIData(oldp+558,(vlSelf->conv1__DOT__window_mul_result_3
                                    [3U][2U]),32);
        tracep->fullIData(oldp+559,(vlSelf->conv1__DOT__window_mul_result_3
                                    [3U][3U]),32);
        tracep->fullIData(oldp+560,(vlSelf->conv1__DOT__window_mul_result_3
                                    [3U][4U]),32);
        tracep->fullIData(oldp+561,(vlSelf->conv1__DOT__window_mul_result_3
                                    [4U][0U]),32);
        tracep->fullIData(oldp+562,(vlSelf->conv1__DOT__window_mul_result_3
                                    [4U][1U]),32);
        tracep->fullIData(oldp+563,(vlSelf->conv1__DOT__window_mul_result_3
                                    [4U][2U]),32);
        tracep->fullIData(oldp+564,(vlSelf->conv1__DOT__window_mul_result_3
                                    [4U][3U]),32);
        tracep->fullIData(oldp+565,(vlSelf->conv1__DOT__window_mul_result_3
                                    [4U][4U]),32);
        tracep->fullIData(oldp+566,(vlSelf->conv1__DOT__window_mul_result_4
                                    [0U][0U]),32);
        tracep->fullIData(oldp+567,(vlSelf->conv1__DOT__window_mul_result_4
                                    [0U][1U]),32);
        tracep->fullIData(oldp+568,(vlSelf->conv1__DOT__window_mul_result_4
                                    [0U][2U]),32);
        tracep->fullIData(oldp+569,(vlSelf->conv1__DOT__window_mul_result_4
                                    [0U][3U]),32);
        tracep->fullIData(oldp+570,(vlSelf->conv1__DOT__window_mul_result_4
                                    [0U][4U]),32);
        tracep->fullIData(oldp+571,(vlSelf->conv1__DOT__window_mul_result_4
                                    [1U][0U]),32);
        tracep->fullIData(oldp+572,(vlSelf->conv1__DOT__window_mul_result_4
                                    [1U][1U]),32);
        tracep->fullIData(oldp+573,(vlSelf->conv1__DOT__window_mul_result_4
                                    [1U][2U]),32);
        tracep->fullIData(oldp+574,(vlSelf->conv1__DOT__window_mul_result_4
                                    [1U][3U]),32);
        tracep->fullIData(oldp+575,(vlSelf->conv1__DOT__window_mul_result_4
                                    [1U][4U]),32);
        tracep->fullIData(oldp+576,(vlSelf->conv1__DOT__window_mul_result_4
                                    [2U][0U]),32);
        tracep->fullIData(oldp+577,(vlSelf->conv1__DOT__window_mul_result_4
                                    [2U][1U]),32);
        tracep->fullIData(oldp+578,(vlSelf->conv1__DOT__window_mul_result_4
                                    [2U][2U]),32);
        tracep->fullIData(oldp+579,(vlSelf->conv1__DOT__window_mul_result_4
                                    [2U][3U]),32);
        tracep->fullIData(oldp+580,(vlSelf->conv1__DOT__window_mul_result_4
                                    [2U][4U]),32);
        tracep->fullIData(oldp+581,(vlSelf->conv1__DOT__window_mul_result_4
                                    [3U][0U]),32);
        tracep->fullIData(oldp+582,(vlSelf->conv1__DOT__window_mul_result_4
                                    [3U][1U]),32);
        tracep->fullIData(oldp+583,(vlSelf->conv1__DOT__window_mul_result_4
                                    [3U][2U]),32);
        tracep->fullIData(oldp+584,(vlSelf->conv1__DOT__window_mul_result_4
                                    [3U][3U]),32);
        tracep->fullIData(oldp+585,(vlSelf->conv1__DOT__window_mul_result_4
                                    [3U][4U]),32);
        tracep->fullIData(oldp+586,(vlSelf->conv1__DOT__window_mul_result_4
                                    [4U][0U]),32);
        tracep->fullIData(oldp+587,(vlSelf->conv1__DOT__window_mul_result_4
                                    [4U][1U]),32);
        tracep->fullIData(oldp+588,(vlSelf->conv1__DOT__window_mul_result_4
                                    [4U][2U]),32);
        tracep->fullIData(oldp+589,(vlSelf->conv1__DOT__window_mul_result_4
                                    [4U][3U]),32);
        tracep->fullIData(oldp+590,(vlSelf->conv1__DOT__window_mul_result_4
                                    [4U][4U]),32);
        tracep->fullIData(oldp+591,(vlSelf->conv1__DOT__window_mul_result_5
                                    [0U][0U]),32);
        tracep->fullIData(oldp+592,(vlSelf->conv1__DOT__window_mul_result_5
                                    [0U][1U]),32);
        tracep->fullIData(oldp+593,(vlSelf->conv1__DOT__window_mul_result_5
                                    [0U][2U]),32);
        tracep->fullIData(oldp+594,(vlSelf->conv1__DOT__window_mul_result_5
                                    [0U][3U]),32);
        tracep->fullIData(oldp+595,(vlSelf->conv1__DOT__window_mul_result_5
                                    [0U][4U]),32);
        tracep->fullIData(oldp+596,(vlSelf->conv1__DOT__window_mul_result_5
                                    [1U][0U]),32);
        tracep->fullIData(oldp+597,(vlSelf->conv1__DOT__window_mul_result_5
                                    [1U][1U]),32);
        tracep->fullIData(oldp+598,(vlSelf->conv1__DOT__window_mul_result_5
                                    [1U][2U]),32);
        tracep->fullIData(oldp+599,(vlSelf->conv1__DOT__window_mul_result_5
                                    [1U][3U]),32);
        tracep->fullIData(oldp+600,(vlSelf->conv1__DOT__window_mul_result_5
                                    [1U][4U]),32);
        tracep->fullIData(oldp+601,(vlSelf->conv1__DOT__window_mul_result_5
                                    [2U][0U]),32);
        tracep->fullIData(oldp+602,(vlSelf->conv1__DOT__window_mul_result_5
                                    [2U][1U]),32);
        tracep->fullIData(oldp+603,(vlSelf->conv1__DOT__window_mul_result_5
                                    [2U][2U]),32);
        tracep->fullIData(oldp+604,(vlSelf->conv1__DOT__window_mul_result_5
                                    [2U][3U]),32);
        tracep->fullIData(oldp+605,(vlSelf->conv1__DOT__window_mul_result_5
                                    [2U][4U]),32);
        tracep->fullIData(oldp+606,(vlSelf->conv1__DOT__window_mul_result_5
                                    [3U][0U]),32);
        tracep->fullIData(oldp+607,(vlSelf->conv1__DOT__window_mul_result_5
                                    [3U][1U]),32);
        tracep->fullIData(oldp+608,(vlSelf->conv1__DOT__window_mul_result_5
                                    [3U][2U]),32);
        tracep->fullIData(oldp+609,(vlSelf->conv1__DOT__window_mul_result_5
                                    [3U][3U]),32);
        tracep->fullIData(oldp+610,(vlSelf->conv1__DOT__window_mul_result_5
                                    [3U][4U]),32);
        tracep->fullIData(oldp+611,(vlSelf->conv1__DOT__window_mul_result_5
                                    [4U][0U]),32);
        tracep->fullIData(oldp+612,(vlSelf->conv1__DOT__window_mul_result_5
                                    [4U][1U]),32);
        tracep->fullIData(oldp+613,(vlSelf->conv1__DOT__window_mul_result_5
                                    [4U][2U]),32);
        tracep->fullIData(oldp+614,(vlSelf->conv1__DOT__window_mul_result_5
                                    [4U][3U]),32);
        tracep->fullIData(oldp+615,(vlSelf->conv1__DOT__window_mul_result_5
                                    [4U][4U]),32);
        tracep->fullIData(oldp+616,(vlSelf->conv1__DOT__window_mul_result_6
                                    [0U][0U]),32);
        tracep->fullIData(oldp+617,(vlSelf->conv1__DOT__window_mul_result_6
                                    [0U][1U]),32);
        tracep->fullIData(oldp+618,(vlSelf->conv1__DOT__window_mul_result_6
                                    [0U][2U]),32);
        tracep->fullIData(oldp+619,(vlSelf->conv1__DOT__window_mul_result_6
                                    [0U][3U]),32);
        tracep->fullIData(oldp+620,(vlSelf->conv1__DOT__window_mul_result_6
                                    [0U][4U]),32);
        tracep->fullIData(oldp+621,(vlSelf->conv1__DOT__window_mul_result_6
                                    [1U][0U]),32);
        tracep->fullIData(oldp+622,(vlSelf->conv1__DOT__window_mul_result_6
                                    [1U][1U]),32);
        tracep->fullIData(oldp+623,(vlSelf->conv1__DOT__window_mul_result_6
                                    [1U][2U]),32);
        tracep->fullIData(oldp+624,(vlSelf->conv1__DOT__window_mul_result_6
                                    [1U][3U]),32);
        tracep->fullIData(oldp+625,(vlSelf->conv1__DOT__window_mul_result_6
                                    [1U][4U]),32);
        tracep->fullIData(oldp+626,(vlSelf->conv1__DOT__window_mul_result_6
                                    [2U][0U]),32);
        tracep->fullIData(oldp+627,(vlSelf->conv1__DOT__window_mul_result_6
                                    [2U][1U]),32);
        tracep->fullIData(oldp+628,(vlSelf->conv1__DOT__window_mul_result_6
                                    [2U][2U]),32);
        tracep->fullIData(oldp+629,(vlSelf->conv1__DOT__window_mul_result_6
                                    [2U][3U]),32);
        tracep->fullIData(oldp+630,(vlSelf->conv1__DOT__window_mul_result_6
                                    [2U][4U]),32);
        tracep->fullIData(oldp+631,(vlSelf->conv1__DOT__window_mul_result_6
                                    [3U][0U]),32);
        tracep->fullIData(oldp+632,(vlSelf->conv1__DOT__window_mul_result_6
                                    [3U][1U]),32);
        tracep->fullIData(oldp+633,(vlSelf->conv1__DOT__window_mul_result_6
                                    [3U][2U]),32);
        tracep->fullIData(oldp+634,(vlSelf->conv1__DOT__window_mul_result_6
                                    [3U][3U]),32);
        tracep->fullIData(oldp+635,(vlSelf->conv1__DOT__window_mul_result_6
                                    [3U][4U]),32);
        tracep->fullIData(oldp+636,(vlSelf->conv1__DOT__window_mul_result_6
                                    [4U][0U]),32);
        tracep->fullIData(oldp+637,(vlSelf->conv1__DOT__window_mul_result_6
                                    [4U][1U]),32);
        tracep->fullIData(oldp+638,(vlSelf->conv1__DOT__window_mul_result_6
                                    [4U][2U]),32);
        tracep->fullIData(oldp+639,(vlSelf->conv1__DOT__window_mul_result_6
                                    [4U][3U]),32);
        tracep->fullIData(oldp+640,(vlSelf->conv1__DOT__window_mul_result_6
                                    [4U][4U]),32);
        tracep->fullIData(oldp+641,(vlSelf->conv1__DOT__window_sum_1),32);
        tracep->fullIData(oldp+642,(vlSelf->conv1__DOT__window_sum_2),32);
        tracep->fullIData(oldp+643,(vlSelf->conv1__DOT__window_sum_3),32);
        tracep->fullIData(oldp+644,(vlSelf->conv1__DOT__window_sum_4),32);
        tracep->fullIData(oldp+645,(vlSelf->conv1__DOT__window_sum_5),32);
        tracep->fullIData(oldp+646,(vlSelf->conv1__DOT__window_sum_6),32);
        tracep->fullBit(oldp+647,(((4U <= (IData)(vlSelf->conv1__DOT__x_cnt)) 
                                   & (4U <= (IData)(vlSelf->conv1__DOT__y_cnt)))));
        tracep->fullCData(oldp+648,(vlSelf->conv1__DOT__window_in[0]),8);
        tracep->fullCData(oldp+649,(vlSelf->conv1__DOT__window_in[1]),8);
        tracep->fullCData(oldp+650,(vlSelf->conv1__DOT__window_in[2]),8);
        tracep->fullCData(oldp+651,(vlSelf->conv1__DOT__window_in[3]),8);
        tracep->fullCData(oldp+652,(vlSelf->conv1__DOT__window_in[4]),8);
        tracep->fullCData(oldp+653,(vlSelf->conv1__DOT__window_in
                                    [0U]),8);
        tracep->fullCData(oldp+654,(vlSelf->conv1__DOT__window_in
                                    [1U]),8);
        tracep->fullCData(oldp+655,(vlSelf->conv1__DOT__window_in
                                    [2U]),8);
        tracep->fullCData(oldp+656,(vlSelf->conv1__DOT__window_in
                                    [3U]),8);
        tracep->fullCData(oldp+657,(vlSelf->conv1__DOT__window_in
                                    [4U]),8);
        tracep->fullBit(oldp+658,(vlSelf->clk));
        tracep->fullBit(oldp+659,(vlSelf->rst_n));
        tracep->fullCData(oldp+660,(vlSelf->cnn_data_in),8);
        tracep->fullBit(oldp+661,(vlSelf->cnn_data_in_valid));
        tracep->fullWData(oldp+662,(vlSelf->cnn_data_out),192);
        tracep->fullBit(oldp+668,(vlSelf->cnn_data_out_valid));
        tracep->fullBit(oldp+669,(1U));
        tracep->fullWData(oldp+670,(Vconv1__ConstPool__CONST_4ece9269_0),320);
    }
}
