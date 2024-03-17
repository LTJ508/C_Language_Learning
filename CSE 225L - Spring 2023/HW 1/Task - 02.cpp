/*
Write a program that reads two integers a, b from the user and prints all perfect numbers between them.
You must write a user-defined function int isPerfect(int x) that determines if a number is perfect or not.
[Hint: A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the
number itself. For instance, 6 has divisors 1, 2 and 3, and 1 + 2 + 3 = 6, so 6 is a perfect number.
*/

#include <iostream>
using namespace std;

int isPerfect(int x)
{
    int sum = 0;
    for(int i =1; i <= x/2; i++){
        if(x % i == 0){
            sum += i;
        }
    }

    if(sum == x && x > 0)
        return 1;
    else
        return 0;
}

int main()
{
    int minimum, maximum;

    cout << "Enter value of a: ";
    cin >> minimum;

    cout << "Enter value of b: ";
    cin >> maximum;

    cout << endl << "All Perfect Numbers between (" << minimum << "-" << maximum << "): " << endl;

    for(int i = minimum; i <= maximum; i++){
        if(isPerfect(i)){
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}


