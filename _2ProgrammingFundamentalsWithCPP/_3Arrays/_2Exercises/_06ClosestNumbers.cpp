#include <algorithm>
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
    int diff = 0;
    sort(array, array + size);
    for (int i = 0; i < size - 1; i++) {
        int currentDiff = array[i + 1] - array[i];
        if (currentDiff < diff) {
            diff = currentDiff;
        }
        if (diff == 0) {
            diff = currentDiff;
        }
    }
    cout << diff << endl;
}
