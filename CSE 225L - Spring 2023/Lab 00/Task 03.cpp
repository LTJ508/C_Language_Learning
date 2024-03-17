/*
Take 2 integer inputs from keyboard and also ask the user for which operation to perform: ‘+’ or ‘-‘or ‘*’.
Perform the appropriate operation and show the result. (Hint: you can use switch/case)
*/

#include <iostream>

using namespace std;

int main()
{
    int number1, number2, result;
    char operation;

    cout << "Enter First Number: ";
    cin >> number1;

    cout << "Enter Second Number: ";
    cin >> number2;

    cout << "Enter Operation Sign(+,-,*,/): ";
    cin >> operation;

    switch(operation){
        case '+': result = number1 + number2;
            break;
        case '-': result = number1 - number2;
            break;
        case '*': result = number1 * number2;
            break;
        case '/': result = number1 / number2;
            break;
        default:
            cout << endl << "Wrong Operation Sign Entered!! Try Again..." << endl;
            return 0;
    }

    cout << endl << "Result: " << result << endl;

    return 0;
}
