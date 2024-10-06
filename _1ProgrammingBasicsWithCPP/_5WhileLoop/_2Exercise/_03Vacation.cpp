#include <iostream>
using namespace std;

int main() {
    double neededMoney;
    cin >> neededMoney;

    double currentMoney;
    cin >> currentMoney;

    int counterSpendDays = 0;
    int daysCounter = 0;

    while (currentMoney < neededMoney) {
        string action;
        cin >> action;

        double amount;
        cin >> amount;

        daysCounter++;

        if (action == "save") {
            currentMoney += amount;
            counterSpendDays = 0;
        } else if (action == "spend") {
            currentMoney -= amount;
            if (currentMoney < 0) {
                currentMoney = 0;
            }
            counterSpendDays++;
            if (counterSpendDays == 5) {
                break;
            }
        }
    }

    if (counterSpendDays == 5) {
        cout << "You can't save the money." << endl;
        cout << daysCounter << endl;
    } else {
        cout << "You saved the money for "<< daysCounter << " days." << endl;
    }

    return 0;
}