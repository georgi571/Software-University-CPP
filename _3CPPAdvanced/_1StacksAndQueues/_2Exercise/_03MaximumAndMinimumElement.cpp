#include <iostream>
#include <sstream>
#include <climits>
#include <stack>
using namespace std;

int findMin(stack<int> numbers);

int findMax(stack<int> numbers);

void printStack(stack<int> numbers);

int main() {
    int n;
    cin >> n;

    stack<int> numbers;

    cin.ignore();

    for (int i = 0; i < n; i++) {
        string input;
        getline(cin, input);

        istringstream iss(input);

        int command;
        iss >> command;

        if (command == 1) {
            int number;
            iss >> number;
            numbers.push(number);
        } else if (command == 2) {
            if (!numbers.empty()) {
                numbers.pop();
            }
        } else if (command == 3) {
            if (!numbers.empty()) {
                cout << findMax(numbers) << endl;
            }
        } else if (command == 4) {
            if (!numbers.empty()) {
                cout << findMin(numbers) << endl;
            }
        }
    }

    printStack(numbers);

    return 0;
}

int findMin(stack<int> numbers) {
    int min = INT_MAX;
    while (!numbers.empty()) {
        int number = numbers.top();
        numbers.pop();
        if (number < min) {
            min = number;
        }
    }
    return min;
}

int findMax(stack<int> numbers) {
    int max = INT_MIN;
    while (!numbers.empty()) {
        int number = numbers.top();
        numbers.pop();
        if (number > max) {
            max = number;
        }
    }
    return max;
}

void printStack(stack<int> numbers) {
    while (!numbers.empty()) {
        int number = numbers.top();
        numbers.pop();
        cout << number;
        if (!numbers.empty()) {
            cout << ", ";
        }
    }
    cout << endl;
}
