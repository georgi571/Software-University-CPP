#include <iostream>
using namespace std;

int main() {
    const double GASOLINE_PRICE_PER_LITER = 2.22;
    const double DIESEL_PRICE_PER_LITER = 2.33;
    const double GAS_PRICE_PER_LITER = 0.93;

    const double DISCOUNT_WITH_CARD_FOR_LITER_GASOLINE = 0.18;
    const double DISCOUNT_WITH_CARD_FOR_LITER_DIESEL = 0.12;
    const double DISCOUNT_WITH_CARD_FOR_LITER_GAS = 0.08;

    const double DISCOUNT_FOR_20_TO_25_LITER = 0.08;
    const double DISCOUNT_FOR_MORE_THAN_25_LITER = 0.10;

    string fuel;
    cin >> fuel;

    int liters;
    cin >> liters;

    string card;
    cin >> card;

    double fuelPricePerLiter = 0.00;

    if (fuel == "Diesel") {
        fuelPricePerLiter = DIESEL_PRICE_PER_LITER;
        if (card == "Yes") {
            fuelPricePerLiter -= DISCOUNT_WITH_CARD_FOR_LITER_DIESEL;
        }
    } else if (fuel == "Gasoline") {
        fuelPricePerLiter = GASOLINE_PRICE_PER_LITER;
        if (card == "Yes") {
            fuelPricePerLiter -= DISCOUNT_WITH_CARD_FOR_LITER_GASOLINE;
        }
    } else if (fuel == "Gas") {
        fuelPricePerLiter = GAS_PRICE_PER_LITER;
        if (card == "Yes") {
            fuelPricePerLiter -= DISCOUNT_WITH_CARD_FOR_LITER_GAS;
        }
    }

    double totalPrice = liters * fuelPricePerLiter;

    if (liters > 25) {
        totalPrice = totalPrice - (totalPrice * DISCOUNT_FOR_MORE_THAN_25_LITER);
    } else if (liters >= 20) {
        totalPrice = totalPrice - (totalPrice * DISCOUNT_FOR_20_TO_25_LITER);
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalPrice << " lv." << endl;

    return 0;
}