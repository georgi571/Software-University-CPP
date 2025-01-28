#include <iostream>
#include <sstream>
#include <climits>
#include <queue>
using namespace std;

int findMax(queue<int> numbers);

int main() {
    int food;
    cin >> food;
    cin.ignore();

    queue<int> numbers;

    string input;
    getline(cin, input);

    istringstream iss(input);

    int curr;
    while (iss >> curr) {
        numbers.push(curr);
    }

    int max = findMax(numbers);
    while (!numbers.empty()) {
        int num;
        num = numbers.front();
        if (num <= food) {
            food -= num;
            numbers.pop();
        } else {
            break;
        }
    }

    if (numbers.empty()) {
        cout << max << endl;
        cout << "Orders complete" << endl;
    } else {
        cout << max << endl;
        cout << "Orders left: ";
        while (!numbers.empty()) {
            cout << numbers.front() << " ";
            numbers.pop();
        }
    }

    return 0;
}

int findMax(queue<int> numbers) {
    int max = INT_MIN;
    while (!numbers.empty()) {
        int number = numbers.front();
        numbers.pop();
        if (number > max) {
            max = number;
        }
    }
    return max;
}
