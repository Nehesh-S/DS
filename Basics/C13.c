// WAP to find series of prime number till the Nth element

#include <stdio.h>

void main()
{
    int no, i, j, flag;
    printf("Enter Number: ");
    scanf("%d", &no);
    printf("List of Prime Numbers:\n");
    for(i = 2; i <= no; i++)
    {
	flag = 0;
	j = 2;
	do
	{
        if(i != 2)
        {
            if (i % j == 0)
            {
                flag++;
                break;
            }
        }
	    j++;
	} while(j < i);
	if (flag == 0)
	    printf("%d\n", i);
    }
}