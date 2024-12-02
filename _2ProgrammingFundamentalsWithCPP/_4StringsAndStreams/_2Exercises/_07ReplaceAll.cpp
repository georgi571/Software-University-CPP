#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    string findString;
    getline(cin, findString);

    string replaceString;
    getline(cin, replaceString);

    int index = line.find(findString);
    while (index != string::npos) {
        line.replace(index, findString.length(), replaceString);
        index = line.find(findString, index + replaceString.length());
    }

    cout << line << endl;

    return 0;
}