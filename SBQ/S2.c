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
// void quicksort(int number[25],int first,int last){
//    int i, j, pivot, temp;
//    if(first<last){
//       pivot=first;
//       i=first;
//       j=last;
//       while(i<j){
//          while(number[i]<=number[pivot]&&i<last)
//          i++;
//          while(number[j]>number[pivot])
//          j--;
//          if(i<j){
//             temp=number[i];
//             number[i]=number[j];
//             number[j]=temp;
//          }
//       }
//       temp=number[pivot];
//       number[pivot]=number[j];
//       number[j]=temp;
//       quicksort(number,first,j-1);
//       quicksort(number,j+1,last);
//    }
// }

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
    printf("Name\tUID\tPrice\tQuantity\n");
    for (i = 0; i < len; i++)
        printf("%s\t%s\t%d\t%d\n", clothes[i].name, clothes[i].uid, clothes[i].price, clothes[i].qty);
}