#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    int number;
    cin >> number;

    queue<string> people;

    istringstream iss(input);

    string name;
    while (iss >> name) {
        people.push(name);
    }

    while (people.size() > 1) {
        for (int i = 0; i < number - 1; i++) {
            string curr = people.front();
            people.pop();
            people.push(curr);
        }
        string curr = people.front();
        people.pop();
        cout << "Removed " << curr << endl;
    }

    string last = people.front();
    people.pop();
    cout << "Last is " << last << endl;

    return 0;
}
