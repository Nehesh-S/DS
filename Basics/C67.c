// WAP to count occurrences of a character in given string

#include <stdio.h>
#include <string.h>

int main()
{
    char ch, str[20];
    int i, count = 0;
    printf("Enter String: ");
    gets(str);
    printf("Enter Character: ");
    scanf("%c", &ch);
    for(i = strlen(str) - 1; i >= 0 ; i--)
    {
        if(str[i] == ch)
            count++;
    }
    printf("%c occured %d times", ch, count);
}