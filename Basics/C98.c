#include <stdio.h>

typedef struct {
    float radius;
}circle;

void input(circle *circ)
{
    printf("Enter the radius of the circle: ");
    scanf("%f", &circ->radius);
}

void display(circle *circ)
{
    printf("Circle Details:\n");
    printf("Radius: %.2f\n", circ->radius);
}

int main()
{
    circle circ;
    circle *ptrCircle = &circ;

    input(ptrCircle);
    display(ptrCircle);
}