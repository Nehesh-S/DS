// WAP to find total number of alphabets, digits or special character in a string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20];
    int i, digit = 0, alpha = 0, sc = 0;
    printf("Enter String: ");
    gets(str);
    for(i = 0; i < strlen(str); i++)
    {
        if(isalpha(str[i]))
            alpha++;
        else if(isalnum(str[i]))
            digit++;
        else
            sc++;
    }
    printf("Alphabets: %d\nDigits: %d\nSpecial Characters: %d", alpha, digit, sc);
}