#include<stdio.h>

int main()

{
    double celsius, farenheit;

    printf("Please the Temperature in Farenheit: ");
    scanf("%lf", &farenheit);

    celsius = (farenheit - 32) / 1.8;

    printf("Temperature in Celsius is: %0.2lf\n", celsius);

    return 0;
}
