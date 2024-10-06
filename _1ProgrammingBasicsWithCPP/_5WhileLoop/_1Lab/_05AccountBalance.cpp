#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;

    double total = 0.00;

    cout.setf(ios::fixed);
    cout.precision(2);
    while (input != "NoMoreMoney") {
        double money = stod(input);

        if (money < 0) {
            cout << "Invalid operation!" << endl;
            break;
        }

        total += money;
        cout << "Increase: " << money << endl;

        cin >> input;
    }

    cout << "Total: " << total << endl;

    return 0;
}