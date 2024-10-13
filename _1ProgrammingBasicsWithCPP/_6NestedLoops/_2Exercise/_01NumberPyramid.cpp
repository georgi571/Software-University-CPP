#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int currentNumber = 1;

    for (int row = 1; row <= number; row++) {
        for (int col = 1; col <= row; col++) {
            cout << currentNumber++ << " ";
            if (currentNumber > number) {
                return 0;
            }
        }
        cout << endl;
    }
    return 0;
}
