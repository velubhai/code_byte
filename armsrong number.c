#include<stdio.h>
#include<conio.h>
int main()
{
	int  vel=0,mul,a,b;
		printf("enter the value :");
		scanf("%d",&a);
		b=a;
		while(b!=0)
		{
			
			mul=b%10;
			vel+=mul*mul*mul;
			b/=10;
		}
	if(vel==a)
		printf("%d is an armstrong number",a);
		
	else
		printf("%d is not a armstrong number",a);
			
	return 0;	
}






