#include <iostream>
#include <list>
#include <sstream>
using namespace std;

list<int> fillList(const string & buffer);

int main() {
    string first;
    getline(cin, first);

    string second;
    getline(cin, second);

    list<int> firstNumbers = fillList(first);
    list<int> secondNumbers = fillList(second);

    list<int>::iterator it1 = firstNumbers.begin(), it2 = secondNumbers.begin();

    while (it1 != firstNumbers.end() || it2 != secondNumbers.end()) {
        if (it1 != firstNumbers.end()) {
            cout << *it1 << ' ';
            it1++;
        }

        if (it2 != secondNumbers.end()) {
            cout << *it2 << ' ';
            it2++;
        }
    }

    cout << endl;

    return 0;
}

list<int> fillList(const string & buffer) {
    list<int> numbers;
    istringstream iss(buffer);
    int num;
    while (iss >> num) {
        numbers.push_back(num);
    }

    return numbers;
}