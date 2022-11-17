import numpy as np
import matplotlib.pyplot as plt
data = np.loadtxt('data.txt')

plt.plot(data)
plt.xlabel('iteration steps')
plt.ylabel('norm')
plt.show()
