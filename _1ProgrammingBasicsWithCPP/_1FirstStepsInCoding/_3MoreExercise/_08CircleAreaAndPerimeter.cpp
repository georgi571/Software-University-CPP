#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r;
    cin >> r;

    double area = M_PI * r * r;
    double perimeter = 2 * M_PI * r;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << area << endl;
    cout << perimeter << endl;
    return 0;
}