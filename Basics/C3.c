// WAP to find area of circle

#include <stdio.h>

void main()
{
    int r;
    float ar;
    printf("Enter Radius: ");
    scanf("%d", &r);
    ar = (3.14 * r * r);
    printf("Area of Circle: %f", ar);
}