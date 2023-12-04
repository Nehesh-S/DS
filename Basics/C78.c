#include <stdio.h>
#include <string.h>

int find(const char *str, const char *word)
{
    int strLen = strlen(str);
    int wordLen = strlen(word);
    for (int i = 0; i <= strLen - wordLen; i++)
    {
        int j;
        for (j = 0; j < wordLen; j++)
        {
            if (str[i + j] != word[j])
                break;
        }
        if (j == wordLen)
            return i;
    }
    return -1;
}

int main() 
{
    char str[50];
    char word[10];
    printf("Enter a string: ");
    gets(str);
    printf("Enter the word to find: ");
    scanf("%s", word);
    int result = find(str, word);

    if (result != -1)
        printf("First occurrence of '%s' found at index %d\n", word, result);
    else
        printf("Word not found in the string.\n");
    return 0;
}
