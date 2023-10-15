// WAP to find the largest number among three entered number

#include <stdio.h>

void main()
{
    int n1, n2, n3;
    printf("Enter Three Number:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if((n1 >= n2) && (n1 >= n3))
        printf("%d is the Greatest Number", n1);
    else if((n2 >= n1) && (n2 >= n3))
        printf("%d is the Greatest Number", n2);
    else if((n3 >= n2) && (n3 >= n1))
        printf("%d is the Greatest Number", n3);
}