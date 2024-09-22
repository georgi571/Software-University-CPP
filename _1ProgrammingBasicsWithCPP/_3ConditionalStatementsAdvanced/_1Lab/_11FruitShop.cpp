#include <iostream>
using namespace std;

int main() {
    string fruit;
    cin >> fruit;

    string dayOfWeek;
    cin >> dayOfWeek;

    double quantity;
    cin >> quantity;

    double fruitPrice;
    if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday") {
        if (fruit == "banana") {
            fruitPrice = 2.50;
        } else if (fruit == "apple") {
            fruitPrice = 1.20;
        } else if (fruit == "orange") {
            fruitPrice = 0.85;
        } else if (fruit == "grapefruit") {
            fruitPrice = 1.45;
        } else if (fruit == "kiwi") {
            fruitPrice = 2.70;
        } else if (fruit == "pineapple") {
            fruitPrice = 5.50;
        } else if (fruit == "grapes") {
            fruitPrice = 3.85;
        } else {
            cout << "error" << endl;
            return 0;
        }
    } else if (dayOfWeek == "Saturday" || dayOfWeek == "Sunday") {
        if (fruit == "banana") {
            fruitPrice = 2.70;
        } else if (fruit == "apple") {
            fruitPrice = 1.25;
        } else if (fruit == "orange") {
            fruitPrice = 0.90;
        } else if (fruit == "grapefruit") {
            fruitPrice = 1.60;
        } else if (fruit == "kiwi") {
            fruitPrice = 3.00;
        } else if (fruit == "pineapple") {
            fruitPrice = 5.60;
        } else if (fruit == "grapes") {
            fruitPrice = 4.20;
        } else {
            cout << "error" << endl;
            return 0;
        }
    } else {
        cout << "error" << endl;
        return 0;
    }

    double sum = quantity * fruitPrice;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << sum << endl;

    return 0;
}
