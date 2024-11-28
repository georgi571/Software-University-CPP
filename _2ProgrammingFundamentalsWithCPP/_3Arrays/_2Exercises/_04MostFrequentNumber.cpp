#include <iostream>
using namespace std;

void fillArray(int array[], int size);

void printResult(int array[], int size);

void fillOccurrences(int occurrences[], int array[], int size);

int main() {
    constexpr int size = 100;

    int n;
    cin >> n;

    int array[size];
    fillArray(array, n);

    int occurrences[10] = {0};

    fillOccurrences(occurrences, array, n);

    printResult(occurrences, 10);

    return 0;
}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void printResult(int array[], int size) {
    int maxNum = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] >= maxNum) {
            maxNum = array[i];
        }
    }

    for (int i = 0; i < size; ++i) {
        if (array[i] == maxNum) {
            cout << i << " ";
        }
    }
}

void fillOccurrences(int occurrences[], int array[], int size) {
    for (int i = 0; i < size; ++i) {
        int num = array[i];
        occurrences[num]++;
    }
}
