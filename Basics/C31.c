// WAP to sort the array elements using bubble sort

#include <stdio.h>

#define MAX 5

void bubble_sort(int students[], int len)
{
    int i, j, tmp;
    for(i = 0; i < (len - 1); i++)
    {
        for(j = 0; j < (len - i - 1); j++)
        {
            if(students[j] > students[j + 1])
            {
                tmp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = tmp;
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
    bubble_sort(record, MAX);

    printf("Sorted Array:\n");
    for (i = 0; i < MAX; i++)
        printf("%d\t", record[i]);
}
