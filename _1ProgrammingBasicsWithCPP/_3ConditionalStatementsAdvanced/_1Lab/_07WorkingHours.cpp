#include <iostream>
using namespace std;

int main() {
    int hours;
    cin >> hours;

    string day;
    cin >> day;

    string output;
    if (hours >= 10 && hours <= 18) {
        if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday") {
            output = "open";
        } else {
            output = "closed";
        }
    } else {
        output = "closed";
    }

    cout << output << endl;

    return 0;
}
