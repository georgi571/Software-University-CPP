#include <iostream>
using namespace std;

int main() {

    double amount;
    cin >> amount;

    int years;
    cin >> years;

    int yearsOld = 18;

    double leftAmount = amount;
    for (int i = 1800; i <= years; ++i) {
        if (i % 2 == 0) {
            leftAmount -= 12000;
        } else {
            leftAmount -= 12000 + yearsOld * 50;
        }
        yearsOld++;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (leftAmount >= 0) {
        cout << "Yes! He will live a carefree life and will have " << leftAmount << " dollars left." << endl;
    } else {
        cout << "He will need " << abs(leftAmount) << " dollars to survive." << endl;
    }

    return 0;
}