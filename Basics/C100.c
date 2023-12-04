#include <stdio.h>

typedef struct{
    char name[50];
    int scores[5];
}student;

int main()
{
    student students[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter scores for 5 subjects for %s:\n", students[i].name);
        for (int j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].scores[j]);
        }
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Scores: ");
        for (int j = 0; j < 5; j++)
            printf("%d ", students[i].scores[j]);
        printf("\n");
    }
}
