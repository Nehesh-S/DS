#include <stdio.h>

#define MAX 10

typedef struct{
    char name[10];
}str;

int left = -1;
int right = -1;

void enqueue(str queue[], str element)
{
    if(left == (right + 1) % MAX)
    {
        printf("Housefull!!\n");
        return;
    }
    else
    {
        if(left == -1)
            left = 0;
        right = (right + 1) % MAX;
        queue[right] = element;
        printf("Booking Confirmed\nSeat Number: %d", right+1);
    }
}

void dequeue(str queue[])
{
    if(left < 0)
    {
        printf("Theater Empty!\n");
        return;
    }
    if(left == right)
        left = right = -1;
    else if(left == MAX - 1)
        left = 0;
    else
        left++;
    printf("Cancellation Successful!\n");
}

void display(str queue[])
{
    if(left == -1)
    {
        printf("Theater Empty\n");
        return;
    }
    int i = left;
    do
    {
        printf("Customer : %s \t Seat Number: %d\n", queue[i], i+1);
        i = (i + 1) % MAX;
    } while (i != (right + 1) % MAX);
}

int main()
{
    int op;
    str customer, queue[MAX];
    printf("Oprations:\n 1. Book a Ticket\n 2. Cancel a Ticket\n 3. Display Seat Allocation\n 4. Exit\n");
    while(1)
    {
        printf("\nEnter Operation: ");
        scanf("%d", &op);
        switch(op)
        {
            case 1:
                printf("Enter Name: ");
                scanf("%s", customer.name);
                enqueue(queue, customer);
                break;
            case 2:
                dequeue(queue);
                break;
            case 3:
                display(queue);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid Selection!\n");
        }
    }
}