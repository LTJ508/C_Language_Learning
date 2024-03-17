#include <iostream>
using namespace std;

int sumOfDigits(int x)
{
    if(x < 10) return x;

    return (x%10) + sumOfDigits(x/10);
}

int main()
{
    cout << "Enter a number: ";
    int number;
    cin >> number;

    cout << "Sum of Digit is: " << sumOfDigits(number) << endl;

    return 0;
}
