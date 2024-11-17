#include <iostream>
using namespace std;

void printSign(int number);

int main() {
    int number;
    cin >> number;

    printSign(number);
    return 0;
}

void printSign(int number) {
    if (number > 0) {
        cout << "The number " << number << " is positive." << endl;
    } else if (number < 0) {
        cout << "The number " << number << " is negative." << endl;
    } else {
        cout << "The number " << number << " is zero." << endl;
    }
}