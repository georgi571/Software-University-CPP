#include <iostream>
using namespace std;

int main() {
    const int MILLILITERS_PER_BOTTLE = 750;
    const int MILLILITERS_PER_POT = 15;
    const int MILLILITERS_PER_PLATE = 5;
    int numberOfBottles;
    cin >> numberOfBottles;

    int totalMilliliters = numberOfBottles * MILLILITERS_PER_BOTTLE;

    string command;
    cin >> command;

    int counter = 1;

    int numberOfPots = 0;
    int numberOfPlates = 0;

    while (command != "End") {
        int numberToWash = stoi(command);

        int usingMilliliters = 0;
        if (counter % 3 == 0) {
            usingMilliliters = numberToWash * MILLILITERS_PER_POT;
            numberOfPots += numberToWash;
        } else {
            usingMilliliters = numberToWash * MILLILITERS_PER_PLATE;
            numberOfPlates += numberToWash;
        }

        counter++;

        totalMilliliters -= usingMilliliters;

        if (totalMilliliters < 0) {
            break;
        }

        cin >> command;
    }

    int diff = abs(totalMilliliters);

    if (totalMilliliters < 0) {
        cout << "Not enough detergent, " << diff << " ml. more necessary!" << endl;
    } else {
        cout << "Detergent was enough!" << endl;
        cout << numberOfPlates << " dishes and " << numberOfPots << " pots were washed." << endl;
        cout << "Leftover detergent " << diff << " ml." << endl;
    }

    return 0;
}
