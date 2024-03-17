/*
Write down a program that reads credit hours and earned grade points for N courses and prints the final
CGPA for that semester. You must use the concepts of dynamic memory allocation and array to implement
the logic here.
*/

#include <iostream>
using namespace std;

int main()
{
    int numberOfCourses;
    double totalCredit, totalGradePoint;

    cout << "Enter total course number: ";
    cin >> numberOfCourses;

    double* creditHours = new double[numberOfCourses];
    double* gradePoints = new double[numberOfCourses];

    cout << endl;

    for(int i = 0; i < numberOfCourses; i++){
        cout << "For " << (i+1) << "-th Course:" << endl;
        cout << "Enter Credit Hours: ";
        cin >> creditHours[i];
        totalCredit += creditHours[i];
        cout << "Enter Grade Points(Max 4.00): ";
        cin >> gradePoints[i];
        totalGradePoint += (gradePoints[i] * creditHours[i]);
    }

    printf("\n\nCGPA: %.2f\n\n", (totalGradePoint / totalCredit));

    delete[] creditHours;
    delete[] gradePoints;

    return 0;
}
