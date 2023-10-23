// WAP to find series of palindrome till Nth element

#include <stdio.h>

void chk_palindrome(int x)
{
    int rev = 0, rem, tmp;
    tmp = x;
    while(x != 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }
    if(tmp == rev)
        printf("%d\n", tmp);
}

void main()
{
    int no, i;
    printf("Enter Number: ");
    scanf("%d", &no);
    printf("List of Palindrome Elements:\n");
    for(i = 1; i <= no; i++)
    {
        chk_palindrome(i);
    }
}