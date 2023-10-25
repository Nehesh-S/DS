// WAP to find net salary of employee

#include <stdio.h>

void main()
{
    double salary, net, hra, da, ta, pf;
    printf("Enter Basic Salary:\n");
    scanf("%lf", &salary);
    hra = 40 * salary / 100;
    da = 90 * salary / 100;
    ta = 20 * salary / 100;
    pf = 25 * salary / 100;
    net = (salary + hra + da + ta - pf);
    printf("Net Salary:\n%lf", net);
}