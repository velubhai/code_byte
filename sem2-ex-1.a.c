#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n ;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	
	int array[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		
	}
	
	int res = 0;
	for(i=0;i<n;i++){
		res+=array[i];
	}
	printf("%d",res);
	
	return 0;
}
