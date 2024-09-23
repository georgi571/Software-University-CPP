#include <iostream>
using namespace std;

int main() {
    string fuel;
    cin >> fuel;

    int liters;
    cin >> liters;

    if (fuel == "Diesel") {
        if (liters >= 25) {
            cout << "You have enough diesel." << endl;
        } else {
            cout << "Fill your tank with diesel!" << endl;
        }
    } else if (fuel == "Gasoline") {
        if (liters >= 25) {
            cout << "You have enough gasoline." << endl;
        } else {
            cout << "Fill your tank with gasoline!" << endl;
        }
    } else if (fuel == "Gas") {
        if (liters >= 25) {
            cout << "You have enough gas." << endl;
        } else {
            cout << "Fill your tank with gas!" << endl;
        }
    } else {
        cout << "Invalid fuel!" << endl;
    }

    return 0;
}