#include <iostream>
using namespace std;

void fillArray(int array[], int size);

void printResult(int startIndex, int array[], int size);

void findTopInteger(int& topInteger, int& startIndex, int array[], int size);

int main() {
    constexpr int size = 100;

    int n;
    cin >> n;

    int array[size];
    fillArray(array, n);

    int topInteger = 0;
    int startIndex = 0;

    findTopInteger(topInteger, startIndex, array, n);

    printResult(startIndex ,array, n);

    return 0;
}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void printResult(int startIndex, int array[], int size) {
    for (int i = startIndex; i < size - 1 ; i++) {
        if (array[i] > array[i + 1]) {
            cout << array[i] << " ";
        }
    }
    cout << array[size - 1] << " " << endl;
}

void findTopInteger(int& topInteger, int& startIndex, int array[], int size) {
    for (int i = 0; i < size - 1 ; i++) {
        if (array[i] > topInteger) {
            topInteger = array[i];
            startIndex = i;
        }
    }
}

