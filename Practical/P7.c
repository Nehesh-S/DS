#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char name[10];
    int id;
    struct node* next;
} node;

node* head = NULL;
node* last = NULL;

void add(char name[10], int id)
{
    node* tmp = (node*)malloc(sizeof(node));
    if(tmp == NULL)
    {
        printf("Cannot Allocate Memory\n");
        return;
    }
    strcpy(tmp->name, name);
    tmp->id = id;
    tmp->next = NULL;

    if(head == NULL)
    {
        head = tmp;
        last = tmp;
    }
    else
    {
        last->next = tmp;
        last = tmp;
    }    
    printf("Operation Successful!\n");
}

void delete(int id)
{
    if(head == NULL)
    {
        printf("List is Empty\n");
        return;
    }
    if(head->id == id)
    {
        node* buf = head;
        head = head->next;
        free(buf);
        printf("Operation Successful!\n");
        return;
    }
    node* tmp = head;
    while(tmp->next != NULL)
    {
        if (tmp->next->id == id)
        {
            node* buf = tmp->next;
            tmp->next = tmp->next->next;
            free(buf);
            printf("Operation Successful!\n");
            return;
        }
        tmp = tmp->next;
    }
    printf("Student not Found\n");
}

void display()
{
    node* tmp = head;
    while(tmp != NULL)
    {
        printf("Student Name: %s \t Student ID: %d \n", tmp->name, tmp->id);
        tmp = tmp->next;
    }
}

void freeall()
{
    while(head != NULL)
    {
        node* buf = head;
        head = head->next;
        free(buf);
    }
}

int main()
{
    int op, id;
    char name[10];
    printf("Oprations:\n 1. Add Student\n 2. Remove Student\n 3. Display List\n 4. Exit\n");
    while(1)
    {
        printf("\nEnter Operation: ");
        scanf("%d", &op);
        switch(op)
        {
            case 1:
                printf("Enter Student Name and ID:\n");
                scanf("%s %d", name, &id);
                add(name, id);
                break;
            case 2:
                printf("Enter Student ID to remove: ");
                scanf("%d", &id);
                delete(id);
                break;
            case 3:
                display();
                break;
            case 4:
                freeall();
                return 0;
        }
    }
}