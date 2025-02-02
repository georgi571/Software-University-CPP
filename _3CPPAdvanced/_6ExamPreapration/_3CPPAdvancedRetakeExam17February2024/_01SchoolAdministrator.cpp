#include <iostream>
#include <map>
#include <set>
#include <sstream>
using namespace std;

int main() {
    string name;
    cin >> name;

    map<string, set<int> > students;

    while (name != "END") {
        int room;
        cin >> room;

        if (students.find(name) == students.end()) {
            students[name] = set<int>();
        }

        students[name].insert(room);

        cin >> name;
    }

    cin >> name;

    while (name != "END") {

        cout << name << ":";
        if (students.find(name) == students.end()) {
            cout << " Not found!";
        } else {
            set<int> rooms = students[name];
            for (int room : rooms) {
                cout << " " << room;
            }
        }
        cout << endl;

        cin >> name;
    }

    return 0;
}
