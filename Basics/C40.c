// WAP to find number of elements are palindrome in given array

#include <stdio.h>

#define MAX 10

int palindrome(int no)
{
    int rev = 0, rem, tmp;
    tmp = no;
    while(no != 0)
    {
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;
    }
    if(tmp == rev)
        return 0;
    else
        return -1;
}

int main()
{
    int record[MAX], i, pal = 0;
    printf("Enter 10 Elements:\n");
    for(i = 0; i < MAX; i++)
    {
        scanf("%d", &record[i]);
        if(palindrome(record[i]) == 0)
            pal++;
    }
    printf("%d elements are palindrome\n", pal);
}