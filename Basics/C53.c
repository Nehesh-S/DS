// WAP to concatenate two strings

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20];
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);
    strcat(str1, str2);
    printf("Concatenated String: %s", str1);
}