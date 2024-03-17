#include <stdio.h>

int main()
{
    double a, b, c, average;

    //taking input
    printf("Insert first number: ");
    scanf("%lf", &a);
    printf("Insert second number: ");
    scanf("%lf", &b);
    printf("Insert third number: ");
    scanf("%lf", &c);

    //calculating average and showing
    average = (a + b + c) / 3;
    printf("\nThe average is: %0.1lf\n", average);

    return 0;
}
