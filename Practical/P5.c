#include <stdio.h>

#define MAX 10

int left = -1;
int right = -1;

void enqueue(int queue[], int element)
{
    if(right == MAX - 1)
    {
        printf("\nQueue Overflow");
        return;
    }
    else
    {
        if(left == -1)
            left = 0;
        right++;
        queue[right] = element;
    }
}

void dequeue(int queue[])
{
    if(left == -1 || left == MAX - 1)
    {
        printf("\nQueue Underflow");
        return;
    }
    else
    {
        left++;
    }
}

void display(int queue[])
{
    for(int i = left; i <= right; i++)
        printf("Person No : %d\n", queue[i]);
}

int main()
{
    int queue[MAX], op, no;
    printf("Oprations:\n 1. Add a Person to Queue\n 2. Remove a Person from Queue\n 3. Display Queue\n 4. Exit\n");
    while(1)
    {
        printf("\nEnter Operation: ");
        scanf("%d", &op);
        switch(op)
        {
            case 1:
                printf("Enter Person Number: ");
                scanf("%d", &no);
                enqueue(queue, no);
                printf("Operation Successful!\n");
                break;
            case 2:
                dequeue(queue);
                printf("Operation Successful!\n");
                break;
            case 3:
                display(queue);
                break;
            case 4:
                return 0;
        }
    }
}