// WAP to find series of even and odd numbers till the Nth element

#include <stdio.h>

void main()
{
    int no, i;
    printf("Enter Number: ");
    scanf("%d", &no);
    printf("Even Numbers \tOdd Numbers\n");
    for(i = 0; i <= no; i++)
    {
        if (i % 2 == 0)
            printf("%d\t\t", i);
        else
            printf("%d\n", i);
    }
}