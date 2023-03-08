// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vweights_rom.h for the primary calling header

#ifndef VERILATED_VWEIGHTS_ROM___024ROOT_H_
#define VERILATED_VWEIGHTS_ROM___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vweights_rom__Syms;
class Vweights_rom_VerilatedVcd;


//----------

VL_MODULE(Vweights_rom___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rom_r_en,0,0);
    VL_IN8(rom_raddr,4,0);
    VL_OUT16(rom_dout,15,0);

    // LOCAL SIGNALS
    VlUnpacked<SData/*15:0*/, 25> weights_rom__DOT__para_rom;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vweights_rom__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vweights_rom___024root);  ///< Copying not allowed
  public:
    Vweights_rom___024root(const char* name);
    ~Vweights_rom___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vweights_rom__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
