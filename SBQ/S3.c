#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct
{
    char title[10];
    char genre[10];
    int year;
}song;

void shellsort_genre(song playlist[], int len)
{
    int gap, i, j;
    song tmp;
    for(gap = len/2; gap > 0; gap /=2)
    {
        for(i = gap; i < len; i++)
        {
            tmp = playlist[i];
            for(j = i; j >= gap; j -= gap)
            {
                if(strcmp(playlist[j - gap].genre, tmp.genre) > 0)
                    playlist[j] = playlist[j - gap];
            }
            playlist[j] = tmp;
        }
    }
}


int main()
{
    song playlist[MAX];
    int i, len;
    printf("Enter Item Name, UID, Price and Quantity:\n(Max 10, Type 'Exit' to finish)\n");
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

    shellsort_genre(playlist, len);

    printf("\nSorted Inventory by Price:\n");
    printf("Title\tGenre\tRelease Year\n");
    for (i = 0; i < len; i++)
        printf("%s\t%s\t%d\n", playlist[i].title, playlist[i].genre, playlist[i].year);
}