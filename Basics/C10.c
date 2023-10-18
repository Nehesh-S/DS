// WAP  to find factorial of entered number

#include <stdio.h>

void main()
{
    int no, i, fact = 1;
    printf("Enter Number: ");
    scanf("%d", &no);
    for(i = 1; i <= no; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d", no, fact);
}