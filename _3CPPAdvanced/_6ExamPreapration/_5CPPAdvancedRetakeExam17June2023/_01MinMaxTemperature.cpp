#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    int numberOfTowns;
    cin >> numberOfTowns;

    map<string, set<double> > towns;

    string town;

    while (towns.size() < numberOfTowns) {
        cin >> town;
        double minTemperature, maxTemperature;
        cin >> minTemperature >> maxTemperature;
        if (towns.find(town) == towns.end()) {
            towns[town] = set<double>();
        }
        towns[town].insert(minTemperature);
        towns[town].insert(maxTemperature);
    }

    for (auto pair : towns) {
        set<double> temperature = pair.second;
        double minTemperature = *temperature.begin();
        double maxTemperature = *temperature.rbegin();
        cout << pair.first << " " << minTemperature << " " << maxTemperature << endl;
    }

    return 0;
}
