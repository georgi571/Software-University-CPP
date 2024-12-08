#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> numbers;
    int sum = 0;

    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;

        numbers.push_back(input);
        sum += input;
    }

    int average = sum / n;

    for (int i = 0; i < n; i++) {
        if (numbers[i] <= average) {
            if (i % 2 == 0) {
                evenSum += numbers[i];
            } else {
                oddSum += numbers[i];
            }
        }
    }

    int result = evenSum * oddSum;

    cout << result << endl;

    return 0;
}
