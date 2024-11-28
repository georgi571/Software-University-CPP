#include <iostream>
using namespace std;

void fillArray(int array[], int size);
int findAverage(int array[], int size);
void printElementsAboveAverage(int array[], int size, int average);

int main() {
    constexpr int size = 100;

    int n;
    cin >> n;

    int array[size];
    fillArray(array, n);

    int average = findAverage(array, n);

    printElementsAboveAverage(array, n, average);

    return 0;
}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

int findAverage(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

void printElementsAboveAverage(int array[], int size, int average) {
    for (int i = 0; i < size; i++) {
        if (array[i] >= average) {
            cout << array[i] << " ";
        }
    }
    cout << endl;
}