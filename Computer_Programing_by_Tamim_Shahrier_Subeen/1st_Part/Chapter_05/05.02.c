#include <stdio.h>

int main()
{
    double a1,a2,b1,b2,c1,c2, x, y;

    printf("Please enter the value of a1, a2, b1, b2, c1, c2 like this: \na1X + b1Y = c1\na2X + b2Y = c2\n");

    printf("a1: ");
    scanf("%lf", &a1);

    printf("a2: ");
    scanf("%lf", &a2);

    printf("b1: ");
    scanf("%lf", &b1);

    printf("b2: ");
    scanf("%lf", &b2);

    printf("c1: ");
    scanf("%lf", &c1);

    printf("c2: ");
    scanf("%lf", &c2);

    x = (b2*c1-b1*c2) / (a1*b2-a2*b1);
    y = (a1*c2-a2*c1) / (a1*b2-a2*b1);

    printf("Value of X: %0.2lf\nValue of Y: %0.2lf\n", x, y);

    return 0;
}
