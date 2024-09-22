#include <iostream>
using namespace std;

int main() {
    const double ALASKA_CAMP_PRICE_PERCENT = 0.65;
    const double ALASKA_HUT_PRICE_PERCENT = 0.80;
    const double ALASKA_HOTEL_PRICE_PERCENT = 0.90;
    const double MOROCCO_CAMP_PRICE_PERCENT = 0.45;
    const double MOROCCO_HUT_PRICE_PERCENT = 0.60;
    const double MOROCCO_HOTEL_PRICE_PERCENT = 0.90;

    double budget;
    cin >> budget;

    string season;
    cin >> season;

    string placeToStay;
    string countryToStay;
    double priceToStay = 0.00;

    if (season == "Summer") {
        countryToStay = "Alaska";
        if (budget <= 1000) {
            placeToStay = "Camp";
            priceToStay = budget * ALASKA_CAMP_PRICE_PERCENT;
        } else if (budget <= 3000) {
            placeToStay = "Hut";
            priceToStay = budget * ALASKA_HUT_PRICE_PERCENT;
        } else if (budget > 3000) {
            placeToStay = "Hotel";
            priceToStay = budget * ALASKA_HOTEL_PRICE_PERCENT;
        }
    } else if (season == "Winter") {
        countryToStay = "Morocco";
        if (budget <= 1000) {
            placeToStay = "Camp";
            priceToStay = budget * MOROCCO_CAMP_PRICE_PERCENT;
        } else if (budget <= 3000) {
            placeToStay = "Hut";
            priceToStay = budget * MOROCCO_HUT_PRICE_PERCENT;
        } else if (budget > 3000) {
            placeToStay = "Hotel";
            priceToStay = budget * MOROCCO_HOTEL_PRICE_PERCENT;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << countryToStay << " - " << placeToStay << " - " << priceToStay << endl;

    return 0;
}