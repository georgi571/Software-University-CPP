#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    int capacity;
    cin >> capacity;

    istringstream iss(input);

    stack<int> clothes;

    int current;
    while (iss >> current) {
        clothes.push(current);
    }

    int currRack = capacity;
    int totalRacks = 1;

    while (!clothes.empty()) {
        int currentClothes = clothes.top(); clothes.pop();
        if (currentClothes <= currRack) {
            currRack -= currentClothes;
        } else {
            currRack = capacity;
            currRack -= currentClothes;
            totalRacks++;
        }
    }

    cout << totalRacks << endl;

    return 0;
}
