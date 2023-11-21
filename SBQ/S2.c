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

void insertion_sort(product list[], int len)
{

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

    insertion_sort(clothes, len);

    printf("\nSorted Inventory by Price:\n");
    for (i = 0; i < len; i++)
        printf("%s\t%d\n", list[i].item, list[i].qty);
}