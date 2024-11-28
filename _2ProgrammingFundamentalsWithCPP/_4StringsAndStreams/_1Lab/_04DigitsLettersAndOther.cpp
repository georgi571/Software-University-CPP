#include <iostream>
#include <string>
#include <ostream>
#include <sstream>
#include <cctype>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    istringstream istr(line);
    ostringstream digits;
    ostringstream letters;
    ostringstream other;

    for(char c; istr >> c;) {
        if(isdigit(c)) {
            digits << c;
        } else if(isalpha(c)) {
            letters << c;
        } else {
            other << c;
        }
    }

    cout << digits.str() << endl;
    cout << letters.str() << endl;
    cout << other.str() << endl;

    return 0;
}