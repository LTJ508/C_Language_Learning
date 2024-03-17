#include <stdio.h>
#include <math.h>

int main()
{
    double base, height, hypotenuse;

    printf("For a right angle triangle:\nEnter the value of Base: ");
    scanf("%lf", &base);
    printf("Enter the value of height: ");
    scanf("%lf", &height);

    hypotenuse = sqrt(pow(base,2) + pow(height,2));

    printf("\nHypotenuse is: %0.2lf\n", hypotenuse);

    return 0;
}
