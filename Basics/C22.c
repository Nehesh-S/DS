// WAP to check whether an alphabet is vowel or consonant

#include <stdio.h>
#include <ctype.h>

void main()
{
    char ch, c;
    printf("Enter Alphabet: ");
    scanf("%c", &ch);
    if(isalpha(ch))
    {
        c = tolower(ch);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            printf("%c is a Vowel", ch);
        else
            printf("%c is a Consonant", ch);
    }
    else
        printf("%c is not an Alphabet", ch);
}