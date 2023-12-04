#include <stdio.h>

typedef struct{
    char city[50];
    char state[50];
}address;

typedef struct{
    char name[50];
    int id;
    float salary;
    address add;
}employee;

int main()
{
    employee employee1;

    printf("Enter employee details:\n");
    printf("Name: ");
    scanf("%s", employee1.name);
    printf("Employee ID: ");
    scanf("%d", &employee1.id);
    printf("Salary: ");
    scanf("%f", &employee1.salary);
    printf("City: ");
    scanf("%s", employee1.add.city);
    printf("State: ");
    scanf("%s", employee1.add.state);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", employee1.name);
    printf("Employee ID: %d\n", employee1.id);
    printf("Salary: %.2f\n", employee1.salary);
    printf("Address: %s, %s\n", employee1.add.city, employee1.add.state);
}