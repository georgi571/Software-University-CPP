#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        leftSum += number;
    }

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        rightSum += number;
    }

    int diff = abs(leftSum - rightSum);

    if (leftSum == rightSum) {
        cout << "Yes, sum = " << leftSum << endl;
    } else {
        cout << "No, diff = " << diff << endl;
    }

    return 0;
}