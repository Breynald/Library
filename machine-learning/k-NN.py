import numpy as np
import cv2
import matplotlib.pyplot as plt
#%matplotlib
plt.style.use('ggplot')

np.random.seed(42)
single_data_point = np.random.randint(0, 100, 2)
single_label = np.random.randint(0, 2)

#create data
def generate_data(num_samples, num_features=2):
    data_size = (num_samples, num_features)
    data = np.random.randint(0, 100, data_size)
    labels_size = (num_samples, 1)
    labels = np.random.randint(0, 2, labels_size)
    return data.astype(np.float32), labels

train_data, labels = generate_data(20)

#show data
def plot_data(all_blue, all_red):
    plt.scatter(all_blue[:, 0], all_blue[:, 1], c='b', marker='s', s=180)
    plt.scatter(all_red[:, 0], all_red[:, 1], c='r', marker='^', s=180)
    plt.xlabel('x')
    plt.ylabel('y')

blue = train_data[labels.ravel()==0]
red = train_data[labels.ravel()==1]
plot_data(blue, red)

#train
knn = cv2.ml.KNearest_create()
knn.train(train_data, cv2.ml.ROW_SAMPLE, labels)

newcomer, _ = generate_data(1)
plot_data(blue, red)
plt.plot(newcomer[0, 0], newcomer[0, 1], 'go', markersize=14)
#predict
ret, result, neighbor, dist = knn.findNearest(newcomer, 1) #k = 1
print(result)
print(neighbor)
print(dist)
