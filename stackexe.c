#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack[MAX],top = -1,i=0;

void push(int value){
	if(top == MAX -1){
		printf("over flow\n");
	}
	else{
		top++;
		stack[top] == value;
		printf("%d pushed to stack.\n",value);
		printf("\n %d\n", stack[1]);
	
	}
	
}

int pop(){
	if(top == -1){
		printf(" under flow\n");
		return -1;
	}
	else{
		int poped_value = stack[top];
		top--;
		return poped_value;
		
	}
}


void display(){
if(top==-1){
printf("stack is empty!\n");
}
else{
printf("stack elements :\n");
for(i=top;i>=0;i--){
printf("%d\n",stack[i]);
}
}
}

//void display(){
//	if(top ==-1){
//		printf("empty\n");
//	}
//	else{
//		printf("\n %d\n", stack[0]);
//		printf("elments:\n");
//				for(i=top;i>=0;i--)
//					printf("%d\n",stack[i]);
//	}
//}

int main(){
	int value,choice;
	
	while(1){
		printf("1.push\n2.pop\n3.display\n4.Exit\nEnter your choice:");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:
				printf("enter the push value:");
				scanf("%d",&value);
				printf("%d",value);
				push(value);
				printf("%d\n",value);
				break;
			
			case 2:
				value = pop();
				if(top != -1)
				break;
				
			case 3:
				display();
				break;
				
			case 4:
				exit(0);
				break;
				
			default:
				printf("invail choice");
		}
		
	}
	return 0;
}
