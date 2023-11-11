// WAP to reverse order of words in a given string

#include <stdio.h>
#include <string.h>

#define MAX 50

int main()
{
    char str[50], reverse[50];
    int len, i, index, start, end;

    printf("Enter string: ");
    gets(str);

    len   = strlen(str);
    index = 0;

    start = len - 1;
    end   = len - 1;

    while(start > 0)
    {
        if(str[start] == ' ')
        {
            for(i = start + 1; i <= end; i++)
            {
                reverse[index] = str[i];
                index++;
            }
            reverse[index++] = ' ';
            end = start - 1;
        }
        start--;
    }

    for(i = 0; i <= end; i++)
    {
        reverse[index] = str[i];
        index++;
    }

    reverse[index] = '\0'; 

    printf("Original string: \n%s\n", str);
    printf("Reverse string: \n%s", reverse);
}