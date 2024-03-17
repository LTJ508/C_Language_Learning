/*
Using the new operator, allocate a two dimensional character array. Again the number of rows and columns
are going to be provided by the user as input. All of the rows are the same size. Take character strings as input from
the user and then print the strings. Finally de-allocate the array using the delete operator.
*/

#include <iostream>
using namespace std;

int main()
{
    int row, column;

    cout << "Enter row size: ";
    cin >> row;

    cout << "Enter column Size: ";
    cin >> column;

    char* char2d = new char[row*column];

    cout << endl << "Enter all elements(" << row << ", " << column << "): " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << "Enter elements of (" << (i+1) << ", " << (j+1) << "): ";
            cin >> *(char2d + i * column + j);
        }
    }

    cout << endl << "All elements in matrix formate: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << *(char2d + i * column + j) << " ";
        }
        cout << endl;
    }

    cout << endl;

    delete[] char2d;

    return 0;
}
