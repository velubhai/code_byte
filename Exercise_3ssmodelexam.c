#include<stdio.h>
#include<string.h>

int main(){
	int stadd,data[4],readd,i;
	char ch;
	
	printf("enter the starting address:");
	scanf("%d",&stadd);
	
for (i = 0; i < 4; i++) {
printf("Enter value for byte %d: ", i);
scanf("%d", &data[i]);
}
		
	
	do{
		printf("enter the relocating address :");
		scanf("%d",&readd);
		
		for(i=0;i<4;i++){
			printf("value %d=%d\n",readd+i,data[i]);
		}
		
		printf("do you want continue(N/Y):");
		scanf("%d",&ch);
		
	}
	while(ch=='Y'|ch=='y');
	return 0;
}
