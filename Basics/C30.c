// Menu driven program for 
//      1. Print pyramid of start
//      2. Right triangle star pattern
//      3. Left or mirrored triangle star pattern
//      4. Hollow right triangle star pattern


#include <stdio.h>

void pyramid()
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
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void r_triangle()
{
    int h, i, j;
    printf("Enter Height: ");
    scanf("%d", &h);
    for (i = 0; i <= h; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void l_triangle()
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

void hr_triangle()
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

void main()
{
    char c;
    printf("Select Operation:\n 1. Print pyramid of start\n 2. Right triangle star pattern\n 3. Left or mirrored triangle star pattern\n 4. Hollow right triangle star pattern\n");
    printf("Operation: ");
    scanf("%c", &c);
    switch(c)
    {
        case '1':
            pyramid();
            break;

        case '2':
            r_triangle();
            break;

        case '3':
            l_triangle();
            break;

        case '4':
            hr_triangle();
            break;
    }
}