// WAP to find length of a string

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter String: ");
    gets(str);
    printf("Length of String: %d", strlen(str));
}