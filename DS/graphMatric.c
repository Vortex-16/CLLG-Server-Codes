// Write a program in C using Graph Adjacency Matrix representation preeict there is a circle or not
#include <stdio.h>
#define MAX 10
void createGraph(int graph[MAX][MAX], int vertices);
void displayGraph(int graph[MAX][MAX], int vertices);
int hasCycle(int graph[MAX][MAX], int vertices);
int main() {
    int graph[MAX][MAX], vertices, i, j;

    printf("Enter number of vertices (max %d): ", MAX);
    scanf("%d", &vertices);

    createGraph(graph, vertices);
    displayGraph(graph, vertices);

    if (hasCycle(graph, vertices)) {
        printf("The graph contains a cycle.\n");
    } else {
        printf("The graph does not contain a cycle.\n");
    }

    return 0;
}
void createGraph(int graph[MAX][MAX], int vertices) {
    int i, j, edges, src, dest;

    for (i = 0; i < vertices; i++)
        for (j = 0; j < vertices; j++)
            graph[i][j] = 0;

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (source destination):\n");
    for (i = 0; i < edges; i++) {
        scanf("%d %d", &src, &dest);
        if (src >= 0 && src < vertices && dest >= 0 && dest < vertices) {
            graph[src][dest] = 1;
            graph[dest][src] = 1; 
        } else {
            printf("Invalid edge (%d, %d)\n", src, dest);
        }
    }
}
void displayGraph(int graph[MAX][MAX], int vertices) {
    int i, j;
    printf("Adjacency Matrix:\n");
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}
int hasCycle(int graph[MAX][MAX], int vertices) {
    int visited[MAX] = {0};

    for (int start = 0; start < vertices; start++) {
        if (!visited[start]) {
            int stack[MAX], parent[MAX];
            int top = -1;

            stack[++top] = start;
            parent[start] = -1;
            visited[start] = 1;

            while (top >= 0) {
                int node = stack[top--];

                for (int neighbor = 0; neighbor < vertices; neighbor++) {
                    if (graph[node][neighbor]) {
                        if (!visited[neighbor]) {
                            visited[neighbor] = 1;
                            stack[++top] = neighbor;
                            parent[neighbor] = node;
                        } else if (parent[node] != neighbor) {
                            return 1; 
                        }
                    }
                }
            }
        }
    }
    return 0; 
}
