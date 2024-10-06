#include <iostream>
using namespace std;

int main() {
    string studentName;
    cin >> studentName;

    double totalSumOfGrade = 0;
    int grade = 1;
    int fail = 0;

    while (grade <= 12) {
        double currentGrade;
        cin >> currentGrade;

        if (currentGrade < 4) {
            fail++;
            if (fail == 2) {
                break;
            }
            continue;
        }

        totalSumOfGrade += currentGrade;
        grade++;

    }

    double averageGrade = totalSumOfGrade / 12;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (grade > 12) {
        cout << studentName <<" graduated. Average grade: " << averageGrade << endl;
    } else {
        cout << studentName << " has been excluded at " << grade << " grade" << endl;
    }

    return 0;
}