#include <iostream>
using namespace std;

void addition(int a, int b);
void subtraction(int a, int b);
void multiplication(int a, int b);
void division(int a, int b);

int main() {
    int a;
    cin >> a;

    int b;
    cin >> b;

    char operation;
    cin >> operation;

    if (operation == '+') {
        addition(a, b);
    } else if (operation == '-') {
        subtraction(a, b);
    } else if (operation == '*') {
        multiplication(a, b);
    } else if (operation == '/') {
        division(a, b);
    }

    return 0;
}


void addition(int a, int b) {
    int sum = a + b;
    cout << sum << endl;
}

void subtraction(int a, int b) {
    int diff = a - b;
    cout << diff << endl;
}

void multiplication(int a, int b) {
    int product = a * b;
    cout << product << endl;
}

void division(int a, int b) {
    int dividend = a / b;
    cout << dividend << endl;
}