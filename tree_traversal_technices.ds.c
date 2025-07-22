#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}


void printPostOrder(struct node* node) {
    if (node == NULL)
        return;
    printPostOrder(node->left);
    printPostOrder(node->right);
    printf("%d ", node->data);
}


void printInOrder(struct node* node) {
    if (node == NULL)
        return;
    printInOrder(node->left);
    printf("%d ", node->data);
    printInOrder(node->right);
}


void printPreOrder(struct node* node) {
    if (node == NULL)
        return;
    printf("%d ", node->data);
    printPreOrder(node->left);
    printPreOrder(node->right);
}

void main() {
    struct node *root = createNode(40);
    root->left = createNode(70);
    root->right = createNode(90);
    root->left->left = createNode(30);
    root->left->right = createNode(50);

    printf("Preorder traversal:\n");
    printPreOrder(root);

    printf("\nInorder traversal:\n");
    printInOrder(root);

    printf("\nPostorder traversal:\n");
    printPostOrder(root);

    return;
}


