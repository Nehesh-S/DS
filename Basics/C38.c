// WAP to find number of elements are even and odd in the given array

#include <stdio.h>

#define MAX 10

int even_odd(int no)
{
    if (no % 2 == 0)
        return 0;
    return 1;
}

int main()
{
    int record[MAX], i, even = 0, odd = 0;
    printf("Enter 10 Elements:\n");
    for(i = 0; i < MAX; i++)
    {
        scanf("%d", &record[i]);
        if(even_odd(record[i]) == 0)
            even++;
        else if(even_odd(record[i]) == 1)
            odd++;
    }
    printf("Odd : %d \t Even : %d\n", odd, even);
}