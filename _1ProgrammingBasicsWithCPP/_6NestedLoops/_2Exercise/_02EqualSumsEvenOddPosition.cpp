#include <iostream>
using namespace std;

int main() {
    int firstNumber;
    cin >> firstNumber;

    int secondNumber;
    cin >> secondNumber;

    for (int i = firstNumber; i <= secondNumber; i++) {
        int number = i;
        int oddNumber = 0;
        int evenNumber = 0;

        int counter = 0;
        while (number > 0) {
            int remainder = number % 10;
            if (counter % 2 == 0) {
                evenNumber += remainder;
            } else {
                oddNumber += remainder;
            }
            counter++;

            number /= 10;
        }

        if (oddNumber == evenNumber) {
            cout << i << " ";
        }
    }
    return 0;
}