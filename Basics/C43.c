// WAP to perform multiplication of two matrix

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
    int i, j, k;
    int mat1[3][3], mat2[3][3];
    int mat3[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    input(mat1);
    input(mat2);
    printf("Product of Matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d\t", mat3[i][j]);
        }
        printf("\n");
    }
}