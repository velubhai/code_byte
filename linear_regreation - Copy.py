import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
 


##x = [1, 2, 3, 4, 5,6]
##y = [2000,3000,90000,100000,50000,20000]

 

df1 = pd.read_csv('data.csv')

 
x = df1['Height']

y = df1['Weight']
m = len(x)

theta0 = 0.0 
theta = np.zeros(m)

alpha = 0.1   # learning rate

for i in range(10000):
    h = theta0 + theta * x
    
    theta0_old = theta0
    theta_old = theta
    
    sum1 = 0.0
    sum2 =np.zeros(m)
    
    for j in range(m):       
        sum1 = sum1 + (h[j] - y[j])
        sum2 = sum2 + (h[j] - y[j]) * x[j]
        
    theta0 = theta0 - alpha * sum1/m 
    theta = theta - alpha * (1/m) * sum2 
    
    if abs(theta0 - theta0_old) < 1e-4 and sum(abs(theta - theta_old))/m < 1e-4:
        print("Converge at N = ", i)
        break #sys.exit()

yp = theta0 + theta * x  # fitted values

fig = plt.figure(figsize = (4,3))

plt.plot(x,y,"ob")
plt.plot(x,yp,"-r")
plt.xlabel("X")
plt.ylabel("Y or Yp")
plt.grid()
plt.legend(["Points","Fitted line"])
plt.show()
