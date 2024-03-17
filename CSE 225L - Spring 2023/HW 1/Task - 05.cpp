#include <iostream>
using namespace std;


// declaration file - Rectangle.h
template <class T>
class Rectangle {
    private:
        T length;
        T width;
    public:
        Rectangle();
        Rectangle(T, T);
        void setLength(T l);
        void setWidth(T w);
        T getLength();
        T getWidth();
        void print();
        double getArea();
        T getPerimeter();
};


// definition file - Rectangle.cpp
template <class T>
Rectangle<T>::Rectangle() {
    length = 1;
    width = 1;
}

template <class T>
Rectangle<T>::Rectangle(T l, T w) {
    length = l;
    width = w;
}

template <class T>
void Rectangle<T>::setLength(T l) {
    length = l;
}

template <class T>
void Rectangle<T>::setWidth(T w) {
    width = w;
}

template <class T>
T Rectangle<T>::getLength(){
    return length;
}

template <class T>
T Rectangle<T>::getWidth(){
    return width;
}

template <class T>
void Rectangle<T>::print() {
    cout << "Rectangle:\nLength: " << length << "\nWidth: " << width << "\nArea: " << getArea() << "\nPerimeter: " << getPerimeter() << endl;
}

template <class T>
double Rectangle<T>::getArea() {
    return (length * width);
}

template <class T>
T Rectangle<T>::getPerimeter(){
    return (2 * (length + width));
}


int main() {
    // create object 1
    Rectangle<double> r1(4.2, 5.3);

    // print object 1's info
    r1.print();

    cout << endl;

    // create object 2
    Rectangle<int> r2(4, 5);

    // print object 2's info
    r2.print();
    cout << endl;

    return 0;
}
