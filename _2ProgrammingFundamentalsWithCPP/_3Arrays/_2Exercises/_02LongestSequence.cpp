#include <iostream>
using namespace std;

void fillArray(int array[], int size);
void printResult(int element, int size);

int main() {
    constexpr int size = 100;

    int n;
    cin >> n;

    int array[size];
    fillArray(array, n);

    int element = array[0];
    int longestElement = array[0];
    int startIndex = 0;
    int length = 1;

    int maxLength = 0;

    for (int i = 1; i < n; i++) {
        if (element == array[i]) {
            length++;
        } else {
            if (length >= maxLength) {
                maxLength = length;
                longestElement = element;
                element = array[i];
                length = 1;
            }
        }
    }

    if (length >= maxLength) {
        maxLength = length;
        longestElement = element;
    }

    printResult(longestElement, maxLength);

    return 0;
}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void printResult(int element, int size) {
    for (int i = 0; i < size; i++) {
        cout << element << " ";
    }
    cout << endl;
}
