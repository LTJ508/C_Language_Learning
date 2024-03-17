#include <stdio.h>

int main()
{
    double num1, num2, sum, abs, mult, dev;
    printf("Please enter a number: ");
    scanf("%lf", &num1);

    printf("Please enter another number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;
    abs = num1 - num2;
    mult = num1 * num2;
    dev = num1 / num2;

    printf("%0.2lf + %0.2lf = %0.2lf\n", num1, num2, sum);
    printf("%0.2lf - %0.2lf = %0.2lf\n", num1, num2, abs);
    printf("%0.2lf * %0.2lf = %0.2lf\n", num1, num2, mult);
    printf("%0.2lf / %0.2lf = %0.2lf\n", num1, num2, dev);

    return 0;
}
