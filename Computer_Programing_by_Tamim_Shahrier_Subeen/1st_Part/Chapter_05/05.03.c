#include <stdio.h>

int main()
{
    double a1,a2,b1,b2,c1,c2, x, y, d;

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

    d = a1*b2 - a2*b1;

    if(d == 0.0){
        printf("Value of x and y can not be determined.\n");
    }
    else{

    x = (b2*c1-b1*c2) / d;
    y = (a1*c2-a2*c1) / d;

    printf("Value of X: %0.2lf\nValue of Y: %0.2lf\n", x, y);
    }

    return 0;
}
