#include <stdio.h>

int main()
{

    char cod1[5], cod2[5];
    int num1, num2;
    double val1, val2, total;
    scanf("%d %d %lf", cod1, &num1, &val1);
    scanf("%d %d %lf", cod2, &num2, &val2);
    total = (num1 * val1) + (num2 * val2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}