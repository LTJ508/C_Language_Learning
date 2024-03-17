#include <stdio.h>

int main()
{
    double x, y, x_plus_y, x_minus_y;

    printf("Please enter the value of X + Y: ");
    scanf("%lf", &x_plus_y);

    printf("Please enter the value of X - Y: ");
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y)/2;
    y = (x_plus_y - x_minus_y)/2;

    printf("Value of X: %0.2lf\nValue of Y: %0.2lf\n", x, y);

    return 0;
}
