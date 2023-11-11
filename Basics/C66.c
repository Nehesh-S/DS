// WAP to search all occurrences of a character in given string.

#include <stdio.h>
#include <string.h>

int main()
{
    char ch, str[20];
    int i, flag = 0;
    printf("Enter String: ");
    gets(str);
    printf("Enter Character: ");
    scanf("%c", &ch);
    for(i = strlen(str) - 1; i >= 0 ; i--)
    {
        if(str[i] == ch)
        {
            printf("%c found at position %d\n", ch, i+1);
            flag = 1;
        }
    }
    if(flag == 0)
        printf("%c not found", ch);
}