#include <iostream>
using namespace std;

int fib(int n)
{
    if(n == 1) return 1;
    else if(n == 0) return 0;

    else return (fib(n-1) + fib(n-2));
}

int main()
{
    cout << "Enter a number: ";
    int number;
    cin >> number;

    cout << number << "th Fibonacci number is: " << fib(number) << endl;

    return 0;
}
