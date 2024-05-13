import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

##x= np.arange(0,20).reshape(5,4)


##print(x)


##df=pd.DataFrame(data=np.arange(0,20).reshape(5,4),index=["Row1",
##                                                        "Row2","Row3",
##                                                        "Row4","Row5"],columns=["Column1",
##                                                                                "Column2",
##                                                                                "Column3",
##                                                                                "Column4"])
#print(df['Column1'])
##print(df.iloc[2:4,0:2])
##
##
##x1= np.arange(0,20).reshape(2,10)
##print(x1)



 


 
##df1 = pd.read_csv('data.csv')

##print(df1)
##print(df1['Height'])
##print("-----------")
##print(df1['Weight'])
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

    
