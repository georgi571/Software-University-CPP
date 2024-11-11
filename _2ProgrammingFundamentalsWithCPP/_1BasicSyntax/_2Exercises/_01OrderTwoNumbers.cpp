#include <iostream>
using namespace std;

int main() {
    int first;
    cin >> first;

    int second;
    cin >> second;

    if (first <= second) {
        cout << first << " " << second << endl;
    } else {
        cout << second << " " << first << endl;
    }

    return 0;
}