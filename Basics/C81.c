#include <stdio.h>
#include <string.h>

int occur(const char *str, const char *word)
{
    int strLen = strlen(str);
    int wordLen = strlen(word);
    int count = 0;

    for (int i = 0; i <= strLen - wordLen; i++)
    {
        int j;
        for (j = 0; j < wordLen; j++)
        {
            if (str[i + j] != word[j])
                break;
        }

        if (j == wordLen)
            count++;
    }

    return count;
}

int main()
{
    char str[1000];
    char word[100];

    printf("Enter a string: ");
    gets(str);

    printf("Enter the word to count: ");
    scanf("%s", word);

    int result = occur(str, word);

    printf("Occurrences of '%s' in the string: %d\n", word, result);
}
