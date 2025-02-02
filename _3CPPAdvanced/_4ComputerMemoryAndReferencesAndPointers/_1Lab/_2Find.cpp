#include <iostream>
#include <map>
#include <set>
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

    int searchId;
    cin >> searchId;

    if (index.find(searchId) != index.end()) {
        cout << index.at(searchId) << " " << searchId << endl;
    }

    return 0;
}
