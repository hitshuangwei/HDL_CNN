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

#define MAX_TIME 2000


// ========================= Environment =========================
    VerilatedContext *contextp;
    Vconv1 *dut;

//========================== GTKWAVE =============================
    VerilatedVcdC *m_trace;		// trace
    vluint64_t sim_time = 0;
//========================== Functions ===========================
//加载图片
const int IMG_SIZE = 784;
vector<double> load_img(const string& Filepath){
    
    double x;
    ifstream inFile;
    vector<double> im;
    
    inFile.open(Filepath);
    if (!inFile) {
        cout << "\033[1;31m" << "Unable to open file" << "\033[0m" << endl;
        exit(1); // terminate with error
    }
    
    while (inFile >> x) {
        //cout << x << endl;
        im.push_back(x);
    }
    
    inFile.close();

    return im;
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
    vector<double> imgIn;  // 28x28大小的图像向量

    imgIn=load_img("/home/ws/CNN_Verilog/csrc/matrix.txt");
    for(int j = 0; j < IMG_SIZE; j++){
        cout << imgIn[j] <<  endl;
    }

    //电路复位
    conv_rst();
    
    //主循环
    int i=0;
    while (sim_time < MAX_TIME)
    {   
        //将图像数据加载到电路输入端
        if(i <= IMG_SIZE){
            dut -> cnn_data_in = imgIn[i];
            dut -> eval();
            //m_trace -> dump(sim_time++);
            exec_once();
            i++;
        }
        else{
            dut -> cnn_data_in = 0;
            dut -> eval();
            //m_trace -> dump(sim_time++);
            exec_once();
            i++;
        }
    }

    m_trace->close();

}
