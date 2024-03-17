#include <iostream>
#include <cmath>
using namespace std;


// declaration file Complex.h
class Complex{
private:
    double real;
    double imaginary;
public:
    Complex();
    Complex(double, double);
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    Complex operator/(Complex);
    bool isEqual(Complex);
    double getModulus();
    void print();
};

// definition file Complex.cpp
Complex::Complex(){
    real = 0;
    imaginary = 0;
}

Complex::Complex(double r, double i){
    real = r;
    imaginary = i;
}

Complex Complex::operator+(Complex a){
    Complex t;
    t.real = real + a.real;
    t.imaginary = imaginary + a.imaginary;
    return t;
}

Complex Complex::operator-(Complex a){
    Complex t;
    t.real = real - a.real;
    t.imaginary = imaginary - a.imaginary;
    return t;
}

Complex Complex::operator*(Complex a){
    Complex t;
    t.real = (real * a.real) - (imaginary * a.imaginary);
    t.imaginary = (real * a.imaginary) + (imaginary * a.real);
    return t;
}

Complex Complex::operator/(Complex a){
    Complex t;
    t.real = (real * a.real + imaginary * a.imaginary) / (a.real * a.real + a.imaginary * a.imaginary);
    t.imaginary = (imaginary * a.real - real * a.imaginary) / (a.real * a.real + a.imaginary * a.imaginary);
    return t;
}

bool Complex::isEqual(Complex a){
    return (real == a.real && imaginary == a.imaginary);
}

double Complex::getModulus(){
    return sqrt(real * real + imaginary * imaginary);
}

void Complex::print(){
    cout << "Real: " << real << endl;
    cout << "Imaginary: " << imaginary << endl;
}


//Driver file main
int main()
{
    Complex c1(2, 3);
    Complex c2(4, -5);

    cout << "Modulus of c1: " << c1.getModulus() << endl;
    c1.print();

    cout << endl ;

    cout << "Modulus of c2: " << c2.getModulus() << endl;
    c2.print();

    cout << endl;

    Complex temp;

    cout << "Addition of (c1 + c2): " << endl;
    temp = c1 + c2;
    temp.print();
    cout << "Modulus: " << temp.getModulus() << endl << endl;

    cout << "Substraction of (c1 - c2): " << endl;
    temp = c1 - c2;
    temp.print();
    cout << "Modulus: " << temp.getModulus() << endl << endl;

    cout << "Multiplication of (c1 * c2): " << endl;
    temp = c1 * c2;
    temp.print();
    cout << "Modulus: " << temp.getModulus() << endl << endl;

    cout << "Division of (c1 / c2): " << endl;
    temp = c1 / c2;
    temp.print();
    cout << "Modulus: " << temp.getModulus() << endl << endl;

    cout << "c1 isEqual to c2? " << endl;

    if(c1.isEqual(c2) == 1){
        cout << "True" << endl << endl;
    }
    else{
        cout << "False" << endl << endl;
    }

    return 0;
}
