#include <stdio.h>
#include <stdlib.h>
	struct Node {
	    int data;
	    struct Node* next;
	    struct Node* prev;
	};
	
	struct Node* createNode(int value) {
	    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	    newNode->data = value;
	    newNode->next = NULL;
	    newNode->prev = NULL;
	    return newNode;
	}
	
	void insertEnd(struct Node** head, int value) {
	    struct Node* newNode = createNode(value);
	    if (*head == NULL) {
	        *head = newNode;
	    } else {
	        struct Node* temp = *head;
	        while (temp->next != NULL) {
	            temp = temp->next;
	        }
	        temp->next = newNode;
	        newNode->prev = temp;
	    }
	    printf("%d inserted at the end of the doubly linked list.\n", value);
	}
	
 
	void deleteNode(struct Node** head, int value) {
	    if (*head == NULL) {
	        printf("List is empty! Cannot delete %d.\n", value);
	        return;
	    }
	
	    struct Node* temp = *head;
	
	    
	    if (temp != NULL && temp->data == value) {
	        *head = temp->next;
	        if (*head != NULL) {
	            (*head)->prev = NULL;
	        }
	        free(temp);
	        printf("%d deleted from the doubly linked list.\n", value);
	        return;
	    }
	
	    
	    while (temp != NULL && temp->data != value) {
	        temp = temp->next;
	    }
	
	     
	    if (temp == NULL) {
	        printf("%d not found in the doubly linked list.\n", value);
	        return;
	    }
	
	     
	    if (temp->next != NULL) {
	        temp->next->prev = temp->prev;
	    }
	    if (temp->prev != NULL) {
	        temp->prev->next = temp->next;
	    }
	    free(temp);
	    printf("%d deleted from the doubly linked list.\n", value);
	}
	
	void displayList(struct Node* head) {
	    if (head == NULL) {
	        printf("Doubly linked list is empty!\n");
	    } else {
	        struct Node* temp = head;
	        printf("Doubly linked list elements (Forward): ");
	        while (temp != NULL) {
	            printf("%d -> ", temp->data);
	            temp = temp->next;
	        }
	        printf("NULL\n");
	    }
	}
	
	void displayListReverse(struct Node* head) {
	    if (head == NULL) {
	        printf("Doubly linked list is empty!\n");
	    } else {
	        struct Node* temp = head;
	        // Move to the last node
	        while (temp->next != NULL) {
	            temp = temp->next;
	        }
	
	        printf("Doubly linked list elements (Reverse): ");
	        while (temp != NULL) {
	            printf("%d -> ", temp->data);
	            temp = temp->prev;
	        }
	        printf("NULL\n");
	    }
	}
	
	void main() {
	    struct Node* head = NULL;  
	    int choice, value;
	
	    while (1) {
	        printf("\n1. Insert at End\n2. Delete by Value\n3. Display List (Forward)\n4. Display List (Reverse)\n5. Exit\nEnter your choice: ");
	        scanf("%d", &choice);
	
	        switch (choice) {
	            case 1:
	                printf("Enter value to insert: ");
	                scanf("%d", &value);
	                insertEnd(&head, value);
	                break;
	            case 2:
	                printf("Enter value to delete: ");
	                scanf("%d", &value);
	                deleteNode(&head, value);
	                break;
	            case 3:
	                displayList(head);
	                break;
	            case 4:
	                displayListReverse(head);
	                break;
	            case 5:
	                exit(0);
	            default:
	                printf("Invalid choice! Please try again.\n");
	        }
	    }
	
	    return;
}


