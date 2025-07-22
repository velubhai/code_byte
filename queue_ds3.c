#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX],front = -1,rear =-1,i;

void enqueue(int value){
	if(rear==MAX-1){
		printf("queue over flow! cannot enqueu %d\n",value);
	}
	else{
		if(front == -1){
			front =0;
		}
		rear++;
		queue[rear]=value;
		printf("%d equeued to queue.\n",value);
	}
}

int dequeue(){
	if(front==-1||front>rear){
		printf("queue underflow!No element to dequeue.\n");
	}
	else{
		int dequeued_value=queue[front];
		front++;
		if(front>rear){
			front = rear=-1;
		}
		return dequeued_value;
	}
}
void display(){
	if(front == -1){
		printf("queue is empty!\n");
	}
	else{
		printf("queue elements:\n");
		for (i=front;i<=rear;i++){
			printf("%d\n",queue[i]);
		}
	}
}
 int main(){
 	int choice,value;
 	while(1){
 		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice:");
 		scanf("%d",&choice);
 		
 		switch(choice){
 			case 1:
 				printf("Enter a value to enqueue:");
 				scanf("%d",&value);
 				enqueue(value);
 				break;
			 case 2:
			 	value = dequeue();
				 if(value!=-1){
				 	printf("%ddequeue form queue\n",value);
			 } 
			 break;
			case 3:
				display();
				break;
			
			case 4:
				exit(0);
				break;
			default:
				printf("Invail choice!please try again.\n");
		 }
		 
	 }
	 return 0;
 }
