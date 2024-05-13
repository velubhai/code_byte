#include <stdio.h>
#include <conio.h>

int main()
{
	
	int r,n,sum=0;
	
	printf("Enter the value: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	
	printf("sum of individual values = %d",sum);
	
	return 0;
	
}
