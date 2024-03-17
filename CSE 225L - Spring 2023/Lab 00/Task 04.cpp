/*
Write a function isPrime(int n) which checks if 'n' is prime or not. Use this function to print all the prime
numbers between 300 to 500.
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;
    for(int i = 3; i <= sqrt(n); i+=2){
        if(n%i == 0) return false;
    }
    return true;
}

int main()
{
    cout << "Prime numbers between 300 to 500:" << endl;
    for(int i = 300; i <= 500; i++){
        if(isPrime(i)){
            cout << i << ", ";
        }
    }

    return 0;
}
