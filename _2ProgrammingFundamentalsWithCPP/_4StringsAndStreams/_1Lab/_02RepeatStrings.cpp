#include <iostream>
#include <string>
#include <ostream>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    istringstream istr(line);
    string word;
    while (istr >> word) {
        int size = word.length();
        while (size--) {
            cout << word;
        }
    }
    cout << endl;

    return 0;
}