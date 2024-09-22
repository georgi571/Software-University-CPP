#include <iostream>
using namespace std;

int main() {
    const double CABRIO_ECONOMY_PRICE_PERCENT = 0.35;
    const double CABRIO_COMPACT_PRICE_PERCENT = 0.45;
    const double JEEP_ECONOMY_PRICE_PERCENT = 0.65;
    const double JEEP_COMPACT_PRICE_PERCENT = 0.80;
    const double JEEP_LUXORY_PRICE_PERCENT = 0.90;

    double budget;
    cin >> budget;

    string season;
    cin >> season;

    string carClass;
    string carType;
    double carPrice = 0.00;

    if (season == "Summer") {
        carType = "Cabrio";
        if (budget <= 100) {
            carClass = "Economy class";
            carPrice = budget * CABRIO_ECONOMY_PRICE_PERCENT;
        } else if (budget <= 500) {
            carClass = "Compact class";
            carPrice = budget * CABRIO_COMPACT_PRICE_PERCENT;
        } else if (budget > 500) {
            carClass = "Luxury class";
            carType = "Jeep";
            carPrice = budget * JEEP_LUXORY_PRICE_PERCENT;
        }
    } else if (season == "Winter") {
        carType = "Jeep";
        if (budget <= 100) {
            carClass = "Economy class";
            carPrice = budget * JEEP_ECONOMY_PRICE_PERCENT;
        } else if (budget <= 500) {
            carClass = "Compact class";
            carPrice = budget * JEEP_COMPACT_PRICE_PERCENT;
        } else if (budget > 500) {
            carClass = "Luxury class";
            carPrice = budget * JEEP_LUXORY_PRICE_PERCENT;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << carClass << endl;
    cout << carType << " - " << carPrice << endl;

    return 0;
}