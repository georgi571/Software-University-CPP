#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string input;
    cin >> input;

    vector<string> queOne;
    vector<string> queTwo;
    vector<string> queThree;

    while (input != "5") {
        if (input == "99") {
            cout << "1:";
            if (queOne.empty()) {
                cout << " <empty>";
            } else {
                for (auto curr: queOne) {
                    cout << " " << curr;
                }
            }
            cout << endl;

            cout << "2:";
            if (queTwo.empty()) {
                cout << " <empty>";
            } else {
                for (auto curr: queTwo) {
                    cout << " " << curr;
                }
            }
            cout << endl;

            cout << "3:";
            if (queThree.empty()) {
                cout << " <empty>";
            } else {
                for (auto curr: queThree) {
                    cout << " " << curr;
                }
            }
            cout << endl;
        } else if (input == "10") {
            queOne.erase(queOne.begin());
        } else if (input == "20") {
            queTwo.erase(queTwo.begin());
        } else if (input == "12") {
            string name = queOne[0];
            queOne.erase(queOne.begin());
            queTwo.push_back(name);
        } else if (input == "23") {
            string name = queTwo[0];
            queTwo.erase(queTwo.begin());
            queThree.insert(queThree.begin(), name);
        } else if (input == "31") {
            string name = queThree[0];
            queThree.erase(queThree.begin());
            queOne.push_back(name);
        } else {
            int que;
            cin >> que;
            if (que == 1) {
                queOne.push_back(input);
            } else if (que == 2) {
                queTwo.push_back(input);
            }
        }

        cin >> input;
    }

    return 0;
}
