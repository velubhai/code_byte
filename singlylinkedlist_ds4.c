#include <stdio.h>
#include <stdlib.h>
	struct Node {
	    int data;
	    struct Node* next;
	};
	
	struct Node* createNode(int value) {
	    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	    newNode->data = value;
	    newNode->next = NULL;
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
	    }
	    printf("%d inserted at the end of the linked list.\n", value);
	}
	
	void deleteNode(struct Node** head, int value) {
	    if (*head == NULL) {
	        printf("List is empty! Cannot delete %d.\n", value);
	        return;
	    }
	
	    struct Node* temp = *head;
	    struct Node* prev = NULL;
	
	     
	    if (temp != NULL && temp->data == value) {
	        *head = temp->next;   
	        free(temp);
	        printf("%d deleted from the linked list.\n", value);
	        return;
	    }
	
	    
	    while (temp != NULL && temp->data != value) {
	        prev = temp;
	        temp = temp->next;
	    }
	
	     
	    if (temp == NULL) {
	        printf("%d not found in the linked list.\n", value);
	        return;
	    }
	
	     
	    prev->next = temp->next;
	    free(temp);
	    printf("%d deleted from the linked list.\n", value);
	}
	
	void displayList(struct Node* head) {
	    if (head == NULL) {
	        printf("Linked list is empty!\n");
	    } else {
	        struct Node* temp = head;
	        printf("Linked list elements: ");
	        while (temp != NULL) {
	            printf("%d -> ", temp->data);
	            temp = temp->next;
	        }
	        printf("NULL\n");
	    }
	}
	
	void main() {
	    struct Node* head = NULL;  
	    int choice, value;
	
	    while (1) {
	        printf("\n1. Insert at End\n2. Delete by Value\n3. Display List\n4. Exit\nEnter your choice: ");
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
	                exit(0);
	            default:
	                printf("Invalid choice! Please try again.\n");
	        }
	    }
	
	    return;
	}


