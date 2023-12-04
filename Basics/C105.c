#include <stdio.h>

typedef union {
    int integer;
    float floatingPoint;
    char character;
}sample;

int main()
{
    sample myUnion;

    printf("Size of the union: %lu bytes\n", sizeof(myUnion));
}
