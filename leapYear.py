x=int(input())
if(x%4==0 and x%400==0) or (x%4==0 and x%100!=0):
    print("it is a leap year:")
else:
    print("it is not a leap year")
