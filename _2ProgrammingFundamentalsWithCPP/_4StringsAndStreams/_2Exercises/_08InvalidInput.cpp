#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    istringstream iss(line);

    long result = 0;
    string buffer;
    ostringstream oss;

    while (iss >> buffer) {
        istringstream converter(buffer);
        int digit;
        converter >> digit;

        if (converter.fail()) {
            oss << buffer << ' ';
        } else {
            result += digit;
        }
    }

    cout << result << endl;
    cout << oss.str() << endl;

    return 0;
}