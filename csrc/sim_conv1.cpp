#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vconv1.h"

using namespace std;

#define MAX_TIME 300


// ========================= Environment =========================
    VerilatedContext *contextp;
    Vconv1 *dut;

//========================== GTKWAVE =============================
    VerilatedVcdC *m_trace;		// trace
    vluint64_t sim_time = 0;
//========================== Functions ===========================
// 运行一个周期
void exec_once(){
    dut -> clk ^= 1;
    dut -> eval();
    m_trace -> dump(sim_time++);
    dut -> clk ^= 1;
    dut -> eval();
    m_trace -> dump(sim_time++);
}

// 复位
void conv_rst(){
    dut -> clk = 0;
    dut -> rst_n = 0;
    dut -> eval();
    m_trace -> dump(sim_time++);
    dut -> clk = 1;
    dut -> rst_n = 0;
    dut -> eval();
    m_trace -> dump(sim_time++);
    dut -> clk = 0;
    dut -> rst_n = 1;
    dut -> eval();
    m_trace -> dump(sim_time++);
}

//========================== MAINLOOP ============================
int main(int argc, char** argv, char** env){
    // Prepare environment
    contextp = new VerilatedContext;
    contextp -> commandArgs(argc, argv);
    dut = new Vconv1(contextp);

    Verilated::traceEverOn(true);
    m_trace = new VerilatedVcdC;
    dut -> trace(m_trace,0);
    m_trace -> open("waveform.vcd");
    
    conv_rst();

    while (sim_time < MAX_TIME)
    {
        exec_once();
    }

    m_trace->close();

}
