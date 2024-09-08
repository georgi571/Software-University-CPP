#include <iostream>
using namespace std;

int main() {
    const double converterToEuro = 1.94;

    double pricePerKgVegetable;
    cin >> pricePerKgVegetable;

    double pricePerKgFruits;
    cin >> pricePerKgFruits;

    int kgOfVegetable;
    cin >> kgOfVegetable;

    int kgOfFruits;
    cin >> kgOfFruits;

    double totalPriceInBGN = pricePerKgVegetable * kgOfVegetable + pricePerKgFruits * kgOfFruits;
    double totalPriceInEuro = totalPriceInBGN / converterToEuro;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalPriceInEuro << endl;
    return 0;
}