#include <stdio.h>
#include <stdlib.h>
#define MAX 5 
	typedef struct {
		 int data;
		 int priority;
	} 
	PriorityQueue;
	PriorityQueue queue[MAX];
	int size = 0,i;
	
	void enqueue(int value, int priority) {
	 if (size == MAX) {
	 	printf("Priority Queue Overflow! Cannot enqueue %d\n", value);
	 } 
	 else {
		 int i;
		 for (i = size - 1; (i >= 0 && queue[i].priority > priority); i--) {
		 queue[i + 1] = queue[i]; 
	 }
		 queue[i + 1].data = value;
		 queue[i + 1].priority = priority;
		 size++;
		 printf("%d with priority %d enqueued to priority queue.\n",value,priority);
	 }
	}
	
	int dequeue() {
		
	 if (size == 0) {
		 printf("Priority Queue Underflow! No elements to dequeue.\n");
		 return -1;
	 } 
	 else {
		 int dequeued_value = queue[0].data;
		 for ( i = 0; i < size - 1; i++) {
		 queue[i] = queue[i + 1]; 
	 }
	 size--;
	 return dequeued_value;
	 }
	}
	
	void display() {
	 if (size == 0) {
	 printf("Priority Queue is empty!\n");
	 } 
	 else {
		 printf("Priority Queue elements:\n");
		 for (i = 0; i < size; i++) {
		 printf("Value: %d, Priority: %d\n", queue[i].data,queue[i].priority);
	 }
	 }
	}
	
	
	int main() {
	 int choice, value, priority;
	 
	 while (1) {
	 	
		 printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
		 scanf("%d", &choice);
		 
	 switch (choice) {
	 case 1:
		 printf("Enter value to enqueue: ");
		 scanf("%d", &value);
		 printf("Enter priority (lower number means higher priority): ");
		 scanf("%d", &priority);
		 enqueue(value, priority);
		 break;
		 
	 case 2:
		 value = dequeue();
		 if (value != -1) {
		 printf("%d dequeued from priority queue.\n", value);
		 }
		 break;
		 
	 case 3:
		 display();
	 	break;
	 	
	 	
	 case 4:
	 	exit(0);
	 
	 default:
		 printf("Invalid choice! Please try again.\n");
	 }
	 }
	 return 0;
}
