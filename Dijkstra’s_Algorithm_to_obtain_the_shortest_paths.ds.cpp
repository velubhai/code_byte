#include <stdio.h>
#include <limits.h>

#define MAX 100
#define INF INT_MAX

int n, v, i, j, count; 
int adj[MAX][MAX]; 

int minDistance(int dist[], int visited[]) {
    int min = INF, min_index;

    for ( v = 0; v < n; v++) {
        if (visited[v] == 0 && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void dijkstra(int src) {
    int dist[MAX]; 
    int visited[MAX];     
    for ( i = 0; i < n; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }
    dist[src] = 0;     
    for ( count = 0; count < n - 1; count++) {
        int u = minDistance(dist, visited);
        visited[u] = 1;

        for ( v = 0; v < n; v++) {
            if (!visited[v] && adj[u][v] && dist[u] != INF && dist[u] + adj[u][v] < dist[v]) {
                dist[v] = dist[u] + adj[u][v];
            }
        }
    }    
    printf("Vertex \t Distance from Source\n");
    for ( i = 0; i < n; i++) {
        printf("%d \t %d\n", i, dist[i]);
    }
}

int main() {
    int edges, v1, v2, weight, src;

    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter number of edges: ");
    scanf("%d", &edges);    
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
    }    
    for ( i = 0; i < edges; i++) {
        printf("Enter edge (v1 v2 weight): ");
        scanf("%d %d %d", &v1, &v2, &weight);
        adj[v1][v2] = weight;
        adj[v2][v1] = weight; // For undirected graph, use this line
    }
    printf("Enter source vertex: ");
    scanf("%d", &src);
    dijkstra(src);
    return 0;
}

