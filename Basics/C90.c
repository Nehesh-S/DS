#include <stdio.h>

float salary(float ctc)
{
    float hra, da, ta, pf, ihs;

    hra = 0.4 * ctc;
    da = 0.9 * ctc;
    ta = 0.2 * ctc;
    pf = 0.25 * ctc;

    ihs = ctc + hra + da + ta - pf;

    return ihs;
}

int main()
{
    float ctc;
    printf("Enter the basic salary: $");
    scanf("%f", &ctc);

    printf("Net Salary: %.2f\n", salary(ctc));
}
