def fun(x,l):
    return x*x - l

    
def dfun(x):
    return 2*x



x=1
l =int(input("Enter the find square number:"))
for i in range(10):
    x_old = x
    x = x - fun(x,l)/dfun(x)
    if abs(x_old - x) < 1e-3:
        break
print('square root is :',x) 

print('square root is :',int(x))   
