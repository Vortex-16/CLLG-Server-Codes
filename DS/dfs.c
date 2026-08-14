//Write a C program to implement Depth First Search (DFS) algorithm for graph traversal.
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int graph[MAX][MAX], visited[MAX], n;
void dfs(int v) {
    visited[v] = 1;
    printf("%d ", v);
    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}
int main() {
    int edges, u, v;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter number of edges: ");
    scanf("%d", &edges);
    for (int i = 0; i < edges; i++) {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1; 
    }
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    printf("DFS Traversal starting from vertex 0:\n");
    dfs(0);
    return 0;
}
