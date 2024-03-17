#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, temp, result1, result2;

    printf("Please enter the value of a: ");
    scanf("%lf", &a);
    printf("Please enter the value of b: ");
    scanf("%lf", &b);
    printf("Please enter the value of c: ");
    scanf("%lf", &c);

    temp = sqrt(b*b - 4 * a * c);

    result1 = (-b + temp)/ (2 * a);
    result2 = (-b - temp)/ (2 * a);

    printf("1st Result is: %0.2lf\n", result1);
    printf("2nd Result is: %0.2lf\n", result2);

    return 0;

}
