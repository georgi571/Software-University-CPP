#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "No" << endl;
        return 0;
    }

    vector<int> numbers;
    vector<int> lowerNumbers;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;

        numbers.push_back(input);
        sum += input;
    }

    int average = sum / n;

    for (int i = 0; i < n; i++) {
        if (numbers[i] < average) {
            if (numbers[i] % 2 == 0) {
                lowerNumbers.push_back(numbers[i]);
            }
        }
    }

    if (lowerNumbers.empty()) {
        cout << "No";
    } else {
        sort(lowerNumbers.begin(), lowerNumbers.end(), greater<int>());

        copy(lowerNumbers.begin(), lowerNumbers.end(), ostream_iterator<int>(cout, " "));
    }

    cout << endl;

    return 0;
}
