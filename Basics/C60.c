// WAP to count total number of words in a string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20];
    int i, words = 0;
    printf("Enter String: ");
    gets(str);
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ')
            words++;
    }
    printf("Number of Words: %d", words);
}