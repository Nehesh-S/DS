// WAP to find the smallest element in the given array

#include <stdio.h>

#define MAX 5

int main()
{
    int record[MAX], i, smallest;
    printf("Enter 5 Elements:\n");
    for(i = 0; i < MAX; i++)
    {
        scanf("%d", &record[i]);
        if (i == 0)
            smallest = record[i];
        if (smallest > record[i])
            smallest = record[i];
    }
    printf("%d is the smallest element\n", smallest);
}