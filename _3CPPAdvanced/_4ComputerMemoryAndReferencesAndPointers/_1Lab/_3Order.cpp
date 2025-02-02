#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    char buff[100];
    char * nextData = buff;

    map<int, const char *> index;

    string companyName;
    cin >> companyName;

    while (companyName != "end") {
        int id;
        cin >> id;

        int * addressId = (int *)nextData;
        *addressId = id;
        nextData += sizeof(int);
        index[id] = nextData;

        for (int i = 0; i < companyName.size(); i++) {
            * nextData = companyName[i];
            nextData++;
        }
        *nextData = '\0';
        nextData++;

        cin >> companyName;
    }

    for (auto pair : index) {
        cout << pair.second << " " << pair.first << endl;
    }

    return 0;
}
