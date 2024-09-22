#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    double number;
    cin >> number;
    while (number >= 0) {
        double result = number * 2;
        cout << "Result: " << result << endl;
        cin >> number;
    }
    cout << "Negative number!" << endl;

    return 0;
}