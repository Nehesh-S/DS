// WAP to replace first occurrence of a character with another in a string. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20], ch, rep;
    int i, flag = 0;
    printf("Enter String: ");
    gets(str);
    printf("Enter Character and Replacement: ");
    scanf("%c %c", &ch, &rep);
    for(i = 0; i <= strlen(str); i++)
    {
        if(tolower(str[i]) == tolower(ch) && flag == 0)
        {
            flag = 1;
            str[i] = rep;
        }
        printf("%c", str[i]);
    }
}