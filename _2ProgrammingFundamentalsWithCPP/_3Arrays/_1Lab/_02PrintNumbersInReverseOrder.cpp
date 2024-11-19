#include <iostream>
using namespace std;

void fillArray(int array[], int size);
void printNumbersInReverseOrder(int array[], int size);

int main() {
    constexpr int size = 100;
    int array[size] = {};

    int n;
    cin >> n;

    fillArray(array, n);
    printNumbersInReverseOrder(array, n);

    return 0;
}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void printNumbersInReverseOrder(int array[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }
    cout << endl;
}