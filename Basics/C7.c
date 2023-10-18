// WAP to convert the temperature entered in Celsius to Fahrenheit

#include <stdio.h>

void main()
{
    float c, f;
    printf("Enter Temperature in Celcius: ");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("Temperature in Fahrenheit: %f", f);
}