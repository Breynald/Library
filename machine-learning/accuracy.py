import numpy as np

#metrics module
    from sklearn import metrics
    metrics.accuracy_score(y_true, y_pred)

#独热编码解码
    #argmax 就是返回该向量中最大数所在的位置，axis=1表示按行进行操作
    class = np.argmax(class,axis=1)

#numpy
    np.sum(y_true == y_pred) / len(y_true)

#均方误差
    np.mean((y_true - y_pred) ** 2)
    #or
    metrics.mean_squared_error(y_true, y_pred)


###
plt.style.use('ggplot')
%matplotlib

plt.plot(x, y_true, linewidth=4, label='model')
plt.plot(x, y_pred, 'o', lable='data')
plt.xlabel('x')
plt.ylabel('y')
plt.legend(loc='lower left')

#
import matplotlib.pyplot as plt
x = np.linspace(0, 10, 100)
y_true = np.sin(x)
y_pred = np.sin(x) + np.random.rand(x.size) - 0.5


np.random.seed(42)
y_true = np.random.randint(0, 2, size=5)
y_pred = np.ones(5, dtype=np.int32)
