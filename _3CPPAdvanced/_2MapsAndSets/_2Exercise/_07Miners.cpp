#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string input;
    cin >> input;

    map<string, int> resources;
    vector<string> names;

    while (input != "stop") {
        int resource;
        cin >> resource;
        if (resources.find(input) != resources.end()) {
            resources[input] += resource;
        } else {
            resources.insert(pair<string, int>(input, resource));
            names.push_back(input);
        }
        cin >> input;
    }

    for (auto curr : names) {
        cout << curr << " -> " << resources.at(curr) << endl;
    }

    return 0;
}
