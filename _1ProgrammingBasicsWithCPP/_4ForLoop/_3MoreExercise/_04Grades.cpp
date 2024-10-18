#include <iostream>
using namespace std;

int main() {

    int numberOfStudents;
    cin >> numberOfStudents;

    int poorScore = 0;
    int midScore = 0;
    int goodScore = 0;
    int excellentScore = 0;

    double totalScore = 0;

    for (int i = 0; i < numberOfStudents; i++) {
        double score;
        cin >> score;

        if (score < 3) {
            poorScore++;
        } else if (score < 4) {
            midScore++;
        } else if (score < 5) {
            goodScore++;
        } else {
            excellentScore++;
        }

        totalScore += score;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    double poorPercent = static_cast<double>(poorScore) / numberOfStudents * 100;
    double midPercent = static_cast<double>(midScore) / numberOfStudents * 100;
    double goodPercent = static_cast<double>(goodScore) / numberOfStudents * 100;
    double excellentPercent = static_cast<double>(excellentScore) / numberOfStudents * 100;

    double averageGrade = totalScore / numberOfStudents;

    cout << "Top students: " << excellentPercent << "%" << endl;
    cout << "Between 4.00 and 4.99: " << goodPercent << "%" << endl;
    cout << "Between 3.00 and 3.99: " << midPercent << "%" << endl;
    cout << "Fail: " << poorPercent << "%" << endl;
    cout << "Average: " << averageGrade << endl;

    return 0;
}