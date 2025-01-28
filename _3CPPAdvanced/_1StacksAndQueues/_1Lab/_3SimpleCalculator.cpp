#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    stack<int> numbers;
    stack<char> operation;

    istringstream iss(input);

    int number;
    while (iss >> number) {
        numbers.push(number);

        char operant;
        if (iss >> operant) {
            operation.push(operant);
        } else {
            break;
        }
    }

    int sum = 0;

    while (!operation.empty()) {
        int curr = numbers.top();
        numbers.pop();
        char operant = operation.top();
        operation.pop();

        if (operant == '+') {
            sum += curr;
        } else if (operant == '-') {
            sum -= curr;
        }
    }

    int curr = numbers.top();
    numbers.pop();
    sum += curr;

    cout << sum << endl;

    return 0;
}
