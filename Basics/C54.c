// WAP to compare two strings

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20];
    int cmp;
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);
    cmp = strcmp(str1, str2);
    if (cmp == 0)
        printf("Both Strings are Same");
    else
        printf("Both Strings are not Same");
}