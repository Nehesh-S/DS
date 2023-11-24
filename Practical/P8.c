#include <stdio.h>

typedef struct node
{
    struct node* left;
    char name[10];
    int id;
    struct node* right;
}node;

int main()
{
    node* root;
    int op, id;
    char name[10];
    printf("Oprations:\n 1. Add Employee\n 2. Search Employee\n 3. Display Tree\n 4. Exit\n");
    while(1)
    {
        printf("\nEnter Operation: ");
        scanf("%d", &op);
        switch(op)
        {
            case 1:
                printf("Enter Employee Name and ID:\n");
                scanf("%s %d", name, &id);
                add(root, name, id);
                break;
            case 2:
                printf("Enter Employee ID: ");
                scanf("%d", &id);
                search(root, id);
                break;
            case 3:
                display(root);
                break;
            case 4:
                freeall(root);
                return 0;
        }
    }
}