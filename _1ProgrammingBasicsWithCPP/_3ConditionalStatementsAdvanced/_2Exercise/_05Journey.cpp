#include <iostream>
using namespace std;

int main() {
    const double PERCENT_USE_MONEY_FROM_BUDGED_IN_BULGARIA_SUMMER_TIME = 0.30;
    const double PERCENT_USE_MONEY_FROM_BUDGED_IN_BULGARIA_WINTER_TIME = 0.70;
    const double PERCENT_USE_MONEY_FROM_BUDGED_IN_BALKANS_SUMMER_TIME = 0.40;
    const double PERCENT_USE_MONEY_FROM_BUDGED_IN_BALKANS_WINTER_TIME = 0.80;
    const double PERCENT_USE_MONEY_FROM_BUDGED_IN_EUROPA_ALL_TIME = 0.90;

    double budged;
    cin >> budged;

    string season;
    cin >> season;

    string destination;
    string placeToStay;
    double moneyUse = 0.0;
    if (budged <= 100) {
        destination = "Bulgaria";
        if (season == "summer") {
            placeToStay = "Camp";
            moneyUse = budged * PERCENT_USE_MONEY_FROM_BUDGED_IN_BULGARIA_SUMMER_TIME;
        } else if (season == "winter") {
            placeToStay = "Hotel";
            moneyUse = budged * PERCENT_USE_MONEY_FROM_BUDGED_IN_BULGARIA_WINTER_TIME;
        }
    } else if (budged <= 1000) {
        destination = "Balkans";
        if (season == "summer") {
            placeToStay = "Camp";
            moneyUse = budged * PERCENT_USE_MONEY_FROM_BUDGED_IN_BALKANS_SUMMER_TIME;
        } else if (season == "winter") {
            placeToStay = "Hotel";
            moneyUse = budged * PERCENT_USE_MONEY_FROM_BUDGED_IN_BALKANS_WINTER_TIME;
        }
    } else if (budged > 1000) {
        destination = "Europe";
        placeToStay = "Hotel";
        moneyUse = budged * PERCENT_USE_MONEY_FROM_BUDGED_IN_EUROPA_ALL_TIME;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Somewhere in " << destination << endl;
    cout << placeToStay << " - " << moneyUse << endl;


    return 0;
}