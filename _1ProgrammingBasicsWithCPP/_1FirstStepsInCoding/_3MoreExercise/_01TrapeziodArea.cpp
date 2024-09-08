#include <iostream>
using namespace std;

int main() {
    double b1;
    cin >> b1;

    double b2;
    cin >> b2;

    double h;
    cin >> h;

    double area = (b1 + b2) * h / 2;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << area << endl;
    return 0;
}
