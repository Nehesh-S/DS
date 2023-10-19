// WAP to find sum of digit of entered number

#include <stdio.h>

void main()
{
    int no, res = 0, rem;
    printf("Enter Number: ");
    scanf("%d", &no);
    while(no != 0)
    {
        rem = no % 10;
        res = res + rem;
        no = no / 10;
    }
    printf("Sum of Digits: %d", res);
}