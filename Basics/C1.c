// WAP to find entered number is even or odd

#include <stdio.h>

void main()
{
    int no;
    printf("Enter Number: ");
    scanf("%d", &no);
    if (no % 2 == 0)
        printf("%d is Even Number", no);
    else
        printf("%d is Odd Number", no);
}