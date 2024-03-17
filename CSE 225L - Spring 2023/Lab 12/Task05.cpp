#include <iostream>
using namespace std;

int DecToBin(int dec)
{
    if (dec == 0) return 0;
    else return DecToBin(dec / 2) * 10 + dec % 2;
}

int main()
{
    cout << "Enter a decimal number: ";
    int number;
    cin >> number;

    cout << "Binary number is: " << DecToBin(number) << endl;

    return 0;
}
