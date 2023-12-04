#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim(char str[])
{
    int i = 0, j = strlen(str) - 1;

    while (isspace(str[i]))
    {
        i++;
    }

    while (j >= 0 && isspace(str[j]))
    {
        j--;
    }

    memmove(str, str + i, j - i + 2);
}

int main()
{
    char input[50];
    printf("Enter a string: ");
    gets(input);
    trim(input);
    printf("%s\n", input);
}