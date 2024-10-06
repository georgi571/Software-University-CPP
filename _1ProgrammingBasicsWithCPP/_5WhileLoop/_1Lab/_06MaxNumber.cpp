#include <iostream>
#include <climits>
using namespace std;

int main() {
    string input;
    cin >> input;

    int highestNumber = INT_MIN;

    while (input != "Stop") {
        int number = stoi(input);

        if (number > highestNumber) {
            highestNumber = number;
        }

        cin >> input;
    }

    cout << highestNumber << endl;

    return 0;
}