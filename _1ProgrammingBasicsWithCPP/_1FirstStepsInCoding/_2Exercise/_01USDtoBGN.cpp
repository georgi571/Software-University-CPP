#include <iostream>
using namespace std;

int main() {
    double usd;
    cin >> usd;

    double exchangeRate = 1.79549;

    double bgn = usd * exchangeRate;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << bgn << endl;
    return 0;
}