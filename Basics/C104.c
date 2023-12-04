#include <stdio.h>

typedef struct{
    char name[50];
    float price;
}item;

int main()
{
    int numFriends;

    printf("Enter the number of friends: ");
    scanf("%d", &numFriends);

    if (numFriends <= 0)
    {
        printf("Invalid number of friends. Please enter a positive value.\n");
        return -1;
    }

    int numItems;
    printf("Enter the number of items used in the party: ");
    scanf("%d", &numItems);

    float totalExpenses = 0.0;
    item items[numItems];

    printf("Enter details for each item:\n");

    for (int i = 0; i < numItems; i++)
    {
        printf("Item %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", items[i].name);
        printf("Price: $");
        scanf("%f", &items[i].price);

        totalExpenses += items[i].price;
    }

    float expensesPerFriend = totalExpenses / numFriends;

    printf("\nTotal expenses: $%.2f\n", totalExpenses);
    printf("Expenses per friend: $%.2f\n", expensesPerFriend);
}
