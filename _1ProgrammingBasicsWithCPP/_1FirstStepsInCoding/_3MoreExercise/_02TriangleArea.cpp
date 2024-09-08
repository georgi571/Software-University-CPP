#include <iostream>
using namespace std;

int main() {
    double a;
    cin >> a;

    double h;
    cin >> h;

    double area = a * h / 2;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << area << endl;
    return 0;
}