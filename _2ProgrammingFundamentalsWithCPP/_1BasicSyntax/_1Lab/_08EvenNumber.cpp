#include <iostream>
using namespace std;

int main() {
    string command;
    cin >> command;

    bool isEvenIsFound = false;
    while (!isEvenIsFound) {
        int number = abs(stoi(command));
        if (number % 2 == 0) {
            isEvenIsFound = true;
            cout << "The number is: " << number << endl;
        } else {
            cout << "Please write an even number." << endl;
            cin >> command;
        }
    }

    return 0;
}