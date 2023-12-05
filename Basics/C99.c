#include <stdio.h>

typedef union{
    int integer;
    float floatingPoint;
    char character;
}sample;

int main()
{
    sample myUnion;

    myUnion.integer = 42;
    printf("Value of integer member: %d\n", myUnion.integer);

    myUnion.floatingPoint = 3.14;
    printf("Value of floatingPoint member: %.2f\n", myUnion.floatingPoint);

    myUnion.character = 'A';
    printf("Value of character member: %c\n", myUnion.character);

    printf("\nAfter updating the union:\n");
    printf("Value of integer member: %d\n", myUnion.integer);
    printf("Value of floatingPoint member: %.2f\n", myUnion.floatingPoint);
    printf("Value of character member: %c\n", myUnion.character);
}
