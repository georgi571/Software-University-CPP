#include <iostream>
#include <string>
#include <sstream>
using namespace std;

unsigned stringMultiplier(const string & first, const string & second);

int main() {
    string first;
    cin >> first;

    string second;
    cin >> second;

    cout << stringMultiplier(first, second) << endl;

    return 0;
}

unsigned stringMultiplier(const string & first, const string & second) {
    unsigned multiplier = 0;
    unsigned minLength = 0;

    if (first.length() < second.length()) {
        minLength = first.length();
    } else {
        minLength = second.length();
    }

    for (unsigned i = 0; i < minLength; i++) {
        char firstChar = first[i];
        char secondChar = second[i];

        multiplier += (firstChar * secondChar);
    }

    for (unsigned i = minLength; i < first.length(); i++) {
        multiplier += first[i];
    }

    for (unsigned i = minLength; i < second.length(); i++) {
        multiplier += second[i];
    }

    return multiplier;
}

