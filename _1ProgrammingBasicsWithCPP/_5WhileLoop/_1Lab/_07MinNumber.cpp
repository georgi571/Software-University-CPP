#include <iostream>
#include <climits>
using namespace std;

int main() {
    string input;
    cin >> input;

    int lowestNumber = INT_MAX;

    while (input != "Stop") {
        int number = stoi(input);

        if (number < lowestNumber) {
            lowestNumber = number;
        }

        cin >> input;
    }

    cout << lowestNumber << endl;

    return 0;
}