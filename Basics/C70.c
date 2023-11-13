// WAP to count frequency of each character in a string. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20];
    int i, alpha[26] = {0}, tmp;
    printf("Enter String: ");
    gets(str);
    for(i = 0; i <= strlen(str); i++)
    {
        tmp = tolower(str[i]);
        if(isalpha(str[i]))
            alpha[tmp - 97]++;
    }
    for(i = 0; i < 26; i++)
    {
        if(alpha[i] != 0)
        {
            printf("%c occurres %d times\n", i+97, alpha[i]);
        }
    }
}