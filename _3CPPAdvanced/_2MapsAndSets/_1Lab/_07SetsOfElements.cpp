#include <iostream>
#include <set>
#include <sstream>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    set<int> first;
    set<int> second;

    while (n--) {
        int number;
        cin >> number;
        first.insert(number);
    }

    while (m--) {
        int number;
        cin >> number;
        second.insert(number);
    }

    for (int curr : first) {
        if (second.find(curr) != second.end()) {
            cout << curr << " ";
        }
    }
    cout << endl;

    return 0;
}
