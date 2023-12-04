#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

int main() {
    struct Rectangle rectangle;
    struct Rectangle *ptrRectangle = &rectangle;

    printf("Suyash Rusia Roll No.: 58\n");
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &ptrRectangle->length, &ptrRectangle->width);

    printf("Rectangle Details:\n");
    printf("Length: %.2f\n", ptrRectangle->length);
    printf("Width: %.2f\n", ptrRectangle->width);

    return 0;
}
