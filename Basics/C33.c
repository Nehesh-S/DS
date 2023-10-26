// WAP to sort the array elements using insertion sort

#include <stdio.h>

#define MAX 5

void insertion_sort(int students[], int len)
{
    int i, j, tmp;
    for(i = 1; i < len; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(students[j] > students[i])
            {
                tmp = students[j];
                students[j] = students[i];
                students[i] = tmp;
            }
        }
    }
}

int main()
{
    int record[MAX], i;
    printf("Enter 5 Elements to Sort:\n");
    for(i = 0; i < MAX; i++)
    {
        scanf("%d", &record[i]);
    }

    printf("\nInitial Array:\n");
    for (i = 0; i < MAX; i++)
        printf("%d\t", record[i]);
    printf("\n");
    insertion_sort(record, MAX);

    printf("Sorted Array:\n");
    for (i = 0; i < MAX; i++)
        printf("%d\t", record[i]);
}
