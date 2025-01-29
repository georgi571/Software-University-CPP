#include <iostream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

int main() {

    map<double, int> map;
    vector<double> vec;

    string line;
    getline(cin, line);

    istringstream iss(line);

    double number;
    while (iss >> number) {
        if (map.find(number) != map.end()) {
            map.at(number)++;
        } else {
            map.insert(pair<double, int>(number, 1));
            vec.push_back(number);
        }
    }

    for (double curr : vec) {
        cout << curr << " - " << map.at(curr) << " times" << endl;
    }

    return 0;
}
