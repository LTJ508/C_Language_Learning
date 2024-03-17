#include <iostream>
using namespace std;

//header
template <class T>
class dynArr{
private:
    T *data;
    int size;
public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int, T);
    T getValue(int);
    void allocate(int s);
};

//implementation
template <class T>
dynArr<T>::dynArr(){
    data = NULL;
    size = 0;
}

template <class T>
dynArr<T>::dynArr(int s){
    data = new T[s];
    size = s;
}

template <class T>
dynArr<T>::~dynArr(){
    delete [] data;
}

template <class T>
T dynArr<T>::getValue(int index){
    return data[index];
}

template <class T>
void dynArr<T>::setValue(int index, T value){
    data[index] = value;
}

template <class T>
void dynArr<T>::allocate(int s){
    delete[] data;
    data = new T[s];
    size = s;
}

//main
int main()
{
    dynArr<int> obj1;
    dynArr<double> obj2(5);

    double num;

    cout << "Enter elements for obj2: " << endl;

    for(int i = 0; i < 5; i++){
        cout << "Enter " << (i+1) << "-th number: ";
        cin >> num;
        obj2.setValue(i, num);
    }

    cout << endl << endl << "Elements of 2nd Object: " << endl;

    for(int i = 0; i < 5; i++){
        cout << obj2.getValue(i) << " ";
    }

    cout << endl;

    obj1.allocate(5);
    obj2.allocate(10);


    cout << endl << endl << "Enter elements for obj1: " << endl;

    for(int i = 0; i < 5; i++){
        cout << "Enter " << (i+1) << "-th number: ";
        cin >> num;
        obj1.setValue(i, num);
    }

    cout << endl << endl << "Elements of 1st Object: " << endl;

    for(int i = 0; i < 5; i++){
        cout << obj1.getValue(i) << " ";
    }

    return 0;
}

