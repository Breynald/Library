import numpy as np
from sklearn import datasets
import matplotlib.pyplot as plt
#plt.show()
%matplotlib

#显示数据信息
digits = datasets.load_digits()
print(digits.data.shape)
print(digits.images.shape)

#提取某个图像
img = digits.images[0, :, :]
plt.imshow(img, cmap='gary') #camp指定颜色映射 默认颜色映射为jet

#迭代输出前十张图
for image_index in range(10):
    subplot_index = image_index + 1
    plt.subplot(2, 5, subplot_index)
    plt.imshow(digits.images[image_index, :, :], cmap='gray')

