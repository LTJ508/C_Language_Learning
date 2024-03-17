#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0) return 1;

    return (n * factorial(n-1));
}

int main()
{
    cout << "Enter a number: ";
    int number;
    cin >> number;

    cout << "Factorial is: " << factorial(number) << endl;

    return 0;
}
