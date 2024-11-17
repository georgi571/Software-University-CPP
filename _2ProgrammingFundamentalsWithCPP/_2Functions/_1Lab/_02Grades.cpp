#include <iostream>
using namespace std;

void printGrade(double grade);

int main() {
    double grade;
    cin >> grade;

    printGrade(grade);
    return 0;
}

void printGrade(double grade) {
    if (grade < 3.00) {
        cout << "Fail" << endl;
    } else if (grade < 3.50) {
        cout << "Poor" << endl;
    } else if (grade < 4.50) {
        cout << "Good" << endl;
    } else if (grade < 5.50) {
        cout << "Very good" << endl;
    } else {
        cout << "Excellent" << endl;
    }
}