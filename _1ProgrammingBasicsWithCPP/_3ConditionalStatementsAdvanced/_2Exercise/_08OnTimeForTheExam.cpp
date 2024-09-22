#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int hourOfExam;
    cin >> hourOfExam;

    int minutesOfExam;
    cin >> minutesOfExam;

    int hourOfStudentCome;
    cin >> hourOfStudentCome;

    int minutesOfStudentCome;
    cin >> minutesOfStudentCome;

    int examMinutesStart = hourOfExam * 60 + minutesOfExam;
    int studentMinutesCome = hourOfStudentCome * 60 + minutesOfStudentCome;

    int timeDifference = examMinutesStart - studentMinutesCome;

    int hours = abs(timeDifference) / 60;
    int minutes = abs(timeDifference) % 60;

    string timing;

    if (timeDifference > 30) {
        cout << "Early" << endl;
        timing = "before the start";
    } else if (timeDifference >= 0) {
        cout << "On time" << endl;
        timing = "before the start";
    } else {
        cout << "Late" << endl;
        timing = "after the start";
    }

    if (hours > 0) {
        cout << hours << ":" << setw(2) << setfill('0') << minutes << " hours " << timing << endl;
    } else if (minutes > 0) {
        cout << minutes << " minutes " << timing << endl;
    }

    return 0;
}