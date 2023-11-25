#include <stdio.h>

typedef struct node
{
    struct node* left;
    char name[10];
    int id;
    struct node* right;
}node;

node* add(node* root, char name[], int id)
{
    if(root == NULL)
    {
        node* tmp = (node*)malloc(sizeof(node));
        if(tmp == NULL)
        {
            printf("Cannot Allocate Memory\n");
            return;
        }
        strcpy(tmp->name, name);
        tmp->id = id;
        tmp->left = tmp->right = NULL;
        return tmp;
    }
    else if(id > root->id)
        root = add(root->right, name, id);
    else if(id < root->id)
        root = add(root->left, name, id);
}

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
                root = add(root, name, id);
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