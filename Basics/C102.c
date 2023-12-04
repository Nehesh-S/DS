#include <stdio.h>

typedef union{
    unsigned int num;
    unsigned char bytes[4];
}extract;

int main()
{
    extract extractor;

    printf("Enter an unsigned integer: ");
    scanf("%u", &extractor.num);

    printf("\nIndividual bytes of the unsigned integer %u are:\n", extractor.num);
    for (int i = 0; i < 4; i++) {
        printf("Byte %d: %u\n", i + 1, extractor.bytes[i]);
    }
}