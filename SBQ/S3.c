#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct
{
    char title[10];
    char genre[10];
    int year;
}song;

void shellsort(song arr[], int n) {
    int gap, i, j;
    song tmp;
    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            tmp = arr[i];
            for (j = i; j >= gap && (strcmp(arr[j - gap].genre, tmp.genre) > 0 || (strcmp(arr[j - gap].genre, tmp.genre) == 0 && arr[j - gap].year > tmp.year)); j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = tmp;
        }
    }
}


int main()
{
    song playlist[MAX];
    int i, len;
    printf("Enter Song Title, Genre and Release Year:\n(Max 10, Type 'Exit' to finish)\n");
    for(i = 0; i < MAX; i++)
    {
        scanf("%s", playlist[i].title);
        if(strcmp(playlist[i].title, "Exit") == 0)
        {
            len = i;
            break;
        }
        scanf("%s", playlist[i].genre);
        scanf("%d", &playlist[i].year);
    }

    shellsort(playlist, len);

    printf("\nSorted Inventory by Price:\n");
    printf("Title\tGenre\tRelease Year\n");
    for (i = 0; i < len; i++)
        printf("%s\t%s\t%d\n", playlist[i].title, playlist[i].genre, playlist[i].year);
}