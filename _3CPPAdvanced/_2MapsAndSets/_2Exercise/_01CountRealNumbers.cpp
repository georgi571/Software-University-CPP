#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {

    map<double, int> map;

    string line;
    getline(cin, line);

    istringstream iss(line);

    double number;
    while (iss >> number) {
        if (map.find(number) != map.end()) {
            map.at(number)++;
        } else {
            map.insert(pair<double, int>(number, 1));
        }
    }

    for (auto curr : map) {
        cout << curr.first << " -> " << curr.second << endl;
    }

    return 0;
}
