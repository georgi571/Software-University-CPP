#include <iostream>
using namespace std;

int main() {
    const double ROSES_PRICE = 5.00;
    const double DAHLIAS_PRICE = 3.80;
    const double TULIPS_PRICE = 2.80;
    const double NARCISSUS_PRICE = 3.00;
    const double GLADIOLUS_PRICE = 2.50;

    const double DISCOUNT_IF_BUY_MORE_THAN_80_ROSES = 0.10;
    const double DISCOUNT_IF_BUY_MORE_THAN_90_DAHLIAS = 0.15;
    const double DISCOUNT_IF_BUY_MORE_THAN_80_TULIPS = 0.15;
    const double INCREASE_IF_BUY_LESS_THAN_120_NARCISSUS = 0.15;
    const double INCREASE_IF_BUY_LESS_THAN_80_GLADIOLUS = 0.20;

    string flowers;
    cin >> flowers;

    int numberOfFlowers;
    cin >> numberOfFlowers;

    int budget;
    cin >> budget;

    double totalSum = 0.0;

    if (flowers == "Roses") {
        totalSum = numberOfFlowers * ROSES_PRICE;
        if (numberOfFlowers > 80) {
            totalSum = totalSum - (totalSum * DISCOUNT_IF_BUY_MORE_THAN_80_ROSES);
        }
    } else if (flowers == "Dahlias") {
        totalSum = numberOfFlowers * DAHLIAS_PRICE;
        if (numberOfFlowers > 90) {
            totalSum = totalSum - (totalSum * DISCOUNT_IF_BUY_MORE_THAN_90_DAHLIAS);
        }
    } else if (flowers == "Tulips") {
        totalSum = numberOfFlowers * TULIPS_PRICE;
        if (numberOfFlowers > 80) {
            totalSum = totalSum - (totalSum * DISCOUNT_IF_BUY_MORE_THAN_80_TULIPS);
        }
    } else if (flowers == "Narcissus") {
        totalSum = numberOfFlowers * NARCISSUS_PRICE;
        if (numberOfFlowers < 120) {
            totalSum = totalSum + (totalSum * INCREASE_IF_BUY_LESS_THAN_120_NARCISSUS);
        }
    } else if (flowers == "Gladiolus") {
        totalSum = numberOfFlowers * GLADIOLUS_PRICE;
        if (numberOfFlowers < 80) {
            totalSum = totalSum + (totalSum * INCREASE_IF_BUY_LESS_THAN_80_GLADIOLUS);
        }
    }

    double diff = abs(budget - totalSum);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget >= totalSum) {
        cout << "Hey, you have a great garden with " << numberOfFlowers << " " << flowers << " and " << diff << " leva left." << endl;
    } else {
        cout << "Not enough money, you need " << diff << " leva more." << endl;
    }

    return 0;
}