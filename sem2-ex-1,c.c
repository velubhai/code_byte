#include <stdio.h>

int main()
{    
    int array[100], maximum,  n, i;
    
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);
    
    printf("Enter %d integers\n", n);
    
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    
    maximum = array[0];
    
   for (i = 1; i < n; i++)
   {
      if (array[i] > maximum)
      {
               maximum  = array[i];
               
       }
   }
    
    printf("Maximum element value is %d.\n", maximum);
    return 0;    
}
