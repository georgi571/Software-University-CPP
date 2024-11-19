#include <iostream>
using namespace std;

void fillArray(int array[], int size);
void checkArraysIsEqual(int firstArray[], int secondArray[], int size);

int main() {
    constexpr int size = 100;
    int firstArray[size] = {};
    int secondArray[size] = {};

    int n;
    cin >> n;

    fillArray(firstArray, n);
    fillArray(secondArray, n);
    checkArraysIsEqual(firstArray, secondArray, n);

    return 0;
}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void checkArraysIsEqual(int firstArray[], int secondArray[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (firstArray[i] != secondArray[i]) {
            cout << "Arrays are not identical. Found difference at " << i << " index." << endl;
            return;
        }
        sum += firstArray[i];
    }
    cout << "Arrays are identical. Sum: " << sum << endl;
}