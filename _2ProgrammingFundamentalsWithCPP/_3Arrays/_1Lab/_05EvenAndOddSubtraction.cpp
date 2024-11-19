#include <iostream>
using namespace std;

void fillArray(int array[], int size);
int calculateEvenSum(int array[], int size);
int calculateOddSum(int array[], int size);
void printSubtraction(int evenSum, int oddSum);

int main() {
    constexpr int size = 100;
    int array[size] = {};

    int n;
    cin >> n;

    fillArray(array, n);
    int evenSum = calculateEvenSum(array, n);
    int oddSum = calculateOddSum(array, n);
    printSubtraction(evenSum, oddSum);

    return 0;
}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

int calculateEvenSum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            sum += array[i];
        }
    }
    return sum;
}

int calculateOddSum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 1) {
            sum += array[i];
        }
    }
    return sum;
}


void printSubtraction(int evenSum, int oddSum) {
    int sum = evenSum - oddSum;
    cout << sum << endl;
}