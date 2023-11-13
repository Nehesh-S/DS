// WAP to remove all occurrences of a character from string. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20], ch;
    int i;
    printf("Enter String: ");
    gets(str);
    printf("Enter Character: ");
    scanf("%c", &ch);
    for(i = 0; i <= strlen(str); i++)
    {
        if(tolower(str[i]) == tolower(ch))
            continue;
            
        printf("%c", str[i]);
    }
}