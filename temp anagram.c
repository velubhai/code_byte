 #include <stdio.h>
 int main()
{
	int n,i,j,v,counter=0,temp;
		
	scanf("%d",&n);
	char s1[n];
	char s2[n];
	
	for(i=0;i<n;i++)
    {
      scanf("%c",&s1[i]);
    }
   
   for(j=0;j<n;j++)
    {
	scanf("%c",&s2[j]);
   }	
	
   
   // lets sort both strings first -

   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (s1[i] > s1[j]) {
            temp  = s1[i];
            s1[i] = s1[j];
            s1[j] = temp;
         }
         if (s2[i] > s2[j]) {
            temp  = s2[i];
            s2[i] = s2[j];
            s2[j] = temp;
         }
      }
   }

   // Compare both strings character by character

   for(i = 0; i<n; i++) {
      if(s1[i] == s2[i]) {    
         counter+=1;
      }
   }

   if(counter==n)
		{
			printf("1");
			}	
		else
		{
			printf("0");
		}
	
   return 0;
}
