#include <iostream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, vector<double> > map;

    for (int i = 0; i < n; i++) {
        string name;
        double grade;
        cin >> name >> grade;
        cin.ignore();
        if (map.find(name) == map.end()) {
            map.insert(make_pair(name, vector<double>()));
        }
        map.at(name).push_back(grade);
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    for (auto pair : map) {
        cout << pair.first << " -> ";
        double total = 0;
        for (auto grade : pair.second) {
            cout << grade << " ";
            total += grade;
        }
        cout << "(avg: " << total/pair.second.size() << ")" << endl;
    }

    return 0;
}
