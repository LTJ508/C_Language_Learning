#include <stdio.h>

int main()
{
    int num1, num2, sum, abs, mult, dev;
    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    abs = num1 - num2;
    mult = num1 * num2;
    dev = num1 / num2;

    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, abs);
    printf("%d * %d = %d\n", num1, num2, mult);
    printf("%d / %d = %d\n", num1, num2, dev);

    return 0;
}
