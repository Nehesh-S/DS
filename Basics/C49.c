// WAP to find frequency of odd number in the given matrix

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
    int i, j, odd = 0;
    int mat1[3][3];
    input(mat1);
    printf("Number of odd elements: ");
    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(mat1[i][j] % 2 != 0)
                odd++;
        }
    }
    printf("%d", odd);
}