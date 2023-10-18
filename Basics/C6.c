// WAP to interchange the value of two variable using third variable

#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    printf("Before Swap:\n");
    printf("A = %d \t B = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("After Swap:\n");
    printf("A = %d \t B = %d", a, b);
}