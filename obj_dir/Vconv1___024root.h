// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconv1.h for the primary calling header

#ifndef VERILATED_VCONV1___024ROOT_H_
#define VERILATED_VCONV1___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vconv1__Syms;

//----------

VL_MODULE(Vconv1___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(cnn_data_in,7,0);
    VL_IN8(cnn_data_in_valid,0,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;

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
