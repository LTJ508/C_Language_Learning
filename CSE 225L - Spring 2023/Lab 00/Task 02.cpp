/*
Take an integer from keyboard and find its factorial.
*/

#include <iostream>

using namespace std;

int main()
{
    int number, fact = 1, i;

    cout << "Enter a Number: ";
    cin >> number;

    for(i = 1; i <= number; i++){
        fact *= i;
    }

    cout << endl << "Factorial of " << number << " is: " << fact << endl;

    return 0;
}

