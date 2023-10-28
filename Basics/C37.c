// WAP to find number of elements are prime in given array

#include <stdio.h>

#define MAX 5

int chk_prime(int no)
{
    int i;
    for(i = 2; i < no; i++)
    {
        if (no % i == 0)
            return -1;
    }
    return 0;
}

int main()
{
    int record[MAX], i, prime = 0;
    printf("Enter 5 Elements:\n");
    for(i = 0; i < MAX; i++)
    {
        scanf("%d", &record[i]);
        if(chk_prime(record[i]) == 0)
            prime++;
    }
    printf("%d elements are prime\n", prime);
}