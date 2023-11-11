// WAP to find lowest frequency character in a string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20];
    int i, alpha[26] = {0}, tmp, low;
    printf("Enter String: ");
    gets(str);
    for(i = 0; i <= strlen(str); i++)
    {
        tmp = tolower(str[i]);
        if(isalpha(str[i]))
            alpha[tmp - 97]++;
    }
    tmp = alpha[0];
    low = 0;
    for(i = 0; i < 26; i++)
    {
        if(alpha[i] < tmp && alpha[i] != 0)
        {
            tmp = alpha[i];
            low = i;
        }
    }
    printf("%c occurres the least", low+97);
}