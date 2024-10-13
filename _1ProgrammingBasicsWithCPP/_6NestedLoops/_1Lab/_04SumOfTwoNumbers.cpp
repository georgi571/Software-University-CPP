#include <iostream>
using namespace std;

int main() {
    int firstNumber;
    cin >> firstNumber;

    int secondNumber;
    cin >> secondNumber;

    int magicNumber;
    cin >> magicNumber;

    int counter = 0;
    for (int i = firstNumber; i <= secondNumber; i++) {
        for (int j = firstNumber; j <= secondNumber; j++) {
            int sum = i + j;
            counter++;
            if (sum == magicNumber) {
                cout << "Combination N:" << counter << " (" << i << " + " << j << " = " << sum << ")" << endl;
                return 0;
            }
        }
    }

    cout << counter << " combinations - neither equals " << magicNumber << endl;

    return 0;
}
