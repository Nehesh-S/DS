// WAP to interchange the value of two variable without using third variable

#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    printf("Before Swap:\n");
    printf("A = %d \t B = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swap:\n");
    printf("A = %d \t B = %d", a, b);
}