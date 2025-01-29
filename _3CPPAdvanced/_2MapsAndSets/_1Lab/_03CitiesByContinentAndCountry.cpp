#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, map<string, set<string> > > map;

    for (int i = 0; i < n; i++) {
        string continent, country, city;
        cin >> continent >> country >> city;
        map[continent][country].insert(city);
    }

    for (auto continent: map) {
        cout << continent.first << ":" << endl;
        for (auto country: continent.second) {
            cout << "  " << country.first << " -> ";
            bool isFirst = true;
            for (auto city : country.second) {
                if (isFirst) {
                    cout << city;
                    isFirst = false;
                } else {
                    cout << ", " << city;
                }
            }
            cout << endl;
        }
    }

    return 0;
}
