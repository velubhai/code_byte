#include<stdio.h>
#include<conio.h>
int fact(int);

int main()
{
	int n,res ;
	 
	printf("ENTER THE VALUE:");
	scanf("%d",&n);
	res=fact(n);
	printf("THE FACTORIAL OF A GIVEN NUMBER IS..%d",res);
}

int fact(int n)
{
	int r;
	
	if(n==0)
	return(1);
	else
	{
		r=n*fact(n-1);
		return(r);
		
	}
		
		return 0;	
}
