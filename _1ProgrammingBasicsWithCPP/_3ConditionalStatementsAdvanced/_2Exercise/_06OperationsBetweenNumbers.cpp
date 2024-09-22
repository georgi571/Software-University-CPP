#include <iostream>
using namespace std;

int main() {
    int firstNumber;
    cin >> firstNumber;

    int secondNumber;
    cin >> secondNumber;

    char operation;
    cin >> operation;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (operation == '+' || operation == '-' || operation == '*') {
        int result = 0;
        string evenOrOdd;
        if (operation == '+') {
            result = firstNumber + secondNumber;
        } else if (operation == '-') {
            result = firstNumber - secondNumber;
        } else if (operation == '*') {
            result = firstNumber * secondNumber;
        }
        if (result % 2 == 0) {
            evenOrOdd = "even";
        } else {
            evenOrOdd = "odd";
        }
        cout << firstNumber << " " << operation << " " << secondNumber << " = " << result << " - " << evenOrOdd << endl;
    } else if (operation == '/') {
        if (secondNumber == 0) {
            cout << "Cannot divide " << firstNumber << " by zero" << endl;
        } else {
            double result = 1.0 * firstNumber / secondNumber;
            cout << firstNumber << " " << operation << " " << secondNumber << " = " << result << endl;
        }
    } else if (operation == '%') {
        if (secondNumber == 0) {
            cout << "Cannot divide " << firstNumber << " by zero" << endl;
        } else {
            int result = firstNumber % secondNumber;
            cout << firstNumber << " " << operation << " " << secondNumber << " = " << result << endl;
        }
    }

    return 0;
}