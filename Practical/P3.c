#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct
{
    char name[10];
    char id[10];
}book;

void selection_sort(book books[], int len)
{
    int i, j, k;
    book tmp;
    for(i = 0; i < len; i++)
    {
        printf("\nStep %d:\n", i+1);
        for(j = i + 1; j < len; j++)
        {
            if(strcmp(books[j].id, books[i].id) < 0)
            {
                tmp = books[j];
                books[j] = books[i];
                books[i] = tmp;
            }

            for (k = 0; k < len; k++)
                printf("%s\t\t\t%s\n", books[k].name, books[k].id);
            printf("\n");
        }
    }
}

int main()
{
    book books[MAX];
    int i, len;
    printf("Enter Book Name and ids:\n(Max 10, Type 'Exit' to finish)\n");
    for(i = 0; i < MAX; i++)
    {
        scanf("%s", books[i].name);
        if(strcmp(books[i].name, "Exit") == 0)
        {
            len = i;
            break;
        }
        scanf("%s", books[i].id);
    }

    printf("\nInitial book:\n");
    for (i = 0; i < len; i++)
        printf("%s\t\t\t%s\n", books[i].name, books[i].id);
    printf("\n");

    selection_sort(books, len);

    printf("Sorted book:\n");
    for (i = 0; i < len; i++)
        printf("%s\t\t\t%s\n", books[i].name, books[i].id);
}
