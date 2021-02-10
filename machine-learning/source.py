import cv2
import numpy as np
from sklearn import metrics
from sklearn import datasets
import matplotlib.pyplot as plt
from tensorflow.examples.tutorials.mnist import input_data

mnist = input_data.read_data_sets("mnist_data/", one_hot=False)

knn = cv2.ml.KNearest_create()

knn.train(mnist.train.images, cv2.ml.ROW_SAMPLE, mnist.train.labels.astype(np.int32))

_, result, _, _ = knn.findNearest(mnist.test.images, 5) #k=5

metrics.accuracy_score(mnist.test.labels, result)
#out[]:accuracy_one

train_2 = datasets.fetch_mldata('MNIST original')

train_2.data = train_2.data.astype(np.float32)
train_2.data /= 255 #将不同种类的数据集数据类型相同化
train_2.target = train_2.target.astype(np.int32)

knn.train(train_2.data, cv2.ml.ROW_SAMPLE, train_2.target)

_, result, _, _ = knn.findNearest(mnist.test.images, 5) #k=5

metrics.accuracy_score(mnist.test.labels, result)
#out[]:accuracy_two