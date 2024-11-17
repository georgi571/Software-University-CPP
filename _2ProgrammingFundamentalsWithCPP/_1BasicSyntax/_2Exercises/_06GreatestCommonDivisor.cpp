#include <iostream>
using namespace std;

int main() {
    int first;
    cin >> first;

    int second;
    cin >> second;

    if (first > second) {
        int temp = first;
        first = second;
        second = temp;
    }

    int gsd;

    while (true) {
        gsd = second % first;
        if (!gsd) {
            gsd = first;
            break;
        }
        second = first;
        first = gsd;
    }

    cout << gsd << endl;

    return 0;
}
