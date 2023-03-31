# 比较两个输出文件
import filecmp

f1 = "/home/ws/CNN_Verilog/conv_para/matrix_out_py.txt"
f2 = "/home/ws/CNN_Verilog/conv_para/matrix_out_c.txt"

# shallow comparison
result = filecmp.cmp(f1, f2)
if(result):
    print("\033[0;32;40m", "PASS", "\033[0m")
else:
    print("\033[0;31;40m", "FAIL", "\033[0m")
# deep comparison
# result = filecmp.cmp(f1, f2, shallow=False)
# print(result)