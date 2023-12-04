#include <stdio.h>

void ref(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    printf("Enter two values: ");
    scanf("%d %d", &x, &y);
    
    int tmp = x;
    x = y;
    y = tmp;
    printf("Values after swapping (Value): x = %d, y = %d\n", x, y);

    ref(&y, &x);
    printf("Values after swapping (Reference): x = %d, y = %d\n", y, x);

}
