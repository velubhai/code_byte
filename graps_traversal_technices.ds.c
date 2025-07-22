#include <stdio.h>
#include <stdlib.h>

#define MAX 100
int adj[MAX][MAX];
int visited[MAX];
int n,i,j; 

void DFS(int v) {
    visited[v] = 1;
    printf("%d ", v);

    for ( i = 0; i < n; i++) {
        if (adj[v][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

int queue[MAX], front = -1, rear = -1;

void enqueue(int v) {
    if (rear == MAX - 1) {
        printf("Queue overflow\n");
    } else {
        if (front == -1)
            front = 0;
        queue[++rear] = v;
    }
}

int dequeue() {
    int v = -1;
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
    } else {
        v = queue[front++];
    }
    return v;
}

int isQueueEmpty() {
    return front == -1 || front > rear;
}


void BFS(int v) {
    printf("%d ", v);
    visited[v] = 1;
    enqueue(v);

    while (!isQueueEmpty()) {
        v = dequeue();
        for ( i = 0; i < n; i++) {
            if (adj[v][i] == 1 && !visited[i]) {
                printf("%d ", i);
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
}

void main() {
    int v, choice, start;
    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &n);    
    printf("Enter the adjacency matrix:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("Enter the starting vertex: ");
    scanf("%d", &start);
    printf("Choose the traversal method:\n");
    printf("1. Depth First Search (DFS)\n");
    printf("2. Breadth First Search (BFS)\n");
    scanf("%d", &choice);

    for ( i = 0; i < n; i++) {
        visited[i] = 0;
    }

    switch (choice) {
        case 1:
            printf("DFS Traversal:\n");
            DFS(start);
            break;

        case 2:
            printf("BFS Traversal:\n");
            BFS(start);
            break;
        default:
            printf("Invalid choice\n");
    }

    return;
}

