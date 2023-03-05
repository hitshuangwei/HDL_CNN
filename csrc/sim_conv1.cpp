#include <stdlib.h>
#include <vector>
#include <cstdint>
#include <assert.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vconv1.h"

using namespace std;

#define MAX_TIME 1000


// ========================= Environment =========================
    VerilatedContext *contextp;
    Vconv1 *dut;

//========================== GTKWAVE =============================
    VerilatedVcdC *m_trace;		// trace
    vluint64_t sim_time = 0;
//========================== Functions ===========================
//加载图片
const int IMG_SIZE = 28 * 28;

void load_img(string filePath, vector<uint8_t> imgIn) {
    ifstream inputFile(filePath);
    if (inputFile.is_open()) {  
        string line;
        while (getline(inputFile, line)) {
            istringstream iss(line);
            uint8_t value;
            iss >> value;
            imgIn.push_back(value);
        }
        inputFile.close();
    } else {
        cout << "\033[31m" << "Unable to open file." << "\033[0m" << endl;
    }
}
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
    dut -> cnn_data_in_valid = 1;
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

    //加载图片
    string filePath = "/home/ws/CNN_Verilog/csrc/pixel_values.txt";
    vector<uint8_t> imgIn;  // 28x28大小的图像向量

    load_img(filePath, imgIn);
    for(int i = 0; i < IMG_SIZE; i++){
        cout << "\033[31m" << imgIn[i] << "\033[0m" << endl;
    }

    //电路复位
    conv_rst();
    
    //主循环
    int i=0;
    while (sim_time < MAX_TIME)
    {   
        //将图像数据加载到电路输入端
        if(i < 28*28){
            dut -> cnn_data_in = imgIn[i];
            dut -> eval();
            //m_trace -> dump(sim_time++);
            exec_once();
            i++;
        }
        else{
            m_trace -> close();
            delete dut;
            exit(EXIT_SUCCESS);
        }
    }

    m_trace->close();

}
