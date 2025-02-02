#include <iostream>
#include <sstream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    string fish;
    cin >> fish;

    stack<string> flowA;
    queue<string> flowB;

    while (fish != "end") {
        string flow;
        cin >> flow;

        if (flow == "A") {
            flowA.push(fish);
        } else if (flow == "B") {
            flowB.push(fish);
        }

        cin >> fish;
    }

    cout << "Flow A:" << endl;
    if (!flowA.empty()) {
        bool isFirst = true;
        while (!flowA.empty()) {
            if (isFirst) {
                isFirst = false;
            } else {
                cout << ", ";
            }
            cout << flowA.top();
            flowA.pop();
        }
        cout << endl;
    } else {
        cout << "<EMPTY>" << endl;
    }
    cout << "Flow B:" << endl;
    if (!flowB.empty()) {
        bool isFirst = true;
        while (!flowB.empty()) {
            if (isFirst) {
                isFirst = false;
            } else {
                cout << ", ";
            }
            cout << flowB.front();
            flowB.pop();
        }
        cout << endl;
    } else {
        cout << "<EMPTY>" << endl;
    }

    return 0;
}
