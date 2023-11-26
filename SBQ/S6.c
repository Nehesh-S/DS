#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char name[10];
    int id;
    float gpa;
    struct node* next;
    struct node* prev;
} node;

node* head = NULL;
node* last = NULL;

void add(char name[10], int id, float gpa)
{
    node* tmp = (node*)malloc(sizeof(node));
    if(tmp == NULL)
    {
        printf("Cannot Allocate Memory\n");
        return;
    }
    strcpy(tmp->name, name);
    tmp->id = id;
    tmp->gpa = gpa;
    tmp->next = NULL;
    tmp->prev = NULL;

    if(head == NULL)
    {
        head = tmp;
        last = tmp;
    }
    else
    {
        last->next = tmp;
        tmp->prev = last;
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
        head->prev = NULL;
        free(buf);
        printf("Operation Successful!\n");
        return;
    }
    node* tmp = head;
    while(tmp->next != NULL)
    {
        if (tmp->next->id == id)
        {
            if(last == tmp->next)
                last = tmp;
            node* buf = tmp->next;
            tmp->next = tmp->next->next;
            tmp->next->prev = tmp;
            free(buf);
            printf("Operation Successful!\n");
            return;
        }
        tmp = tmp->next;
    }
    printf("Student not Found\n");
}

void search(int id)
{
    node* tmp = head;
    while(tmp != NULL)
    {
        if(tmp->id == id)
        {
            printf("Student Name: %s \t Student ID: %d \t Student GPA: %f \n", tmp->name, tmp->id, tmp->gpa);
            return;
        }
        tmp = tmp->next;
    }
    printf("Student not Found\n");
}

void display_fw()
{
    node* tmp = head;
    while(tmp != NULL)
    {
        printf("Student Name: %s \t Student ID: %d \t Student GPA: %f \n", tmp->name, tmp->id, tmp->gpa);
        tmp = tmp->next;
    }
}

void display_bw()
{
    node* tmp = last;
    while(tmp != NULL)
    {
        printf("Student Name: %s \t Student ID: %d \t Student GPA: %f \n", tmp->name, tmp->id, tmp->gpa);
        tmp = tmp->prev;
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
    float gpa;
    char name[10];
    printf("Oprations:\n 1. Add Student\n 2. Remove Student\n 3. Search Student\n 4. Display list in Forward Order\n 5. Display list in Reverse Order\n 6. Exit\n");
    while(1)
    {
        printf("\nEnter Operation: ");
        scanf("%d", &op);
        switch(op)
        {
            case 1:
                printf("Enter Student Name, ID and GPA:\n");
                scanf("%s %d %f", name, &id, &gpa);
                add(name, id, gpa);
                break;
            case 2:
                printf("Enter Student ID to remove: ");
                scanf("%d", &id);
                delete(id);
                break;
            case 3:
                printf("Enter Student ID to search: ");
                scanf("%d", &id);
                search(id);
                break;
            case 4:
                display_fw();
                break;
            case 5:
                display_bw();
                break;
            case 6:
                freeall();
                return 0;
            default:
                printf("Invalid Selection\n");
        }
    }
}