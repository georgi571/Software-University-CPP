#include <iostream>
#include <sstream>
using namespace std;

int main() {

    string code;
    getline(cin, code);

    istringstream iss(code);
    char c;
    int codeNumber = 0;
    while (iss >> c) {
        if (isdigit(c)) {
            codeNumber += c - '0';
        }
    }
    if ((codeNumber >= 65 && codeNumber <= 90) || (codeNumber >= 97 && codeNumber <= 122)) {
        char letter = codeNumber;
        cout << letter << endl;
    } else {
        cout << codeNumber << endl;
    }

    return 0;
}