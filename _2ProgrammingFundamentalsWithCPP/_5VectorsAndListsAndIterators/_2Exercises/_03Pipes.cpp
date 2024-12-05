#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void readData(istream & input, int n, vector<int> & vector);

int main() {

    int n;
    cin >> n;

    vector<int> installation;
    vector<int> checkup;

    readData(cin, n, checkup);
    readData(cin, n, installation);

    for (int i = 0; i < n; i++) {
        int damage = installation[i] - checkup[i];
        int lifetime = installation[i] / damage;
        cout << lifetime << ' ';
    }
    cout << endl;

    return 0;
}

void readData(istream & input, int n, vector<int> & vector) {
    while (n--) {
        int cur;
        input >> cur;
        vector.push_back(cur);
    }
}

