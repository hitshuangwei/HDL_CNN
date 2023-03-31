import numpy as np
from scipy.signal import convolve2d
# 创建第一个矩阵
matrix1 = np.zeros((28, 28), dtype=int)
for i in range(28):
    matrix1[i] = np.arange(28)

# 创建第二个矩阵
kernel = np.zeros((5, 5), dtype=int)
for i in range(5):
    kernel[i] = np.arange(1, 6)

# 输出两个矩阵的形状
print("kernel:\n", kernel[0:5, 0:5])
print("imgIn:\n", matrix1[0:28, 0:28])

output = convolve2d(matrix1, kernel, mode='valid')

print("output shape:", output.shape)
print("output[0:24, 0:24]:\n", output[0:24, 0:24])

