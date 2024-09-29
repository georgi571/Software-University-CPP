#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int higherNumber = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        sum += number;
        if (number > higherNumber) {
            higherNumber = number;
        }
    }
    
    int sumOfNumbersWithoutHigherNumber = sum - higherNumber;
    int diff = abs(sumOfNumbersWithoutHigherNumber - higherNumber);
    
    if (sumOfNumbersWithoutHigherNumber == higherNumber) {
        cout << "Yes" << endl;
        cout << "Sum = " << sumOfNumbersWithoutHigherNumber << endl;
    } else {
        cout << "No" << endl;
        cout << "Diff = " << diff << endl;
    }

    return 0;
}