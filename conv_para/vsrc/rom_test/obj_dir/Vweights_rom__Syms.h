// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VWEIGHTS_ROM__SYMS_H_
#define VERILATED_VWEIGHTS_ROM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vweights_rom.h"

// INCLUDE MODULE CLASSES
#include "Vweights_rom___024root.h"

// SYMS CLASS (contains all model state)
class Vweights_rom__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vweights_rom* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vweights_rom___024root         TOP;

    // CONSTRUCTORS
    Vweights_rom__Syms(VerilatedContext* contextp, const char* namep, Vweights_rom* modelp);
    ~Vweights_rom__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
