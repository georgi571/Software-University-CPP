#include <iostream>
using namespace std;

int main() {
    double celsius;
    cin >> celsius;

    double fahrenheit = celsius * 1.8 + 32;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << fahrenheit << endl;
    return 0;
}