#include <iostream>
#include <set>
#include <sstream>
using namespace std;

int main() {

    set<string> carNumbers;

    while (true) {
        string command;
        cin >> command;

        if (command == "END") {
            break;
        }

        string carNumber;
        cin >> carNumber;

        if (command == "IN,") {
            carNumbers.insert(carNumber);
        } else if (command == "OUT,") {
            carNumbers.erase(carNumber);
        }
    }

    if (carNumbers.empty()) {
        cout << "Parking Lot is Empty" << endl;
    } else {
        for (auto car : carNumbers) {
            cout << car << endl;
        }
    }

    return 0;
}
