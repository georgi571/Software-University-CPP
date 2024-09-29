#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int minNumber = INT_MAX;
    int maxNumber = INT_MIN;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        if (number < minNumber) {
            minNumber = number;
        }

        if (number > maxNumber) {
            maxNumber = number;
        }
    }

    cout << "Max number: " << maxNumber << endl;
    cout << "Min number: " << minNumber << endl;

    return 0;
}