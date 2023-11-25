#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct{
    char name[10];
    int priority;
}patient;

int size = -1;

void enqueue(patient queue[], patient element)
{
    if(size == MAX - 1)
    {
        printf("Beds Full!\n");
        return;
    }
    size++;
    strcpy(queue[size].name, element.name);
    queue[size].priority = element.priority;
}

int next(patient queue[])
{
    int nxt = 0;
    int ind = -1;

    for (int i = 0; i <= size; i++) {
        if (nxt == queue[i].priority && ind > -1)
        {
            nxt = queue[i].priority;
            ind = i;
        }
        else if (nxt < queue[i].priority)
        {
            nxt = queue[i].priority;
            ind = i;
        }
    }
    return ind;
}

void dequeue(patient queue[])
{
    int ind = next(queue);

    for (int i = ind; i < size; i++) {
        queue[i] = queue[i + 1];
    }
    size--;
}

void display(patient queue[])
{
    for(int i = 0; i <= size; i++)
        printf("Patient: %s\t Priority: %d\n", queue[i].name, queue[i].priority);
}

int main()
{
    int op;
    patient pat, queue[MAX];
    printf("Oprations:\n 1. Add Patient\n 2. Remove Patient\n 3. Display Queue\n 4. Exit\n");
    while(1)
    {
        printf("\nEnter Operation: ");
        scanf("%d", &op);
        switch(op)
        {
            case 1:
                printf("Enter Name and Priority: ");
                scanf("%s%d", pat.name, &pat.priority);
                enqueue(queue, pat);
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