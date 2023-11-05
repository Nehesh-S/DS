// WAP to toggle case of each character of a string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char toggle(char ch)
{
    if (isupper(ch))
        return(tolower(ch));
    else if(islower(ch))
        return(toupper(ch));
    else
        return ch;
}

int main()
{
    char str[20];
    int i;
    printf("Enter String: ");
    gets(str);
    for(i = 0; i < strlen(str); i++)
        str[i] = toggle(str[i]);
    printf("Final String: %s", str);
}