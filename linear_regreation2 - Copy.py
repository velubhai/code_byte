import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from sklearn.linear_model import LinearRegression

 
lifesat = pd.read_csv("C:/Users/USER/Desktop/idel_program/data.csv")
 
x= [1,2,3,4,5,6]
x = np.array([1, 2, 3, 4, 5, 6]).reshape(-1, 1)
y =[1,1.8,3,4.2,5.1,5.9]
 
#plt.axis([23500,62500,4,9])
plt.show()
model = LinearRegression()
model.fit(x,y)

x_new = np.array([[37655.2]]).reshape(-1, 1)
 
print(model.predict(x_new))
                      
