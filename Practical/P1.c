#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[10];
    int score;
}record;

int binary_search(record students[], int len, char search[])
{
    int low = 0;
    int high = len - 1;
    while(low <= high)
    {
        int mid = (low + high)/2;

        if (strcmp(search, students[mid].name) == 0)
            return(students[mid].score);

        else if (strcmp(search, students[mid].name) < 0)
            high = mid - 1;

        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    record students[] = {
        {"Alice", 85},
        {"Bob", 92},
        {"Charlie", 78},
        {"David", 95},
        {"Eva", 88},
        {"Frank", 62}
    };

    int size = sizeof(students) / sizeof(students[0]);

    char target[10];
    printf("Enter student name: ");
    scanf("%s", target);

    int score = binary_search(students, size, target);

    if (score == -1) 
        printf("'%s' not found in the records.\n", target);

    else
        printf("Score: %d\n", score);

}
