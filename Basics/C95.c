#include <stdio.h>

typedef struct {
    char name[10];
    int id;
    float salary;
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

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", employee1.name);
    printf("Employee ID: %d\n", employee1.id);
    printf("Salary: %.2f\n", employee1.salary);
}
