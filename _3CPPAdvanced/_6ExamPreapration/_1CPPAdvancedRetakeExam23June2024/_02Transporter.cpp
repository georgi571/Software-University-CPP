#include <iostream>
#include <algorithm>
#include <sstream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    string input;
    cin >> input;

    vector<pair<string, int>> stations;

    while (input != "end") {
        int number;
        cin >> number;

        stations.push_back(pair<string, int>(input, number));

        cin >> input;
    }

    stack<int> resourses;
    cin.ignore();
    getline(cin, input);

    istringstream iss(input);
    int current;
    while (iss >> current) {
        resourses.push(current);
    }

    for (auto & station : stations) {
        cout << station.first;
        while (station.second > 0 && !resourses.empty()) {
            int pellet = resourses.size() - 1;
            int packs = resourses.top();
            resourses.pop();
            int usedPacks = 0;
            if (packs > station.second) {
                usedPacks = station.second;
                packs -= station.second;
                station.second = 0;
                resourses.push(packs);
            } else {
                station.second -= packs;
                usedPacks = packs;
            }
            cout << " " << pellet << ":" << usedPacks;
            if (resourses.empty() && station.second > 0) {
                break;
            }
        }
        if (resourses.empty() && station.second > 0) {
            cout << " Out of Stock!" << endl;
            break;
        }
        cout << endl;
    }

    if (!resourses.empty()) {
        int packs = 0;
        while (!resourses.empty()) {
            packs += resourses.top();
            resourses.pop();
        }
        cout << "Remaining packs: " << packs << endl;
    } else {
        int left = 0;
        for (auto station : stations) {
            left += station.second;
        }
        if (left > 0) {
            cout << "Incomplete: " << left << endl;
        }
    }

    return 0;
}
