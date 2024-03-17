#include "studentinfo.h"

studentInfo::studentInfo(int i, string n, double c){
    id = i;
    name = n;
    cgpa = c;
}

void studentInfo::print(){
    //cout << id << ", " << name << ", " << cgpa << endl;
}
