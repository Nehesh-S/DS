// WAP to remove last occurrence of a character from string. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20], ch, rev[20];
    int i, flag = 0;
    printf("Enter String: ");
    gets(str);
    printf("Enter Character: ");
    scanf("%c", &ch);
    strcpy(rev, str);
    strrev(rev);
    for(i = 0; i <= strlen(rev); i++)
    {
        if(tolower(rev[i]) == tolower(ch) && flag == 0)
        {
            flag = strlen(str) - i - 1;
        }
    }
    for(i = 0; i <= strlen(str); i++)
    {
        if(i != flag)
            printf("%c", str[i]);
    }
}