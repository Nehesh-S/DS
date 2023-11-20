#include <stdio.h>

#define MAX 10

int left = -1;
int right = -1;

void enqueue(int queue[], int element)
{
    if(left == (right + 1) % MAX)
    {
        printf("Circular Queue Overflow\n");
        return;
    }
    else
    {
        if(left == -1)
            left = 0;
        right = (right + 1) % MAX;
        queue[right] = element;
        printf("Operation Successful!\n");
    }
}

void dequeue(int queue[])
{
    if(left < 0)
    {
        printf("Circular Queue Underflow\n");
        return;
    }
    if(left == right)
        left = right = -1;
    else if(left == MAX - 1)
        left = 0;
    else
        left++;
    printf("Operation Successful!\n");
}

void display(int queue[])
{
    if(left == -1)
    {
        printf("Queue is Empty\n");
        return;
    }
    for(int i = left; i <= right; i++)
        printf("Element : %d\n", queue[i]);
  
}

int main()
{
    int queue[MAX], op, no;
    printf("Oprations:\n 1. Enqueue\n 2. Dequeue\n 3. Display Queue\n 4. Exit\n");
    while(1)
    {
        printf("\nEnter Operation: ");
        scanf("%d", &op);
        switch(op)
        {
            case 1:
                printf("Enter Element: ");
                scanf("%d", &no);
                enqueue(queue, no);
                break;
            case 2:
                dequeue(queue);
                break;
            case 3:
                display(queue);
                break;
            case 4:
                return 0;
        }
    }
}