// WAP to print Hollow Right Triangle Star Pattern

#include <stdio.h>

void main()
{
    int h, i, j;
    printf("Enter Height: ");
    scanf("%d", &h);
    for (i = 1; i <= h; i++)
    {
        for (j = 1; j <= h; j++)
        {
            if(j == 1 || j == i || i == h)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}