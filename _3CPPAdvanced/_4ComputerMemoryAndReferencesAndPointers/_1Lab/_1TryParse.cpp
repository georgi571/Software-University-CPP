#include <iostream>
#include <sstream>
using namespace std;

const char * parsInt(const char * buff, int & digit);

int main() {
    string stringA, stringB;
    cin >> stringA >> stringB;

    int a, b;
    const char * aR, * bR;

    aR = parsInt(stringA.c_str(), a);
    bR = parsInt(stringB.c_str(), b);

    if (aR == nullptr && bR == nullptr) {
        cout << a + b << endl;
    } else {
        if (aR != nullptr) {
            cout << "[error] " << stringA << endl;
        } else {
            cout << a << endl;
        }
        if (bR != nullptr) {
            cout << "[error] " << stringB << endl;
        } else {
            cout << b << endl;
        }
    }

    return 0;
}

const char * parsInt(const char * buff, int & digit) {
    digit = 0;

    const char * curr = buff;

    while (*curr != '\0') {
        int currDigit = *curr - '0';
        if (currDigit > 9 || currDigit < 0) {
            return curr;
        }
        digit = digit * 10 + currDigit;
        curr++;
    }

    return nullptr;
}
