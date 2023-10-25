// WAP to print Number series 1

#include <stdio.h>

void main()
{
    int h, i, j;
    printf("Enter Height: ");
    scanf("%d", &h);
    for (i = h; i >= 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}