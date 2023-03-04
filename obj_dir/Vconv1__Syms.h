// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONV1__SYMS_H_
#define VERILATED_VCONV1__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vconv1.h"

// INCLUDE MODULE CLASSES
#include "Vconv1___024root.h"

// SYMS CLASS (contains all model state)
class Vconv1__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vconv1* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vconv1___024root               TOP;

    // CONSTRUCTORS
    Vconv1__Syms(VerilatedContext* contextp, const char* namep, Vconv1* modelp);
    ~Vconv1__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
