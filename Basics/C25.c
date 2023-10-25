// WAP to find the sum of first n natural numbers

#include <stdio.h>

void main()
{
    int no, ans = 0;
    printf("Enter Number: ");
    scanf("%d", &no);
    while (no != 0)
    {
        ans += no;
        no--;
    }
    printf("Sum = %d", ans);
}