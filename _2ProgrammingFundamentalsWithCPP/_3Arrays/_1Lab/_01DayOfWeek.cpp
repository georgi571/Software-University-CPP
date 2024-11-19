#include <iostream>
using namespace std;

void printDayOfWeek(int day);

int main() {
    int day;
    cin >> day;

    printDayOfWeek(day);

    return 0;
}

void printDayOfWeek(int day) {
    constexpr int size = 7;

    const string daysOfWeek[size] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    if (day < 1 || day > 7) {
        cout << "Invalid day!" << endl;
        return;
    }

    cout << daysOfWeek[day - 1] << endl;
}