// WAP to find the sum of all elements given in array

#include <stdio.h>

#define MAX 5

int main()
{
    int record[MAX], i, sum = 0;
    printf("Enter 5 Elements:\n");
    for(i = 0; i < MAX; i++)
    {
        scanf("%d", &record[i]);
        sum += record[i];
    }
    printf("%d is the sum of all elements\n", sum);
}