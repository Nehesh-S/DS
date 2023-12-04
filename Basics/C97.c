#include <stdio.h>

typedef struct {
    float length;
    float width;
}rec;

int main() {
    rec rectangle;
    rec *ptrRectangle = &rectangle;

    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &ptrRectangle->length, &ptrRectangle->width);

    printf("\nRectangle Details:\n");
    printf("Length: %.2f\n", ptrRectangle->length);
    printf("Width: %.2f\n", ptrRectangle->width);
}
