// WAP to print Mirrored Right Triangle Star Pattern

#include <stdio.h>

void main()
{
    int h, i, j;
    printf("Enter Height: ");
    scanf("%d", &h);
    for (i = 0; i < h; i++)
    {
        for (j = 1; j <= h; j++)
        {
            if(j < (h-i))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}