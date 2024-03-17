#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    int row, column, temp;

    cout << "Enter row size: ";
    cin >> row;

    cout << "Enter column size: ";
    cin >> column;

    dynArr object1(row, column);

    cout << endl << "Enter all elements(" << row << ", " << column << "): " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << "Enter elements of (" << (i+1) << ", " << (j+1) << "): ";
            cin >> temp;
            object1.setValue(i, j, temp);
        }
    }

    cout << endl << "All elements in matrix formate: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << object1.getValue(i, j) << " ";
        }
        cout << endl;
    }

    object1.~dynArr();

    cout << endl;

    return 0;
}
