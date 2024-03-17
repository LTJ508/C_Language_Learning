/*
Write a program that reads the radius of a circle from the user and prints its area and perimeter using the
following formula and format the output (up to 2 decimal points).
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double radius, area, perimeter;

    cout << "Enter radius of a circle: ";
    cin >> radius;

    area = M_PI * radius * radius;
    perimeter = 2.0 * M_PI * radius;

    printf("Area: %.2f\nPerimeter: %.2f\n", area, perimeter);

    return 0;

}
