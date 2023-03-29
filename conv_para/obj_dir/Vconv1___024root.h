// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconv1.h for the primary calling header

#ifndef VERILATED_VCONV1___024ROOT_H_
#define VERILATED_VCONV1___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vconv1__Syms;
class Vconv1_VerilatedVcd;


//----------

VL_MODULE(Vconv1___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(cnn_data_in,7,0);
    VL_IN8(cnn_data_in_valid,0,0);
    VL_OUT8(cnn_data_out_valid,0,0);
    VL_OUT(cnn_data_out,31,0);

    // LOCAL SIGNALS
    CData/*4:0*/ conv1__DOT__wr_addr;
    CData/*4:0*/ conv1__DOT__rd_addr;
    CData/*4:0*/ conv1__DOT__x_cnt;
    CData/*4:0*/ conv1__DOT__y_cnt;
    CData/*4:0*/ conv1__DOT__rom_cnt;
    CData/*0:0*/ conv1__DOT__delay_data_out_valid_o;
    IData/*31:0*/ conv1__DOT__i;
    IData/*31:0*/ conv1__DOT__j;
    IData/*31:0*/ conv1__DOT__window_sum_1;
    VlUnpacked<CData/*7:0*/, 5> conv1__DOT__window_in;
    VlUnpacked<CData/*7:0*/, 5> conv1__DOT__window_out;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 5>, 5> conv1__DOT__window;
    VlUnpacked<VlUnpacked<SData/*15:0*/, 5>, 5> conv1__DOT__c1_w_1;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 5>, 5> conv1__DOT__window_mul_result_1;
    VlUnpacked<SData/*15:0*/, 25> conv1__DOT__weights_rom_u1__DOT__para_rom;
    VlUnpacked<CData/*7:0*/, 28> conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT__buffer;
    VlUnpacked<CData/*7:0*/, 28> conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT__buffer;
    VlUnpacked<CData/*7:0*/, 28> conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT__buffer;
    VlUnpacked<CData/*7:0*/, 28> conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT__buffer;
    VlUnpacked<CData/*7:0*/, 28> conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT__buffer;

    // LOCAL VARIABLES
    CData/*7:0*/ conv1__DOT____Vcellout__genblk2__BRA__0__KET____DOT__graylinebuffer_U__dout;
    CData/*7:0*/ conv1__DOT____Vcellout__genblk2__BRA__1__KET____DOT__graylinebuffer_U__dout;
    CData/*7:0*/ conv1__DOT____Vcellout__genblk2__BRA__2__KET____DOT__graylinebuffer_U__dout;
    CData/*7:0*/ conv1__DOT____Vcellout__genblk2__BRA__3__KET____DOT__graylinebuffer_U__dout;
    CData/*7:0*/ conv1__DOT____Vcellout__genblk2__BRA__4__KET____DOT__graylinebuffer_U__dout;
    CData/*7:0*/ conv1__DOT____Vlvbound1;
    CData/*7:0*/ conv1__DOT____Vlvbound2;
    CData/*7:0*/ conv1__DOT__genblk2__BRA__0__KET____DOT__graylinebuffer_U__DOT____Vlvbound1;
    CData/*7:0*/ conv1__DOT__genblk2__BRA__1__KET____DOT__graylinebuffer_U__DOT____Vlvbound1;
    CData/*7:0*/ conv1__DOT__genblk2__BRA__2__KET____DOT__graylinebuffer_U__DOT____Vlvbound1;
    CData/*7:0*/ conv1__DOT__genblk2__BRA__3__KET____DOT__graylinebuffer_U__DOT____Vlvbound1;
    CData/*7:0*/ conv1__DOT__genblk2__BRA__4__KET____DOT__graylinebuffer_U__DOT____Vlvbound1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    IData/*31:0*/ conv1__DOT____Vlvbound5;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vconv1__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vconv1___024root);  ///< Copying not allowed
  public:
    Vconv1___024root(const char* name);
    ~Vconv1___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vconv1__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
