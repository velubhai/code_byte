#include<stdio.h>
int main()
{
	int a[10],n,key,i,low,high,mid,c=0;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	
	printf("enter the %d sorted number: ",i);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter the search element:");
	scanf("%d",&key);
	
	int fib2=0;
	int fib1=1;
	int fib=fib2+fib1;
	
	while(fib<n){
		
		fib2= fib1;
		fib1 = fib;
		fib = fib2+fib1;
	}
	
	int offset = -1;
	while(fib>1){
		c++;
		int i=(offset+fib2<n)?(offset+fib2):(n-1);
		
		if(a[i]<key){
		fib = fib1;
		fib1 = fib2;
		fib2 = fib-fib1;
		offset = i;	
		}
		
		else if(a[i]==key)
		{
			
			printf("key found at index %d\n",i);
			printf("Number of key comparisons: %d\n", c);
			 return;
		} 
			 
		else {
			 fib = fib2;
			 fib1 = fib1 - fib2;
			 fib2 = fib - fib1;
			 }
		}
			
			if(fib1 && a[offset + 1] == key){
				c++;
				printf("key is found at index:\n",offset + 1);
				printf("number of key comparision %d",c);
				return ;
			}
			 
	printf("Key not found.\n");
	printf("Number of key comparisons: %d\n", c);
			}
		
		
		
	
