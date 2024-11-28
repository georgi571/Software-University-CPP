#include <algorithm>
#include <iostream>
using namespace std;

void fillArray(int array[], int size);

void printArray(int array[], int size);

void rotateArray(int array[], int size);

int main() {
    constexpr int size = 100;

    int n;
    cin >> n;

    int array[size];
    fillArray(array, n);

    int rotation;
    cin >> rotation;

    int timesToRotate = rotation % n;

    for (int i = 0; i < timesToRotate ; i++) {
        rotateArray(array, n);
    }

    printArray(array, n);

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

void rotateArray(int array[], int size) {
    int firstElement = array[0];
    for (int curr = 1; curr < size; curr++) {
        array[curr - 1] = array[curr];
    }
    array[size - 1] = firstElement;
}
