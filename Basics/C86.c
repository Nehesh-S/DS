#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim(char str[])
{
    int i = strlen(str) - 1;
    while (i >= 0 && isspace(str[i]))
    {
        i--;
    }
    str[i + 1] = '\0';
}

int main()
{
    char input[50];
    printf("Enter a string: ");
    gets(input);
    trim(input);
    printf("%s\n", input);
}
