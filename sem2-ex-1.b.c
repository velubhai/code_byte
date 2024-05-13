#include<stdio.h>
#include<conio.h>

int main()
{
	 
	int n,i,j;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n],rev[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
 	
 	j=0;
	for(i=n-1;i>=0;i--)
	{
		rev[j]=arr[i];
		j++;
	}
	
	for(i=0;i<n;i++)
	{
	
	printf("%d",rev[i]);
	}
	return 0;
}
