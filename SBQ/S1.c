#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct
{
    char item[10];
    int qty;
}product;

void insertion_sort(product list[], int len)
{
    int i, j;
    product tmp;
    for(i = 1; i < len; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(list[j].qty > list[i].qty)
            {
                tmp = list[j];
                list[j] = list[i];
                list[i] = tmp;
            }
        }
    }
}

int main()
{
    product list[MAX];
    int i, len;
    printf("Enter Item Name and Quantity:\n(Max 10, Type 'Exit' to finish)\n");
    for(i = 0; i < MAX; i++)
    {
        scanf("%s", list[i].item);
        if(strcmp(list[i].item, "Exit") == 0)
        {
            len = i;
            break;
        }
        scanf("%d", &list[i].qty);
    }

    insertion_sort(list, len);

    printf("\nSorted List by Quantity:\n");
    printf("Name\tQuantity\n");
    for (i = 0; i < len; i++)
        printf("%s\t%d\n", list[i].item, list[i].qty);
}