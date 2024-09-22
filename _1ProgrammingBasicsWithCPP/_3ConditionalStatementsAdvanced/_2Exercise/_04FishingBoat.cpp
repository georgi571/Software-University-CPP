#include <iostream>
using namespace std;

int main() {
    const double SPRING_PRICE = 3000.00;
    const double SUMMER_AND_AUTUMN_PRICE = 4200.00;
    const double WINTER_PRICE = 2600.00;

    const double DISCOUNT_FOR_GROUP_FROM_1_TO_6_PEOPLE = 0.10;
    const double DISCOUNT_FOR_GROUP_FROM_7_TO_12_PEOPLE = 0.15;
    const double DISCOUNT_FOR_GROUP_FOR_MORE_THAN_12_PEOPLE = 0.25;

    const double DISCOUNT_FOR_GROUP_OF_PEOPLE_IF_THEY_ARE_EVEN_UNLESS_SEASON_IS_AUTUMN = 0.05;

    int budged;
    cin >> budged;

    string season;
    cin >> season;

    int numberOfFisher;
    cin >> numberOfFisher;

    double totalPrice = 0.0;
    if (season == "Spring") {
        totalPrice = SPRING_PRICE;
    } else if (season == "Winter") {
        totalPrice = WINTER_PRICE;
    } else if (season == "Summer" || season == "Autumn") {
        totalPrice = SUMMER_AND_AUTUMN_PRICE;
    }

    if (numberOfFisher <= 6) {
        totalPrice = totalPrice - (totalPrice * DISCOUNT_FOR_GROUP_FROM_1_TO_6_PEOPLE);
    } else if (numberOfFisher <= 12) {
        totalPrice = totalPrice - (totalPrice * DISCOUNT_FOR_GROUP_FROM_7_TO_12_PEOPLE);
    } else if (numberOfFisher > 12) {
        totalPrice = totalPrice - (totalPrice * DISCOUNT_FOR_GROUP_FOR_MORE_THAN_12_PEOPLE);
    }

    if (numberOfFisher %2 == 0 && season != "Autumn") {
        totalPrice = totalPrice - (totalPrice * DISCOUNT_FOR_GROUP_OF_PEOPLE_IF_THEY_ARE_EVEN_UNLESS_SEASON_IS_AUTUMN);
    }

    double diff = abs(budged - totalPrice);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budged >= totalPrice) {
        cout << "Yes! You have " << diff << " leva left." << endl;
    } else {
        cout << "Not enough money! You need " << diff << " leva." << endl;
    }

    return 0;
}