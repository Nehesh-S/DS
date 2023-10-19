// WAP to find entered number is prime or not

#include <stdio.h>

void main()
{
    int no, i;
    printf("Enter Number: ");
    scanf("%d", &no);
    for(i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            printf("%d is Composite Number", no);
            return;
        }
    }
    printf("%d is Prime Number", no);
}