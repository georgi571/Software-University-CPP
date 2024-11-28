#include <iostream>
using namespace std;

void fillArray(int array[], int size);

void printResult(int magicNum, int array[], int size);

int main() {
    constexpr int size = 100;

    int n;
    cin >> n;

    int array[size];
    fillArray(array, n);

    int magicNum;
    cin >> magicNum;

    printResult(magicNum ,array, n);

    return 0;
}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void printResult(int magicNum, int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            int currentSum = array[i] + array[j];
            if (currentSum == magicNum) {
                cout << array[i] << " " << array[j] << endl;
            }
        }
    }
}

