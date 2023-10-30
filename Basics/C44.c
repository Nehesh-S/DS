// WAP to find transpose of given matrix

#include <stdio.h>

void input(int mat[3][3])
{
    int i, j;
    printf("Enter Matrix Elements:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);
    }
}

int main()
{
    int i, j;
    int mat1[3][3], mat2[3][3];
    input(mat1);
    printf("Transpose of Matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            mat2[i][j] = mat1[j][i];
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
}