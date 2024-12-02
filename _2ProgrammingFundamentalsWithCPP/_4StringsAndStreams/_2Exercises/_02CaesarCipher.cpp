#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string encryptCaesar(string line);

int main() {
    string line;
    getline(cin, line);

    cout << encryptCaesar(line) << endl;

    return 0;
}

string encryptCaesar(string line) {
    string output;

    for (char c : line) {
        output += c + 3;
    }

    return output;
}
