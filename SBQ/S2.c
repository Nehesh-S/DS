#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct
{
    char name[10];
    char uid[5];
    int price;
    int qty;
}product;

void quicksort(product clothes[], int first, int last)
{
    int i, j, pivot;
    product tmp;
    if(first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while(i < j)
        {
            while(clothes[i].price <= clothes[pivot].price && i < last)
                i++;
            while(clothes[j].price > clothes[pivot].price)
                j--;
            if(i < j)
            {
                tmp = clothes[i];
                clothes[i] = clothes[j];
                clothes[j] = tmp;
            }
        }
        tmp = clothes[pivot];
        clothes[pivot] = clothes[j];
        clothes[j] = tmp;
        quicksort(clothes, first, j-1);
        quicksort(clothes, j+1, last);
    }
}

int main()
{
    product clothes[MAX];
    int i, len;
    printf("Enter Item Name, UID, Price and Quantity:\n(Max 10, Type 'Exit' to finish)\n");
    for(i = 0; i < MAX; i++)
    {
        scanf("%s", clothes[i].name);
        if(strcmp(clothes[i].name, "Exit") == 0)
        {
            len = i;
            break;
        }
        scanf("%s", clothes[i].uid);
        scanf("%d", &clothes[i].price);
        scanf("%d", &clothes[i].qty);
    }

    quicksort(clothes, 0, len);

    printf("\nSorted Inventory by Price:\n");
    printf("Name\tUID\tPrice\tQuantity\n");
    for (i = 0; i < len; i++)
        printf("%s\t%s\t%d\t%d\n", clothes[i].name, clothes[i].uid, clothes[i].price, clothes[i].qty);
}