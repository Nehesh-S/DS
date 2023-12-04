#include <stdio.h>

float bill(float units)
{
    float total;

    if (units <= 50)
        total = units * 0.50;
    else if (units <= 150)
        total = 50 * 0.50 + (units - 50) * 0.75;
    else if (units <= 250)
        total = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    else
        total = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;

    return total;
}

int main()
{
    float units;
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);
    printf("Electricity Bill: %.2f\n", bill(units));
}
