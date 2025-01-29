#include <iostream>
#include <set>
#include <sstream>
using namespace std;

int main() {

    int n;
    cin >> n;

    set<string> names;

    while (n--) {
        string name;
        cin >> name;
        names.insert(name);
    }

    for (auto name : names) {
        cout << name << endl;
    }

    return 0;
}
