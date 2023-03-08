// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vweights_rom__Syms.h"
#include "Vweights_rom.h"
#include "Vweights_rom___024root.h"

// FUNCTIONS
Vweights_rom__Syms::~Vweights_rom__Syms()
{
}

Vweights_rom__Syms::Vweights_rom__Syms(VerilatedContext* contextp, const char* namep,Vweights_rom* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
