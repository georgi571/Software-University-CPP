#include <iostream>
using namespace std;

void fillArray(int array[], int size);
void printCalculateEvenNumbersSum(int array[], int size);

int main() {
    constexpr int size = 100;
    int array[size] = {};

    int n;
    cin >> n;

    fillArray(array, n);
    printCalculateEvenNumbersSum(array, n);

    return 0;
}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void printCalculateEvenNumbersSum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            sum += array[i];
        }
    }
    cout << sum << endl;
}