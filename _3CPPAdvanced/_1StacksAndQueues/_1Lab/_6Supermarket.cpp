#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

int main() {
    string input;
    cin >> input;

    queue<string> people;

    while (input != "End") {
        if (input == "Paid") {
            while (!people.empty()) {
                string name = people.front();
                people.pop();
                cout << name << endl;
            }
        } else {
            people.push(input);
        }
        cin >> input;
    }

    cout << people.size() << " people remaining." << endl;

    return 0;
}
