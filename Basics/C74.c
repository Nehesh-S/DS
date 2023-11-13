// WAP to remove all repeated characters from a given string. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20], cur, last;
    int i;
    printf("Enter String: ");
    gets(str);
    for(i = 0; i <= strlen(str); i++)
    {
        last = cur;
        cur = str[i];
        if(tolower(cur) == tolower(last))
            continue;
            
        printf("%c", str[i]);
    }
}