#include <iostream>
#include <string>
#include <ostream>
using namespace std;

int main() {
    string strFind;
    getline(cin, strFind);

    string data;
    getline(cin, data);

    int found = data.find(strFind);
    while (found != string::npos) {
        data.erase(found, strFind.length());
        found = data.find(strFind);
    }

    cout << data << endl;

    return 0;
}