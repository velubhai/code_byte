#include <stdio.h>
void main()
{ 
	int a[10], n, key, i, c=0;
	 printf("Enter the size of an array: ");
	 scanf("%d",&n);
	 printf("Enter any %d number: \n",n);
	 for(i=0;i<n;i++) 
	 scanf("%d",&a[i]);
	 printf("Enter the element to be searched: \n"); 
	 scanf("%d", &key); 
	 for (i = 0; i < n; i++) {
		 c++; 
	 	if (a[i] == key) {
	 		printf("Key found at index %d\n", i);
			 printf("Number of key comparisons: %d\n", c);
	 		return; 
	 }
	 } 
 printf("Key not found.\n");
 printf("Number of key comparisons: %d\n", c);

}
