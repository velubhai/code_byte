#include<stdio.h>
int main()
{
	int a[10],n,key,i,low,high,mid,c=0;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	
	printf("enter the %d sorted number: ",i);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter the search element;");
	scanf("%d",&key);
	
	low = 0;
	high = n-1;
	
	while(low <= high)
	{
		c++;
		mid = (low + high)/2;
		
		if(a[mid] == key)
		{
			printf("key found at index %d\n",mid);
			printf("number of key comparision: %d\n",c);
			return 0;
		}
		
		else if(a[mid]<key)
		{
			low = mid+1;
		}
		
		else{	
			high = mid -1;
		}
	}
	
	printf("key not found \n");
	printf("Number of the key comparision : %dn",c);
	return 0;	
	 
}
