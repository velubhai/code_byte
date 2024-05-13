//print second minimum number in the array
#include<stdio.h>
int main()
{ 
    int temp;
    int n,i,j,k;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the print elememt:");
	scanf("%d",&k);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}  
    
     printf("Before Sorting ");
    
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    
    for(i=0; i<6; i++)
    {
        for(j=i+1; j<6; j++) 
		{ if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAfter Sorting ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    	 printf("\n%dminimum element ",k);
        printf("\n%d",a[k-1]);
    
    return 0;
}
