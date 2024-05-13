/*
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n ;
	printf("Enter the size of the array:");
	 
	
 	FILE * fp;

    fp = fopen ("buf.txt", "w+");
   
    fscanf(fp, "%d",&n);
    
     printf("Read Integer |%d|\n",n );
   fclose(fp);
   
   return(0);
}
*/

#include <stdio.h>
#include <stdlib.h>


int main () {
    
   int n;
   char buf[255];
   FILE * fp;

   fp = fopen (" file.txt", "wt&r");
   fputs("We", fp);
   
   rewind(fp);
   fscanf(fp, " %s",   &n);
   
    
   printf("Read Integer |%s|\n", buf);

   fclose(fp);
   
   return(0);
}


/*#include <stdio.h>  
main(){  
   FILE *fp;  
   char buff[255];  
   fp = fopen("file.txt", "r");  
   fputs("We", fp);
   while(fscanf(fp, "%s", buff)!=EOF){  
   printf("%s ", buff );  
   }  
   fclose(fp);  
}  
*/























