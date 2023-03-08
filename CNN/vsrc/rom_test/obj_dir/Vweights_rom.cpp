// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vweights_rom.h"
#include "Vweights_rom__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vweights_rom::Vweights_rom(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vweights_rom__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rom_r_en{vlSymsp->TOP.rom_r_en}
    , rom_raddr{vlSymsp->TOP.rom_raddr}
    , rom_dout{vlSymsp->TOP.rom_dout}
    , rootp{&(vlSymsp->TOP)}
{
}

Vweights_rom::Vweights_rom(const char* _vcname__)
    : Vweights_rom(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vweights_rom::~Vweights_rom() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vweights_rom___024root___eval_initial(Vweights_rom___024root* vlSelf);
void Vweights_rom___024root___eval_settle(Vweights_rom___024root* vlSelf);
void Vweights_rom___024root___eval(Vweights_rom___024root* vlSelf);
QData Vweights_rom___024root___change_request(Vweights_rom___024root* vlSelf);
#ifdef VL_DEBUG
void Vweights_rom___024root___eval_debug_assertions(Vweights_rom___024root* vlSelf);
#endif  // VL_DEBUG
void Vweights_rom___024root___final(Vweights_rom___024root* vlSelf);

static void _eval_initial_loop(Vweights_rom__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vweights_rom___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vweights_rom___024root___eval_settle(&(vlSymsp->TOP));
        Vweights_rom___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vweights_rom___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("weights_rom.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vweights_rom___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vweights_rom::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vweights_rom::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vweights_rom___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vweights_rom___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vweights_rom___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("weights_rom.v", 3, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vweights_rom___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vweights_rom::final() {
    Vweights_rom___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vweights_rom::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vweights_rom::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vweights_rom___024root__traceInitTop(Vweights_rom___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vweights_rom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vweights_rom___024root*>(voidSelf);
    Vweights_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vweights_rom___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vweights_rom___024root__traceRegister(Vweights_rom___024root* vlSelf, VerilatedVcd* tracep);

void Vweights_rom::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vweights_rom___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
