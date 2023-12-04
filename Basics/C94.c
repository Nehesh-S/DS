#include <stdio.h>

typedef struct{
    char name[10];
    int roll;
    float marks;
}student;

int main()
{
    student student1 = {"Nehesh", 45, 95};

    printf("Student Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.roll);
    printf("Marks: %.2f\n", student1.marks);
}
