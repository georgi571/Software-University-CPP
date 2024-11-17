#include <iostream>
using namespace std;

void printTriangle(int number);

int main() {
    int number;
    cin >> number;

    printTriangle(number);

    return 0;
}

void printTriangle(int number) {
    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = number - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}