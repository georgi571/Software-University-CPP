#include <iostream>
using namespace std;

int main() {
    const double PRICE_PER_NIGHT_FOR_STUDIO_AT_MAY_AND_OCTOBER = 50.00;
    const double PRICE_PER_NIGHT_FOR_STUDIO_AT_JUNE_AND_SEPTEMBER = 75.20;
    const double PRICE_PER_NIGHT_FOR_STUDIO_AT_JULY_AND_AUGUST = 76.00;

    const double PRICE_PER_NIGHT_FOR_APARTMENT_AT_MAY_AND_OCTOBER = 65.00;
    const double PRICE_PER_NIGHT_FOR_APARTMENT_AT_JUNE_AND_SEPTEMBER = 68.70;
    const double PRICE_PER_NIGHT_FOR_APARTMENT_AT_JULY_AND_AUGUST = 77.00;

    const double DISCOUNT_FOR_STUDIO_AT_MAY_AND_OCTOBER_FOR_MORE_THAN_7_NIGHTS = 0.05;
    const double DISCOUNT_FOR_STUDIO_AT_MAY_AND_OCTOBER_FOR_MORE_THAN_14_NIGHTS = 0.30;
    const double DISCOUNT_FOR_STUDIO_AT_JUNE_AND_SEPTEMBER_FOR_MORE_THAN_14_NIGHTS = 0.20;
    const double DISCOUNT_FOR_APARTMENT_AT_ALL_MONTHS_FOR_MORE_THAN_14_NIGHTS = 0.10;

    string month;
    cin >> month;

    int numberOfNights;
    cin >> numberOfNights;

    double priceForStudio = 0.00;
    double priceForApartment = 0.00;

    if (month == "May" || month == "October") {
        priceForStudio = numberOfNights * PRICE_PER_NIGHT_FOR_STUDIO_AT_MAY_AND_OCTOBER;
        priceForApartment = numberOfNights * PRICE_PER_NIGHT_FOR_APARTMENT_AT_MAY_AND_OCTOBER;
        if (numberOfNights > 14) {
            priceForStudio = priceForStudio - (priceForStudio * DISCOUNT_FOR_STUDIO_AT_MAY_AND_OCTOBER_FOR_MORE_THAN_14_NIGHTS);
            priceForApartment = priceForApartment - (priceForApartment * DISCOUNT_FOR_APARTMENT_AT_ALL_MONTHS_FOR_MORE_THAN_14_NIGHTS);
        } else if (numberOfNights > 7) {
            priceForStudio = priceForStudio - (priceForStudio * DISCOUNT_FOR_STUDIO_AT_MAY_AND_OCTOBER_FOR_MORE_THAN_7_NIGHTS);
        }
    } else if (month == "June" || month == "September") {
        priceForStudio = numberOfNights * PRICE_PER_NIGHT_FOR_STUDIO_AT_JUNE_AND_SEPTEMBER;
        priceForApartment = numberOfNights * PRICE_PER_NIGHT_FOR_APARTMENT_AT_JUNE_AND_SEPTEMBER;
        if (numberOfNights > 14) {
            priceForStudio = priceForStudio - (priceForStudio * DISCOUNT_FOR_STUDIO_AT_JUNE_AND_SEPTEMBER_FOR_MORE_THAN_14_NIGHTS);
            priceForApartment = priceForApartment - (priceForApartment * DISCOUNT_FOR_APARTMENT_AT_ALL_MONTHS_FOR_MORE_THAN_14_NIGHTS);
        }
    } else if (month == "July" || month == "August") {
        priceForStudio = numberOfNights * PRICE_PER_NIGHT_FOR_STUDIO_AT_JULY_AND_AUGUST;
        priceForApartment = numberOfNights * PRICE_PER_NIGHT_FOR_APARTMENT_AT_JULY_AND_AUGUST;
        if (numberOfNights > 14) {
            priceForApartment = priceForApartment - (priceForApartment * DISCOUNT_FOR_APARTMENT_AT_ALL_MONTHS_FOR_MORE_THAN_14_NIGHTS);
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Apartment: " << priceForApartment << " lv." << endl;
    cout << "Studio: " << priceForStudio << " lv." << endl;

    return 0;
}