#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hours;
    cin >> hours;

    int minutes;
    cin >> minutes;

    minutes += 15;

    if (minutes >= 60) {
        hours++;
        minutes -= 60;

        if (hours >= 24) {
            hours -= 24;
        }
    }

    cout << hours << ":" << setw(2) << setfill('0') << minutes << endl;

    return 0;
}