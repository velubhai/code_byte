#include<stdio.h>
#include<conio.h>

int main()
{
	int s,a,b,c,aver;
	printf("Enter three values:");
	scanf("%d %d %d",&a,&b,&c);
	
	s=a+b+c;
	aver=s/3;
	
	printf("sum= %d,\naverage=%d",s,aver);
	
	return 0;
	
}
