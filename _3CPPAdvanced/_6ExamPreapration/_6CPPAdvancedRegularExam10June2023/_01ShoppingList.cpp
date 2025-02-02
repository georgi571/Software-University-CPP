#include <iostream>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, double>> items;

    double totalSum = 0.0;

    for (int i = 0; i < n; i++) {
        string item;
        double price;
        int count;
        cin >> item >> price >> count;
        double sum = price * count;
        items.push_back({item, sum});
        totalSum += sum;
    }

    sort(items.begin(), items.end(), [](const pair<string, double>& a, const pair<string, double>& b) {
        if (a.second == b.second) {
            return false;
        }
        return a.second > b.second;
    });

    cout << "The total sum is: " << totalSum << " lv." << endl;

    for (auto pair : items) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}
