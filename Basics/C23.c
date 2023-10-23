// WAP to find GCD (Greatest Common Divisior)

#include <stdio.h>

void main()
{
    int n1, n2, i, gcd;
    printf("Enter Two Numbers:\n");
    scanf("%d%d", &n1, &n2);
    for(i = 1; i <= (n1>n2?n2:n1); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    printf("GCD = %d", gcd);
}