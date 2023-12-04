#include <stdio.h>
#include <string.h>

void remspace(char str[])
{
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' || (i > 0 && str[i - 1] != ' '))
            str[j++] = str[i];
    }
    str[j] = '\0';
}

int main()
{
    char input[50];
    printf("Enter a string: ");
    gets(input);
    remspace(input);
    printf("%s\n", input);
}
