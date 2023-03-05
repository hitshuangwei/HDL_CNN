#include <stdlib.h>
#include <cstdint>
#include <assert.h>
#include <iostream>
#include <fstream>
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

void load_img(string filePath, uint8_t imgIn[IMG_SIZE]) {
    ifstream inputFile(filePath);

    if (inputFile.is_open()) {
        for (int i = 0; i < IMG_SIZE; i++) {
            uint8_t pixelValue;
            inputFile >> pixelValue;
            imgIn[i] = pixelValue;
        }
        inputFile.close();
    } else {
        cout << "Unable to open file." << endl;
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
    string filePath = "../image_in.txt";
    uint8_t imgIn[IMG_SIZE] = {0};  // 28x28大小的图像数组
    for(int i = 0; i < IMG_SIZE; i++){
        imgIn[i] = i;
    }
    //load_img(filePath, imgIn);

    //电路复位
    conv_rst();
    
    //主循环
    int i=0;
    while (sim_time < MAX_TIME)
    {   
        //将图像数据加载到电路输入端
        if(i < 28*28){
            dut -> cnn_data_in = imgIn[i];
            assert(imgIn[40] != 0);
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
