#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    istringstream istr(line);
    ostringstream output;

    char c;
    char previousChar = 0;

    while ((istr >> c)) {
        if (c != previousChar) {
            output << c;
            previousChar = c;
        }
    }

    cout << output.str() << endl;

    return 0;
}
