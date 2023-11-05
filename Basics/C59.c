// WAP to count total number of vowels and consonants in a string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20];
    int i, vowels = 0, consonants = 0;
    printf("Enter String: ");
    gets(str);
    for(i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
        if(isalpha(str[i]))
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d\nConsonants: %d", vowels, consonants);
}