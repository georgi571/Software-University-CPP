#include <iostream>
using namespace std;

int main() {
    string dayOfWeek;
    cin >> dayOfWeek;

    int price;
    if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Friday") {
        price = 12;
    } else if (dayOfWeek == "Wednesday" || dayOfWeek == "Thursday") {
        price = 14;
    } else if (dayOfWeek == "Saturday" || dayOfWeek == "Sunday") {
        price = 16;
    }

    cout << price << endl;

    return 0;
}
