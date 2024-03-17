#include <stdio.h>

int main()
{
    double x1, x2, y1, y2, midx, midy;

    printf("Please enter the Value of x1: ");
    scanf("%lf", &x1);
    printf("Please enter the Value of x2: ");
    scanf("%lf", &x2);
    printf("Please enter the Value of y1: ");
    scanf("%lf", &y1);
    printf("Please enter the Value of y2: ");
    scanf("%lf", &y2);

    midx = (x1 + x2) / 2;
    midy = (y1 + y2) / 2;

    printf("\nMidpoint is: \(%0.2lf, %0.2lf\)\n", midx, midy);

    return 0;
}
