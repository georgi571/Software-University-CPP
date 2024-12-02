#include <iostream>
#include <list>
#include <sstream>
using namespace std;

int main() {
    list<int> intList;

    string data;
    getline(cin, data);

    istringstream iss(data);
    int num;

    while (iss >> num) {
        if (num >= 0) {
            intList.push_back(num);
        }
    }

    if (intList.empty()) {
        cout << "empty" << endl;
    } else {
        list<int>::iterator it;
        it = intList.end();
        it--;
        while (true) {
            cout << *it <<" ";
            if (it == intList.begin()) {
                break;
            }
            it--;
        }
        cout << endl;
    }

    return 0;
}