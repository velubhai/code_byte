def table(num):
  l=[]
  for i in range(1,11):
    l.append(num*i)
  return l


table(2)
b=table(2)
print(b[::-1])
 