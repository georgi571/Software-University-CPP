#include <iostream>
using namespace std;

int main() {
    int neededSum;
    cin >> neededSum;

    int sumOfPayWithCash = 0;
    int sumOfPayWithCard = 0;

    int peoplePayWithCash = 0;
    int peoplePayWithCard = 0;

    int collectSum = 0;
    int counter = 1;

    string command;
    cin >> command;

    while (command != "End") {
        int amount = stoi(command);

        if (counter % 2 == 0) {
            if (amount > 10) {
                collectSum += amount;
                sumOfPayWithCard += amount;
                peoplePayWithCard++;
                cout << "Product sold!" << endl;
            } else {
                cout << "Error in transaction!" << endl;
            }
        } else {
            if (amount <= 100) {
                collectSum += amount;
                sumOfPayWithCash += amount;
                peoplePayWithCash++;
                cout << "Product sold!" << endl;
            } else {
                cout << "Error in transaction!" << endl;
            }
        }

        if (collectSum >= neededSum) {
            break;
        }

        counter++;
        cin >> command;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (collectSum < neededSum) {
        cout << "Failed to collect required money for charity." << endl;
    } else {
        double averageCS = static_cast<double>(sumOfPayWithCash) / peoplePayWithCash;
        double averageCC = static_cast<double>(sumOfPayWithCard) / peoplePayWithCard;
        cout << "Average CS: " << averageCS << endl;
        cout << "Average CC: " << averageCC << endl;
    }

    return 0;
}