// WAP to find reverse of a string

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter String: ");
    gets(str);
    printf("Reverse String: ");
    puts(strrev(str));
}