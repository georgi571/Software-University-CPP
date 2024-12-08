#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <climits>
#include <iterator>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    string output;
    char previous = 0;

    for (char c : line) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            previous = c;
            output += c;
        } else {
            if (previous != c) {
                previous = c;
                output += c;
            }
        }
    }

    cout << output << endl;

    return 0;
}
