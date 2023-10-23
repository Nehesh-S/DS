// WAP to check if the entered year is leap year or not

#include <stdio.h>

void main()
{
    int yr;
    printf("Enter Year: ");
    scanf("%d", &yr);
    if (yr % 400 == 0)
        printf("%d is Leap Year", yr);
    else if (yr % 100 == 0)
        printf("%d is Not Leap Year", yr);
    else if (yr % 4 == 0)
        printf("%d is Leap Year", yr);
    else
        printf("%d is Not Leap Year", yr);
}