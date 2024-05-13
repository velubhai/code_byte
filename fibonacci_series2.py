N =int(input())

x0 =1
x1 =1

x = []

for i in range(N+1):

    if i <=1:
        x.append(1)
    else:
        x.append(x[i-1]+x[i-2])

print(x)


