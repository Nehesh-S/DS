// WAP to print upper triangular of given matrix

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
    int i, j, tmp;
    int mat1[3][3];
    input(mat1);
    printf("Upper Triangular Matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(j >= i)
                tmp = mat1[i][j];
            else
                tmp = 0;
            printf("%d\t", tmp);
        }
        printf("\n");
    }
}