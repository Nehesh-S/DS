#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim(char str[])
{
    int i = 0;
    while (isspace(str[i]))
    {
        i++;
    }
    memmove(str, str + i, strlen(str + i) + 1);
}

int main()
{
    char input[100];
    printf("Enter a string: ");
    gets(input);
    trim(input);
    printf("%s\n", input);
}
