#include <iostream>
using namespace std;

int findMin(int a[], int size)
{
    if (size == 1) return a[0];
    else return min(a[size - 1], findMin(a, size - 1));
}

int main()
{
    cout << "Enter array size: ";
    int size;
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " item with space: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Minimum number in array: " << findMin(arr, size) << endl;

    return 0;
}
