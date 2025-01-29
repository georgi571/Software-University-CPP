#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> names;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        if (find(names.begin(), names.end(), name) == names.end()) {
            names.push_back(name);
        }
    }

    for (auto name : names) {
        cout << name << endl;
    }

    return 0;
}
