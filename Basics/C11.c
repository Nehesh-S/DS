// WAP to find series of factorial number till the Nth element

#include <stdio.h>

void main()
{
    int no, i, fact, j;
    printf("Enter Number: ");
    scanf("%d", &no);
    for(i = 0; i <= no; i++)
    {
        fact = 1;
        for(j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
	    printf("%d! = %d\n", i, fact);
    }
}