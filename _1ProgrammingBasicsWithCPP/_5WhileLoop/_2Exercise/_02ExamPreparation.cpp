#include <iostream>
using namespace std;

int main() {
    int countPoorGrades;
    cin >> countPoorGrades;

    cin.ignore();

    string input;
    getline(cin, input);

    int countCurrentPoorGrades = 0;
    int numberOfProblems = 0;
    double sumOfGrades = 0;
    string lastProblem;

    while (input != "Enough") {
        lastProblem = input;
        double grade;
        cin >> grade;

        if (grade <= 4) {
            countCurrentPoorGrades++;
            if (countCurrentPoorGrades == countPoorGrades) {
                break;
            }
        }

        numberOfProblems++;
        sumOfGrades += grade;

        cin.ignore();
        getline(cin, input);
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (countCurrentPoorGrades == countPoorGrades) {
        cout << "You need a break, " << countCurrentPoorGrades << " poor grades." << endl;
    } else {
        double average = sumOfGrades / numberOfProblems;
        cout << "Average score: " << average << endl;
        cout << "Number of problems: " << numberOfProblems << endl;
        cout << "Last problem: " << lastProblem << endl;
    }

    return 0;
}