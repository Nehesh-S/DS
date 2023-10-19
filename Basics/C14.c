// WAP  to find entered number is Armstrong or not

#include <stdio.h>

void main()
{
    int no, tmp, rem, res = 0;
    printf("Enter Number: ");
    scanf("%d", &no);
    tmp = no;
    while(tmp != 0)
    {
        rem = tmp % 10;
        res = res + (rem * rem * rem);
        tmp = tmp / 10;
    }
    if (res == no)
        printf("%d is Amstrong Number", no);
    else
        printf("%d is Not Amstrong Number", no);
}