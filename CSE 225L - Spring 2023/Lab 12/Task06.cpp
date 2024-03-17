#include <iostream>
#include <cmath>
using namespace std;

double sumOfSeries(int n)
{
    if (n == 0) return 1;
    else return (1.0 / pow(2, n)) + sumOfSeries(n - 1);
}

int main()
{
    cout << "Enter value of n: ";
    int n;
    cin >> n;

    cout << "Sum of the series for n = " << n << " is: " << sumOfSeries(n) << endl;

    return 0;
}
