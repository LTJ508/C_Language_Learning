#include <iostream>
using namespace std;

//header
template <class T>
class dynArr{
private:
    T *data;
    int row;
    int column;
public:
    dynArr();
    dynArr(int, int);
    ~dynArr();
    void setValue(int, int, T);
    T getValue(int, int);
    void allocate(int, int);
};


//implementation
template <class T>
dynArr<T>::dynArr(){
    data = NULL;
    row = 0;
    column = 0;
}

template <class T>
dynArr<T>::dynArr(int r, int c){
    data = new T[r*c];
    row = r;
    column = c;
}

template <class T>
dynArr<T>::~dynArr(){
    delete[] data;
}

template <class T>
T dynArr<T>::getValue(int r, int c){
    return *(data + r * column + c);
}

template <class T>
void dynArr<T>::setValue(int r, int c, T value){
    *(data + r * column + c) = value;
}

template <class T>
void dynArr<T>::allocate(int r, int c){
    delete[] data;
    data = new T[r*c];
    row = r;
    column = c;
}


//main
int main()
{
    int row, column, temp;

    cout << "Enter row size: ";
    cin >> row;

    cout << "Enter column size: ";
    cin >> column;

    //declaration with integer type
    dynArr<int> object1(row, column);

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
