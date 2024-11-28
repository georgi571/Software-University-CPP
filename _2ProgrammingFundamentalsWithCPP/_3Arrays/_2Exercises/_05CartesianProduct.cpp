#include <iostream>
using namespace std;

void fillArray(int array[], int size);

void printResult(int array[], int size);

int main() {
    constexpr int size = 100;

    int n;
    cin >> n;

    int array[size];
    fillArray(array, n);

    printResult(array, n);

    return 0;
}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void printResult(int array[], int size) {
    for (int first = 0; first < size; ++first) {
        for (int second = 0; second < size; ++second) {
            cout << array[first] * array[second] << " ";
        }
    }

    cout << endl;
}
