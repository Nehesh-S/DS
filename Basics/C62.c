// WAP to check whether a string is palindrome or not

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], rev[20];
    printf("Enter String: ");
    gets(str);
    strcpy(rev, str);
    strrev(rev);
    if(strcmp(rev, str) == 0)
        printf("String is Palindrome");
    else
        printf("String is Not Palindrome");
}