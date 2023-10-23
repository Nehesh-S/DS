// WAP to print Fibonacci series in a given range

#include <stdio.h>

void main()
{
    int i, n1 = 0, n2 = 1, n3, no;
    printf("Enter Number: ");
    scanf("%d", &no);
    for(i = 0; i < no; i++)
    {
        printf("%d\t", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
}