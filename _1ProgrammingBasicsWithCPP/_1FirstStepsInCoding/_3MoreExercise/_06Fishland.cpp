#include <iostream>
using namespace std;

int main() {
    const double bonitoPrisePercent = 1.60;
    const double saffronPrisePercent = 1.80;
    const double musselsPrise = 7.50;

    double priceForMackerelPerKg;
    cin >> priceForMackerelPerKg;

    double priceForSpratPerKg;
    cin >> priceForSpratPerKg;

    double bonitoKg;
    cin >> bonitoKg;

    double saffronKg;
    cin >> saffronKg;

    double musselsKg;
    cin >> musselsKg;

    double sumForBonito = bonitoKg * (priceForMackerelPerKg * bonitoPrisePercent);
    double sumForSaffron = saffronKg * (priceForSpratPerKg * saffronPrisePercent);
    double sumForMussels = musselsKg * musselsPrise;

    double sum = sumForBonito + sumForSaffron + sumForMussels;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << sum << endl;
    return 0;
}
