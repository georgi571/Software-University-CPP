#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    stack<int> numbers;

    istringstream iss(input);
    int number;
    while (iss >> number) {
        numbers.push(number);
    }

    while (true) {
        getline(cin, input);

        istringstream istr(input);
        string command;
        istr >> command;

        if (command == "end") {
            break;
        }

        if (command == "add") {
            int first;
            int second;
            istr >> first;
            istr >> second;
            numbers.push(first);
            numbers.push(second);
        } else if (command == "remove") {
            int numbersToRemove;
            istr >> numbersToRemove;

            if (numbersToRemove <= numbers.size()) {
                while (numbersToRemove--) {
                    numbers.pop();
                }
            }
        }
    }

    int sum = 0;
    while (!numbers.empty()) {
        int num = numbers.top();
        numbers.pop();
        sum += num;
    }

    cout << sum << endl;

    return 0;
}