#include <stdio.h>

#define MAX 10

int top = -1;

void push(int stack[], int element)
{
    if(top == MAX - 1)
    {
        printf("\nStack Overflow");
        return;
    }
    else
    {
        top++;
        stack[top] = element;
    }
}

void pop(int stack[])
{
    if(top == -1)
    {
        printf("\nStack Underflow");
        return;
    }
    else
    {
        top--;
    }
}

void display(int stack[])
{
    for(int i = 0; i <= top; i++)
        printf("Plate No : %d\n", stack[i]);
}

int main()
{
    int stack[MAX], op, no;
    printf("Oprations:\n 1. Add a Plate to Stack\n 2. Remove a Plate from Stack\n 3. Display Stack\n 4. Exit\n");
    while(1)
    {
        printf("\nEnter Operation: ");
        scanf("%d", &op);
        switch(op)
        {
            case 1:
                printf("Enter Plate Number: ");
                scanf("%d", &no);
                push(stack, no);
                printf("Operation Successful!\n");
                break;
            case 2:
                pop(stack);
                printf("Operation Successful!\n");
                break;
            case 3:
                display(stack);
                break;
            case 4:
                return 0;
        }
    }
}