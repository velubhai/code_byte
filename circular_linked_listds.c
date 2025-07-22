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
        newNode->next = *head;  // Point to itself to make it circular
    } else {
        struct Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;  // Make it circular
    }
    printf("%d inserted at the end of the circular linked list.\n", value);
}

void deleteNode(struct Node** head, int value) {
    if (*head == NULL) {
        printf("List is empty! Cannot delete %d.\n", value);
        return;
    }

    struct Node *temp = *head, *prev = NULL;

    // If the node to be deleted is the head node
    if (temp->data == value) {
        if (temp->next == *head) {
            free(temp);  // Only one node in the list
            *head = NULL;
        } else {
            while (temp->next != *head) {
                temp = temp->next;
            }
            struct Node* toDelete = *head;
            temp->next = (*head)->next;
            *head = (*head)->next;
            free(toDelete);
        }
        printf("%d deleted from the circular linked list.\n", value);
        return;
    }

    // For other nodes
    temp = *head;
    do {
        prev = temp;
        temp = temp->next;
    } while (temp != *head && temp->data != value);

    if (temp == *head) {
        printf("%d not found in the circular linked list.\n", value);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("%d deleted from the circular linked list.\n", value);
}

void displayList(struct Node* head) {
    if (head == NULL) {
        printf("Circular linked list is empty!\n");
    } else {
        struct Node* temp = head;
        printf("Circular linked list elements: ");
        do {
            printf("%d -> ", temp->data);
            temp = temp->next;
        } while (temp != head);
        printf("HEAD\n");
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

