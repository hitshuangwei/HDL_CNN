
#include <stdlib.h>
#include <vector>
#include <cstdint>
#include <assert.h>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

const int IMG_SIZE=28*28;

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

int main(){
    
    //加载图片
    string filePath = "/home/ws/CNN_Verilog/csrc/pixel_values.txt";
    vector<uint8_t> imgIn;  // 28x28大小的图像向量

    load_img(filePath, imgIn);
    for(int i = 0; i < IMG_SIZE; i++){
        cout << "\033[31m" << imgIn[i] << "\033[0m" << endl;
    }

}
