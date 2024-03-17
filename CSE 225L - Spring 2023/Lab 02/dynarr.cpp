#include "dynarr.h"
#include <iostream>
using namespace std;

dynArr::dynArr(){
    data = NULL;
    row = 0;
    column = 0;
}

dynArr::dynArr(int r, int c){
    data = new int[r*c];
    row = r;
    column = c;
}

dynArr::~dynArr(){
    delete [] data;
}

int dynArr::getValue(int r, int c){
    return *(data + r * column + c);
}

void dynArr::setValue(int r, int c, int value){
    *(data + r * column + c) = value;
}

void dynArr::allocate(int r, int c){
    delete[] data;
    data = new int[r*c];
    row = r;
    column = c;
}
