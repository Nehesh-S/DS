#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct
{
    char name[10];
    int score;
}record;

void bubble_sort(record students[], int len)
{
    int i, j, k;
    record tmp;
    for(i = 0; i < (len - 1); i++)
    {
        printf("\nStep %d:\n", i+1);
        for(j = 0; j < (len - i - 1); j++)
        {
            if(students[j].score > students[j + 1].score)
            {
                tmp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = tmp;
            }

            for (k = 0; k < len; k++)
                printf("%s\t%d\n", students[k].name, students[k].score);
            printf("\n");
        }
    }
}

int main()
{
    record students[MAX];
    int i, len;
    printf("Enter Student Name and Scores:\n(Max 10, Type 'Exit' to finish)\n");
    for(i = 0; i < MAX; i++)
    {
        scanf("%s", students[i].name);
        if(strcmp(students[i].name, "Exit") == 0)
        {
            len = i;
            break;
        }
        scanf("%d", &students[i].score);
    }

    printf("\nInitial Record:\n");
    for (i = 0; i < len; i++)
        printf("%s\t%d\n", students[i].name, students[i].score);
    printf("\n");
    bubble_sort(students, len);

    printf("Sorted Record:\n");
    for (i = 0; i < len; i++)
        printf("%s\t%d\n", students[i].name, students[i].score);
}
