#include <stdio.h>
#include <string.h>

void rem(char str[], char word[])
{
    char *ptr = strstr(str, word);
    
    while (ptr != NULL)
    {
        memmove(ptr, ptr + strlen(word), strlen(ptr + strlen(word)) + 1);
        ptr = strstr(ptr, word);
    }
}

int main()
{
    char input[50], word[10];
    printf("Enter a string: ");
    gets(input);
    printf("Enter the word to remove: ");
    gets(word);
    rem(input, word);
    printf("%s\n", input);
}
