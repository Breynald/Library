import cv2
import numpy as np
import matplotlib.pyplot as plt
from sklearn import datasets

#sklearn
    mnist = datasets.fetch_mldata('MNIST original')

#tensorflow
    from tensorflow.examples.tutorials.mnist import input_data
    mnist = input_data.read_data_sets("mnist_data/", one_hot=True)

    # 训练集
    train_images = mnist.train.images
    train_labels = mnist.train.labels

    # 验证集
    validation_images = mnist.validation.images
    validation_labels = mnist.validation.labels

    # 测试集
    test_images = mnist.test.images
    test_labels = mnist.test.labels




#show image
    #reshape 将一行数据转为28*28的像素矩阵
    plt.imshow(mnist.data[0].reshape((28, 28)), cmap='gray')

#show ten image
    for i in range(10):
        plt.subplot(2, 5, i+1)
        plt.imshow(mnist.data[i].reshape((28, 28)), cmap='gray')
