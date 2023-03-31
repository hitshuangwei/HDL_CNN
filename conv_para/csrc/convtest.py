import numpy as np
from scipy.signal import convolve2d
img_width = 25
kernel_width = 5
# 创建输入矩阵并输出为txt
matrix_in = np.zeros((img_width, img_width), dtype=int)
for i in range(img_width):
    matrix_in[i] = np.arange(img_width)
with open('matrix_in.txt', 'w') as f:
    for i in range(img_width):
        for j in range(img_width):
            f.write(str(matrix_in[i][j]) + '\n')
# 创建卷积核并输出为txt
kernel = np.zeros((kernel_width, kernel_width), dtype=int)
for i in range(kernel_width):
    kernel[i] = np.arange(1, kernel_width+1)
with open('kernel.txt', 'w') as f:
    for i in range(kernel_width):
        for j in range(kernel_width):
            f.write(str(kernel[i][j]) + '\n')
# 输出两个矩阵的形状
print("kernel:\n", kernel[0:kernel_width, 0:kernel_width])
print("imgIn:\n", matrix_in[0:img_width, 0:img_width])
# 卷积并将结果输出为txt
matrix_out = convolve2d(matrix_in, kernel, mode='valid')
out_width, _ = matrix_out.shape
with open('matrix_out_py.txt', 'w') as f:
    for i in range(out_width):
        for j in range(out_width):
            f.write(str(matrix_out[i][j]) + '\n')
print("output shape:", matrix_out.shape)

