#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,fact,j;
	
	printf("enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=0;
		for(j=1;j<=n;j++)
		{
			if(i%j==0)
			fact++;
			
		}
		if(fact==2)
			printf("\n%d",i);
	}
	return 0;
}
