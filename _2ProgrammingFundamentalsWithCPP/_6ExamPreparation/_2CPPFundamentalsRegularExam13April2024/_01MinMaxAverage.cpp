#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    double n;
    cin >> n;

    vector<double> numbers;

    double min = INT_MAX;
    double max = INT_MIN;
    double sum = 0;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        numbers.push_back(number);
        sum += number;
        if (i % 2 == 0) {
            if (min > number) {
                min = number;
            }
        } else {
            if (max < number) {
                max = number;
            }
        }
    }

    reverse(numbers.begin(), numbers.end());

    double average = sum / n;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << max << ' ' << min << ' ' << average << endl;

    for (int number : numbers) {
        cout << number << ' ';
    }
    cout << endl;


    return 0;
}