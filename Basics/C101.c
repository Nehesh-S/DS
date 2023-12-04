#include <stdio.h>

typedef struct{
    int feet;
    int inches;
}dist;

dist add(dist d1, dist d2)
{
    dist result;

    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    if (result.inches >= 12) {
        result.feet += result.inches / 12;
        result.inches %= 12;
    }

    return result;
}

int main()
{
    dist d1, d2, sum;

    printf("Enter distance 1\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inches);

    printf("Enter distance 2\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inches);

    sum = add(d1, d2);

    printf("\nSum of distances: %d feet %d inches\n", sum.feet, sum.inches);
}
