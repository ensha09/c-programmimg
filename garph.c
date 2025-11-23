#include <stdio.h>

int graph[20][20];
int color[20];

int isSafe(int v, int c, int n) {
    for(int i = 0; i < n; i++) {
        if(graph[v][i] == 1 && color[i] == c)
            return 0;
    }
    return 1;
}

void printSolution(int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", color[i]);
    printf("\n");
}

void solveMColor(int v, int n, int m) {
    if(v == n) {
        printSolution(n);
        return;
    }

    for(int c = 1; c <= m; c++) {
        if(isSafe(v, c, n)) {
            color[v] = c;
            solveMColor(v+1, n, m);
            color[v] = 0;
        }
    }
}

int main() {
    int n, m;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter number of colors (M): ");
    scanf("%d", &m);

    solveMColor(0, n, m);

    return 0;
}
