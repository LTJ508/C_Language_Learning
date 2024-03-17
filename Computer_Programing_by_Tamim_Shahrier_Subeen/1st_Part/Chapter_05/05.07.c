#include<stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Please enter the temperature in Celsius: ");
    scanf("%lf", &celsius);

    farenheit = celsius * 1.8 + 32;

    printf("Temperature in Farenheit is: %0.2lf\n", farenheit);

    return 0;
}
