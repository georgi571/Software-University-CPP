#include <iostream>
#include <sstream>
#include <climits>
#include <queue>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    istringstream iss(input);

    int n, s, x;
    iss >> n >> s >> x;

    queue<int> numbers;

    for (int i = 0; i < n; ++i) {
        int number;
        cin >> number;
        numbers.push(number);
    }

    for (int i = 0; i < s; ++i) {
        numbers.pop();
    }

    if (numbers.empty()) {
        cout << "0" << endl;
    } else {
        bool flag = false;
        int smallest = INT_MAX;
        while (!numbers.empty()) {
            int number = numbers.front();
            numbers.pop();
            if (number < smallest) {
                smallest = number;
            }
            if (number == x) {
                flag = true;
            }
        }
        if (flag) {
            cout << "true" << endl;
        } else {
            cout << smallest << endl;
        }
    }

    return 0;
}
