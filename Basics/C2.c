// WAP to find area of triangle

#include <stdio.h>

void main()
{
    int h, b;
    float ar;
    printf("Enter Base Length: ");
    scanf("%d", &b);
    printf("Enter Height: ");
    scanf("%d", &h);
    ar = (0.5 * b * h);
    printf("Area of Triangle: %f", ar);
}