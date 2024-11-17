#include <iostream>
using namespace std;

int evenNumbersSum(int number);
int oddNumbersSum(int number);
int multipliesSum(int number1, int number2);

int main() {
    int number;
    cin >> number;

    int evenSum = evenNumbersSum(number);
    int oddSum = oddNumbersSum(number);

    int multiplies = multipliesSum(evenSum, oddSum);

    cout << multiplies << endl;

    cout << endl;

    return 0;
}

int evenNumbersSum(int number) {
    if (number < 0) {
        number *= -1;
    }
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        number = number / 10;
    }
    return sum;
}

int oddNumbersSum(int number) {
    if (number < 0) {
        number *= -1;
    }
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 1) {
            sum += digit;
        }
        number = number / 10;
    }
    return sum;
}

int multipliesSum(int number1, int number2) {
    int sum = number1 * number2;
    return sum;
}