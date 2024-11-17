#include <iostream>
using namespace std;

void printMathPower(int number, int power);

int main() {
    int number;
    cin >> number;

    int power;
    cin >> power;

    printMathPower(number, power);

    return 0;
}

void printMathPower(int number, int power) {
    int result = 1;
    for (int i = 0; i < power; ++i) {
        result *= number;
    }
    cout << result << endl;
}