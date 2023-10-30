// WAP to perform subtraction of two matrix

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
    int mat1[3][3], mat2[3][3], mat3[3][3];
    input(mat1);
    input(mat2);
    printf("Difference of Matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            mat3[i][j] = mat2[i][j] - mat1[i][j];
            printf("%d\t", mat3[i][j]);
        }
        printf("\n");
    }
}