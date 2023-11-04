// WAP to convert lowercase string to uppercase

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
        str[i] = toupper(str[i]);
    printf("Final String: %s", str);
}