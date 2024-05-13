#include <stdio.h> 
int main()
{
 					/*
					 #printf("xxx________xxx____________length_of_the_array_______xxx____________xxxx");
 		*/
 			
 	int res;
	int arr1[] = { 1, 2, 3, 4, 5 };
	
	res = sizeof(arr1)/sizeof(arr1[0]);
	printf("number of elements present in array : %d\n",res);
	 																		/*
		
																			written_by:
																				"VELMURUGAN.D"
																			*/
	
	return 0;
}
