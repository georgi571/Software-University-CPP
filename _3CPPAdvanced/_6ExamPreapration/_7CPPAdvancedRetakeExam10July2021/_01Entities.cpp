#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    istringstream iss(line);
    vector<pair<string, vector<string>> > table;

    string column;
    while (iss >> column) {
        table.push_back(make_pair(column, vector<string>()));
    }

    getline(cin, line);

    while (line != "end") {
        istringstream istr(line);
        string token;
        for (auto & curr : table) {
            istr >> token;
            curr.second.push_back(token);
        }
        getline(cin, line);
    }

    cin >> line;

    for (auto curr : table) {
        map<string, int> max;
        if (curr.first == line) {
            vector<string> tokens = curr.second;
            for (auto token : tokens) {
                if (max.find(token) == max.end()) {
                    max.insert(pair<string, int>(token, 0));
                }
                max[token]++;
            }
            int maximum = 0;
            string token;
            for (auto currEl : max) {
                if (currEl.second > maximum) {
                    maximum = currEl.second;
                    token = currEl.first;
                }
            }

            cout << token << " " << maximum << endl;
        }

    }

    return 0;
}
