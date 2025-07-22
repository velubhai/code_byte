#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX],front=-1,rear=-1,i;

void enqueue(int value){
	if((front == 0 && rear == MAX-1)||(rear == (front-1)%(MAX-1))){
		printf("queue overflow!cannot enqueue%\n",value);
	}
	else{
		if(front==-1){
			front=rear=0;
		}
		else if(rear == MAX-1 && front==0){
			rear=0;
		}
		else{
			rear++;
		}
		queue[rear]=value;
		printf("%d enqueue to circular queue.\n ",value);
	}
}

int dequeue(){
	if(front==-1){
		printf("queue underflow! no elements to dequeue.\n");
		return-1;
	}
	int dequeue_value = queue[front];
	if(front==rear){
		front=rear=-1;
	}
	else if(front == MAX -1){
		front=0;
	}
	else{
		front++;
	}
	return dequeue_value;
}

void display(){
	if(front==-1){
		printf("queue is empty!\n");
		return;
	}
	printf("queue elements: \n");
	if(rear>=front){
		for(i=front;i<=rear;i++){
			printf("%d\n",queue[i]);
		}
	}
	else{
		for(i=front;i<MAX;i++){
			printf("%d\n",queue[i]);
		}
		for(i=0;i<=rear;i++){
			printf("%d\n",queue[i]);
		}
	}
}

int main(){
	int choice,value;
	while(1){
		printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\nEnter your choice:");
		scanf("%d",&choice);
		
		switch (choice){
			case 1:
				printf("Enter the value to enqueue:");
				scanf("%d",&value);
				enqueue(value);
				break;
				
			case 2:
				value = dequeue();
				if(value!=-1){
					printf("%d dequeued from circular queue.\n",value);
				}
				break;
				
			case 3:
				display();
				break;
				
			case 4:
				exit(0);
				
			defalut:
				printf("invaild choice ! please try again.\n");
		}
	}
	return 0;
}
