#include <stdio.h>

int main()
{
    double celsius, fahrenheit;

    //taking input from user
    printf("Please enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    //converting into Fahrenheit
    fahrenheit = celsius * (9.0/5.0) + 32;

    //showing Fahrenheit
    printf("The temperature in Fahrenheit is: %0.2lf\n", fahrenheit);

    return 0;
}
