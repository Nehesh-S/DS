// WAP to find number of elements are positive , negative and zero in the given array

#include <stdio.h>

#define MAX 10

int sign(int no)
{
    if (no > 0)
        return 1;
    else if (no < 0 )
        return -1;
    return 0;
}

int main()
{
    int record[MAX], i, positive = 0, negative = 0, zero = 0;
    printf("Enter 10 Elements:\n");
    for(i = 0; i < MAX; i++)
    {
        scanf("%d", &record[i]);
        if(sign(record[i]) == 0)
            zero++;
        else if(sign(record[i]) == 1)
            positive++;
        else if(sign(record[i]) == -1)
            negative++;
    }
    printf("Positive : %d \t Negative : %d\t Zero : %d\n", positive, negative, zero);
}