#include <iostream>
using namespace std;

int main() {
    double x1;
    cin >> x1;

    double y1;
    cin >> y1;

    double x2;
    cin >> x2;

    double y2;
    cin >> y2;

    double x;
    cin >> x;

    double y;
    cin >> y;

    if (y == y1 || y == y2) {
        if (x >= x1 && x <= x2) {
            cout << "Border" << endl;
        } else {
            cout << "Inside / Outside" << endl;
        }
    } else if (x == x1 || x == x2) {
        if (y >= y1 && y <= y2) {
            cout << "Border" << endl;
        } else {
            cout << "Inside / Outside" << endl;
        }
    } else {
        cout << "Inside / Outside" << endl;
    }

    return 0;
}