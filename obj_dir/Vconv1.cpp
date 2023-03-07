// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconv1.h"
#include "Vconv1__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vconv1::Vconv1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vconv1__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , cnn_data_in{vlSymsp->TOP.cnn_data_in}
    , cnn_data_in_valid{vlSymsp->TOP.cnn_data_in_valid}
    , cnn_data_out{vlSymsp->TOP.cnn_data_out}
    , cnn_data_out_valid{vlSymsp->TOP.cnn_data_out_valid}
    , rootp{&(vlSymsp->TOP)}
{
}

Vconv1::Vconv1(const char* _vcname__)
    : Vconv1(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vconv1::~Vconv1() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vconv1___024root___eval_initial(Vconv1___024root* vlSelf);
void Vconv1___024root___eval_settle(Vconv1___024root* vlSelf);
void Vconv1___024root___eval(Vconv1___024root* vlSelf);
QData Vconv1___024root___change_request(Vconv1___024root* vlSelf);
#ifdef VL_DEBUG
void Vconv1___024root___eval_debug_assertions(Vconv1___024root* vlSelf);
#endif  // VL_DEBUG
void Vconv1___024root___final(Vconv1___024root* vlSelf);

static void _eval_initial_loop(Vconv1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vconv1___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vconv1___024root___eval_settle(&(vlSymsp->TOP));
        Vconv1___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vconv1___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/conv1.v", 4, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vconv1___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vconv1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconv1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconv1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vconv1___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vconv1___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/conv1.v", 4, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vconv1___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vconv1::final() {
    Vconv1___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vconv1::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vconv1::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vconv1___024root__traceInitTop(Vconv1___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vconv1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconv1___024root*>(voidSelf);
    Vconv1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vconv1___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vconv1___024root__traceRegister(Vconv1___024root* vlSelf, VerilatedVcd* tracep);

void Vconv1::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vconv1___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
