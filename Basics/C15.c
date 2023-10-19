// WAP to find series of Armstrong number till the Nth element

#include <stdio.h>

void main()
{
    int no, i, rem, tmp;
    long int res;
    printf("Enter Number: ");
    scanf("%d", &no);
    printf("List of Amstrong Numbers:\n");
    for (i = 0; i <= no; i++)
    {
        tmp = i;
        res = 0;
        while(tmp != 0)
        {
            rem = tmp % 10;
            res = res + (rem * rem * rem);
            tmp = tmp / 10;
        }
        if (res == i)
	    printf("%d\n", i);
    }
}