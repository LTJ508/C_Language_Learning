#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

#include <string>
using namespace std;

class studentInfo{
private:
    int id;
    string name;
    double cgpa;
public:
    studentInfo(int, string, double);
    void print();
};

#endif // STUDENTINFO_H_INCLUDED
