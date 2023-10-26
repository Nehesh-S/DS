// WAP to sort the array elements using selection sort

#include <stdio.h>

#define MAX 5

void selection_sort(int students[], int len)
{
    int i, j, tmp;
    for(i = 0; i < len; i++)
    {
        for(j = i + 1; j < len; j++)
        {
            if(students[i] > students[j])
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
    selection_sort(record, MAX);

    printf("Sorted Array:\n");
    for (i = 0; i < MAX; i++)
        printf("%d\t", record[i]);
}
