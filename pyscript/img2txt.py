from PIL import Image

# 读取图像
img = Image.open('0_0.bmp').convert('L')

# 创建文本文件
with open('pixel_values.txt', 'w') as f:
    # 遍历图像像素
    for row in range(img.height):
        for col in range(img.width):
            # 获取像素值并写入文件
            pixel_value = img.getpixel((col, row))
            f.write(str(pixel_value) + '\n')
