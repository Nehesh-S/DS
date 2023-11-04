// WAP to copy one string to another string

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], res[20];
    printf("Enter String: ");
    gets(str);
    strcpy(res, str);
    printf("str: %s\nres: %s", str, res);
}