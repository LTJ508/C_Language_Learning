#include <stdio.h>

int main()
{
    double num1, num2, result=0.0;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    getchar();

    printf("\nEnter Operator (Example: '+', '-', '*', '/'): ");
    scanf("%c", &op);

    switch(op)
    {
        case '+':
            result = num1 + num2;
        break;

        case '-':
            result = num1 - num2;
        break;

        case '*':
            result = num1 * num2;
        break;

        case '/':
            result = num1 / num2;
        break;
    }

    printf("\n%0.2lf %c %0.2lf = %0.2lf\n", num1, op, num2, result);

    return 0;
}
