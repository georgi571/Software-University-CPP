#include <iostream>
using namespace std;

int main() {
    double degree;
    cin >> degree;

    if (degree < 5.00 || degree > 35.00) {
        cout << "unknown" << endl;
    } else if (degree < 12.00) {
        cout << "Cold" << endl;
    } else if (degree < 15.00) {
        cout << "Cool" << endl;
    } else if (degree <= 20.00) {
        cout << "Mild" << endl;
    } else if (degree < 26.00) {
        cout << "Warm" << endl;
    } else if (degree <= 35.00) {
        cout << "Hot" << endl;
    }

    return 0;
}