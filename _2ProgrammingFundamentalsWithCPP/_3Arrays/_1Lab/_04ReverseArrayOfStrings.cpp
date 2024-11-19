#include <iostream>
using namespace std;

void fillArray(string array[], int size);
void reverseArray(string array[], int size);
void printCalculateEvenNumbersSum(string array[], int size);

int main() {
    constexpr int size = 100;
    string array[size] = {};

    int n;
    cin >> n;

    fillArray(array, n);
    reverseArray(array, n);
    printCalculateEvenNumbersSum(array, n);

    return 0;
}

void fillArray(string array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void reverseArray(string array[], int size) {
    for (int i = 0; i < size / 2; i++) {
        swap(array[i], array[size - i - 1]);
    }
}

void printCalculateEvenNumbersSum(string array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}