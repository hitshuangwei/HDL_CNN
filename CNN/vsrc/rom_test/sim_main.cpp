#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "obj_dir/Vweights_rom.h"

#define MAX_TIME 200
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env){
    Vweights_rom *dut = new Vweights_rom;
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace,5);
    m_trace->open("waveform.vcd");
    while (sim_time < MAX_TIME)
    {
        dut->clk^=1;
        dut->eval();
        dut->rom_r_en = 1;
        dut->rom_raddr = 0;
        m_trace->dump(sim_time);
        sim_time++;
    }
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
