#include<stdio.h>
#include<conio.h>
int fact(int);

int main()
{
	int n,i,f ;
	 
	printf("ENTER THE VALUE:");
	scanf("%d",&n);
	
	f=fact(n);
	
	printf("THE FACTORIAL OF A GIVEN NO IS..%d",f);
}

int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	f=f*i;
	return(f);
}
