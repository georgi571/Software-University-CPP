#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    queue<int> numbers;

    istringstream iss(input);

    int number;
    while (iss >> number) {
        if (number % 2 == 0) {
            numbers.push(number);
        }
    }

    while (!numbers.empty()) {
        cout << numbers.front();
        numbers.pop();
        if (!numbers.empty()) {
            cout << ", ";
        }
    }

    return 0;
}
