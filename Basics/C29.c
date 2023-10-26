// Menu driven program for 
//      1. Check number is even or odd
//      2. Check number is prime or not
//      3. Check number is palindrome or not

#include <stdio.h>

void even_odd()
{
    int no;
    printf("Enter Number: ");
    scanf("%d", &no);
    if (no % 2 == 0)
        printf("%d is Even Number\n", no);
    else
        printf("%d is Odd Number\n", no);
}

void chk_prime()
{
    int i, no;
    printf("Enter Number: ");
    scanf("%d", &no);
    for(i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            printf("%d is Composite Number\n", no);
            return;
        }
    }
    printf("%d is Prime Number\n", no);
}

void palindrome()
{
    int no, rev = 0, rem, tmp;
    printf("Enter Number: ");
    scanf("%d", &no);
    tmp = no;
    while(no != 0)
    {
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;
    }
    if(tmp == rev)
        printf("%d is Palindrome\n", tmp);
    else
        printf("%d is Not Palindrome\n", tmp);
}

void main()
{
    char c;
    printf("Select Operation:\n 1. Check number is even or odd\n 2. Check number is prime or not\n 3. Check number is palindrome or not\n");
    printf("Operation: ");
    scanf("%c", &c);
    switch(c)
    {
        case '1':
            even_odd();
            break;

        case '2':
            chk_prime();
            break;

        case '3':
            palindrome();
            break;
    }
}