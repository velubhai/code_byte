// C program to remove duplicates
#include <stdio.h>

// Function to remove duplicate elements This function
// returns new size of modified array.
int removeDuplicates(int arr[], int n)
{
	// Return, if array is empty or 
	// contains a single element
	int i;
	if (n == 0 || n == 1)
		return n;

	int temp[n];

	// Start traversing elements
	int j = 0;

	// If current element is not equal to next element
	// then store that current element
	for (i = 0; i < n - 1; i++)
		if (arr[i] != arr[i + 1])
			temp[j++] = arr[i];

	// Store the last element as whether it is unique or
	// repeated, it hasn't stored previously
	temp[j++] = arr[n - 1];

	// Modify original array
	for (i = 0; i < j; i++)
		arr[i] = temp[i];

	return j;
}

// Driver code
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
	 
	// removeDuplicates() returns new size of array.
	n = removeDuplicates(arr, n);


	printf("removale an array : ");
	// Print updated array
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)

