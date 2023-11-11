// WAP to find last occurrence of a character in a given string.

#include <stdio.h>
#include <string.h>

int main()
{
    char ch, str[20];
    int i;
    printf("Enter String: ");
    gets(str);
    printf("Enter Character: ");
    scanf("%c", &ch);
    for(i = strlen(str) - 1; i >= 0 ; i--)
    {
        if(str[i] == ch)
        {
            printf("%c found at position %d", ch, i+1);
            return 0;
        }
    }
    printf("%c not found", ch);
}