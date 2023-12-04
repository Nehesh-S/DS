#include <stdio.h>
#include <string.h>

void find(const char *str, const char *word)
{
    int strLen = strlen(str);
    int wordLen = strlen(word);
    int found = 0;

    for (int i = 0; i <= strLen - wordLen; i++)
    {
        int j;
        for (j = 0; j < wordLen; j++)
        {
            if (str[i + j] != word[j])
                break;
        }

        if (j == wordLen)
        {
            printf("Word found at index %d\n", i);
            found = 1;
        }
    }

    if (!found)
        printf("Word not found in the string.\n");
}

int main() {
    char str[50];
    char word[10];

    printf("Enter a string: ");
    gets(str);

    printf("Enter the word to find: ");
    scanf("%s", word);

    printf("Occurrences of '%s':\n", word);
    find(str, word);
}
