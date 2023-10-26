// WAP to find the largest element in the given array

#include <stdio.h>

#define MAX 5

int main()
{
    int record[MAX], i, greatest;
    printf("Enter 5 Elements:\n");
    for(i = 0; i < MAX; i++)
    {
        scanf("%d", &record[i]);
        if (i == 0)
            greatest = record[i];
        if (greatest < record[i])
            greatest = record[i];
    }
    printf("%d is the largest element\n", greatest);
}