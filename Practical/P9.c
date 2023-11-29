#include <stdio.h>

#define MAX 5

int main()
{
    int mat[MAX][MAX], node, i, j;
    printf("Enter number of Vertices: ");
    scanf("%d", &node);
    printf("Enter Edges between Nodes: (0 -> Edge Absent, 1 -> Edge Present) \n");
    for(i = 1; i <= node; i++)
    {
        for(j = 1; j <= node; j++)
        {
            printf("%d -> %d : ", i, j);
            scanf("%d", &mat[i-1][j-1]);
        }
    }
    printf("Adjacency Matrix:\n");
    for(i = 0; i < node; i++)
    {
        for(j = 0; j < node; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}