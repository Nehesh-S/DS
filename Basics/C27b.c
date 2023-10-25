// WAP to print Number series 2

#include <stdio.h>

void main()
{
    int h, i, j;
    printf("Enter Height: ");
    scanf("%d", &h);
    for (i = 1; i <= h; i++)
    {
        for (j = i; j <= h; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}