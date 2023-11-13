// WAP to replace last occurrence of a character with another in a string. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20], ch, rev[20], rep;
    int i, flag = 0;
    printf("Enter String: ");
    gets(str);
    printf("Enter Character and Replacement: ");
    scanf("%c %c", &ch, &rep);
    strcpy(rev, str);
    strrev(rev);
    for(i = 0; i <= strlen(rev); i++)
    {
        if(tolower(rev[i]) == tolower(ch) && flag == 0)
        {
            flag = strlen(str) - i - 1;
            str[flag] = rep;
        }
    }
    puts(str);
}