// WAP to convert uppercase string to lowercase

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20];
    int i;
    printf("Enter String: ");
    gets(str);
    for(i = 0; i < strlen(str); i++)
        str[i] = tolower(str[i]);
    printf("Final String: %s", str);
}