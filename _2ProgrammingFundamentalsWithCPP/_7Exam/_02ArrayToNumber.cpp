#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <climits>
#include <iterator>
using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int> numbers;
    vector<int> result;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    if (n == 1) {
        cout << numbers[0] << endl;
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        for (int i = 0; i < numbers.size() - 1; ++i) {
            result.push_back(numbers[i] + numbers[i + 1]);
        }
        numbers = result;
        result.clear();
    }

    cout << result[0] << endl;

    return 0;
}
