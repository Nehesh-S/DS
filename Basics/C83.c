#include <stdio.h>
#include <string.h>

void rem(char *str, const char *word)
{
    int strLen = strlen(str);
    int wordLen = strlen(word);

    for (int i = strLen - wordLen; i >= 0; i--)
    {
        int j;
        for (j = 0; j < wordLen; j++)
        {
            if (str[i + j] != word[j])
                break;
        }

        if (j == wordLen)
        {
            for (int k = i; k < strLen - wordLen; k++)
                str[k] = str[k + wordLen];
            
            str[strLen - wordLen] = '\0';
            return;
        }
    }
}

int main()
{
    char str[50];
    char word[10];

    printf("Enter a string: ");
    gets(str);

    printf("Enter the word to remove: ");
    scanf("%s", word);

    rem(str, word);

    printf("%s\n", str);
}
