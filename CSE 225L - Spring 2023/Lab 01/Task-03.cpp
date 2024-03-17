/*
Using the new operator, allocate a two dimensional integer array. The number of rows and columns are going
to be provided by the user as input. However, in this task, all of the rows are not the same size (the array is uneven).
The user will specify how many elements the individual rows will have. Assign values to the array elements by taking
user inputs and then print the values. Finally de-allocate the array using the delete operator.
*/

#include <iostream>
using namespace std;

int main()
{
    int row;

    cout << "Enter row size: ";
    cin >> row;

    int column[row];

    for(int i = 0; i < row; i++){
        cout << "Enter column size for row-" << (i+1) << ": ";
        cin >> column[i];
    }

    int** nums2d = new int*[row];

    for(int i = 0; i < row; i++){
        nums2d[i] = new int[column[i]];
    }

    cout << endl << "Now enter all elements: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column[i]; j++){
            cout << "Enter elements of (" << (i+1) << ", " << (j+1) << "): ";
            cin >> nums2d[i][j];
        }
    }

    cout << endl << "All elements in matrix formate: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column[i]; j++){
            cout << nums2d[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    delete[] nums2d;

    return 0;
}
