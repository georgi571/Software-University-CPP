#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> fillVector(const string & buffer);

int main() {

    string buffer;
    getline(cin, buffer);

    vector<int> numbers = fillVector(buffer);

    while (true) {
        getline(cin, buffer);
        istringstream iss(buffer);
        string command;
        iss >> command;

        if (command == "end") {
            break;
        }

        if (command == "Add") {
            int number;
            iss >> number;
            numbers.push_back(number);
        } else if (command == "Remove") {
            int number;
            iss >> number;
            vector<int>::iterator itFound = find(numbers.begin(), numbers.end(), number);
            if (itFound != numbers.end()) {
                numbers.erase(itFound);
            }
        } else if (command == "RemoveAt") {
            int index;
            iss >> index;
            numbers.erase(numbers.begin() + index);
        } else if (command == "Insert") {
            int number;
            iss >> number;

            int index;
            iss >> index;

            numbers.insert(numbers.begin() + index, number);
        }
    }

    for (int number : numbers) {
        cout << number << " ";
    }

    cout << endl;

    return 0;
}

vector<int> fillVector(const string & buffer) {
    vector<int> numbers;
    istringstream iss(buffer);
    int num;
    while (iss >> num) {
        numbers.push_back(num);
    }

    return numbers;
}