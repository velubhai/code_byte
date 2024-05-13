#include <stdio.h>
#include <conio.h>

int main()

{
	
	
	
	int n,f1,f0,i,f;
	printf("enter the value:\n");
	scanf("%d",&n);
	
	
	f0=0;
	f1=1;
	
	printf("fibonacci squence for  first term %d:\n",n);
	i=0;
	while(i<n)
	{
		printf("%d/",f0);
		f=f0+f1;
		f0=f1;
		f1=f;
		i=i+1;
			
	}
	
	
}
