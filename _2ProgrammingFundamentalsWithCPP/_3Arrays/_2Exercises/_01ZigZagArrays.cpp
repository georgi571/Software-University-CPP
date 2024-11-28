#include <iostream>
using namespace std;

void fillArray(int array[], int size);
void printArray(int array[], int size);

int main() {
    constexpr int size = 100;

    int n;
    cin >> n;

    int firstArray[size];
    int secondArray[size];

    for (int i = 0; i < n; i++) {
        int array[size];
        fillArray(array, 2);

        if (i % 2 == 0) {
            firstArray[i] = array[0];
            secondArray[i] = array[1];
        } else {
            firstArray[i] = array[1];
            secondArray[i] = array[0];
        }
    }

    printArray(firstArray, n);
    printArray(secondArray, n);

    return 0;
}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}