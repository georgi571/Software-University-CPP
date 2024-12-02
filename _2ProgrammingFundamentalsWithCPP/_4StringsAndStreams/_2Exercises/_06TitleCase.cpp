#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string changeFirstLaterToUpperCase(const string & line);

int main() {
    string line;
    getline(cin, line);

    cout << changeFirstLaterToUpperCase(line) << endl;

    return 0;
}

string changeFirstLaterToUpperCase(const string & line) {
    ostringstream oss;

    bool capitalize = true;

    for (char c : line) {
        if (capitalize) {
            c = toupper(c);
        }

        oss << c;

        capitalize = !isalpha(c);
    }

    return oss.str();
}

