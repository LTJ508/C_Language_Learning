/*
Using the new operator, allocate an integer array of user specified size (the user gives the size of the array as
input). Assign values to the array elements by taking user inputs and then print the values. Finally de-allocate the array
using the delete operator.
*/

#include <iostream>
using namespace std;

int main()
{
    int arraySize;

    cout << "Enter size of array: ";
    cin >> arraySize;

    int* nums = new int[arraySize];

    cout << endl;

    for(int i = 0; i < arraySize; i++){
        cout << "Enter " << (i+1) << "-th elements: ";
        cin >> nums[i];
    }

    cout << endl << "All array elements: " << endl;
    for(int i = 0; i < arraySize; i++){
        cout << nums[i] << " ";
    }

    cout << endl;

    delete[] nums;

    return 0;
}
