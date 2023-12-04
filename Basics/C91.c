#include <stdio.h>

void fibb(int n)
{
    int a = 0, b = 1, nxt;
    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++)
    {
        printf("%d, ", a);
        nxt = a + b;
        a = b;
        b = nxt;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    fibb(n);
}