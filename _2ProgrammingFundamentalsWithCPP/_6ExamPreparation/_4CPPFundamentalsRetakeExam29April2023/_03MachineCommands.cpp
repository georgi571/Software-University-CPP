#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {

    string input;

    vector<int> numbers;

    while (true) {
        cin >> input;

        if (input == "sum") {
            int size = numbers.size();
            int last = numbers[size - 1];
            int previous = numbers[size - 2];
            numbers.pop_back();
            numbers.pop_back();
            int result = last + previous;
            numbers.push_back(result);
        } else if (input == "subtract") {
            int size = numbers.size();
            int last = numbers[size - 1];
            int previous = numbers[size - 2];
            numbers.pop_back();
            numbers.pop_back();
            int result = last - previous;
            numbers.push_back(result);
        } else if (input == "concat") {
            int size = numbers.size();
            int last = numbers[size - 2];
            int previous = numbers[size - 1];
            numbers.pop_back();
            numbers.pop_back();
            string concatenated = to_string(last) + to_string(previous);
            int result = stoi(concatenated);
            numbers.push_back(result);
        } else if (input == "discard") {
            numbers.pop_back();
        } else if (input == "end") {
            break;
        } else {
            int number = stoi(input);
            numbers.push_back(number);
        }
    }

    for (int curr : numbers) {
        cout << curr << endl;
    }

    return 0;
}

