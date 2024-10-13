#include <iostream>
using namespace std;

int main() {
    string command;
    cin >> command;

    while (command != "End") {
        string name = command;
        double neededSum;
        cin >> neededSum;

        double currentSum = 0.0;

        while (currentSum < neededSum) {
            double money;
            cin >> money;
            currentSum += money;
        }
        cout << "Going to " << name << "!" << endl;
        cin >> command;
    }

    return 0;
}
