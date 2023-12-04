#include <stdio.h>

typedef union{
    char model[20];
    int year;
    float price;
}car;

int main()
{
    car car1;
    
    printf("Enter car details:\n");
    printf("Model: ");
    scanf("%s", car1.model);
    printf("Year: ");
    scanf("%d", &car1.year);
    printf("Price: ");
    scanf("%f", &car1.price);

    printf("\nCar Details:\n");
    printf("Model: %s\n", car1.model);
    printf("Year: %d\n", car1.year);
    printf("Price: %.2f\n", car1.price);
}