// WAP to find the matrix are identical or not.

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
    input(mat2);

    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(mat1[i][j] != mat2[i][j])
            {
                printf("The matrix are not Identical");
                return 1;
            }
        }
    }
    printf("The matrix are Identical");
}