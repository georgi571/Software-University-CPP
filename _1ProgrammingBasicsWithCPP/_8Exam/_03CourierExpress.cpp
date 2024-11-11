#include <iostream>
using namespace std;

int main() {
    const double STANDART_PRICE_FOR_KG_LESS_THAN_1_KG_PER_KM = 0.03;
    const double STANDART_PRICE_FOR_KG_LESS_THAN_10_KG_PER_KM = 0.05;
    const double STANDART_PRICE_FOR_KG_LESS_THAN_40_KG_PER_KM = 0.10;
    const double STANDART_PRICE_FOR_KG_LESS_THAN_90_KG_PER_KM = 0.15;
    const double STANDART_PRICE_FOR_KG_LESS_THAN_150_KG_PER_KM = 0.20;

    const double EXPRESS_PRICE_FOR_KG_LESS_THAN_1_KG_PER_KM = STANDART_PRICE_FOR_KG_LESS_THAN_1_KG_PER_KM * 0.80;
    const double EXPRESS_PRICE_FOR_KG_LESS_THAN_10_KG_PER_KM = STANDART_PRICE_FOR_KG_LESS_THAN_10_KG_PER_KM * 0.40;
    const double EXPRESS_PRICE_FOR_KG_LESS_THAN_40_KG_PER_KM = STANDART_PRICE_FOR_KG_LESS_THAN_40_KG_PER_KM * 0.05;
    const double EXPRESS_PRICE_FOR_KG_LESS_THAN_90_KG_PER_KM = STANDART_PRICE_FOR_KG_LESS_THAN_90_KG_PER_KM * 0.02;
    const double EXPRESS_PRICE_FOR_KG_LESS_THAN_150_KG_PER_KM = STANDART_PRICE_FOR_KG_LESS_THAN_150_KG_PER_KM * 0.01;


    double kgOfPackage;
    cin >> kgOfPackage;

    string typeOfService;
    cin >> typeOfService;

    int distanceInKm;
    cin >> distanceInKm;

    double priceForDelivery = 0.0;

    if (kgOfPackage < 1) {
        priceForDelivery = distanceInKm * STANDART_PRICE_FOR_KG_LESS_THAN_1_KG_PER_KM;
    } else if (kgOfPackage < 10) {
        priceForDelivery = distanceInKm * STANDART_PRICE_FOR_KG_LESS_THAN_10_KG_PER_KM;
    } else if (kgOfPackage < 40) {
        priceForDelivery = distanceInKm * STANDART_PRICE_FOR_KG_LESS_THAN_40_KG_PER_KM;
    } else if (kgOfPackage < 90) {
        priceForDelivery = distanceInKm * STANDART_PRICE_FOR_KG_LESS_THAN_90_KG_PER_KM;
    } else if (kgOfPackage < 150) {
        priceForDelivery = distanceInKm * STANDART_PRICE_FOR_KG_LESS_THAN_150_KG_PER_KM;
    }

    if (typeOfService == "express") {
        double overprice = 0.0;
        if (kgOfPackage < 1) {
            overprice = kgOfPackage * EXPRESS_PRICE_FOR_KG_LESS_THAN_1_KG_PER_KM;
        } else if (kgOfPackage < 10) {
            overprice = kgOfPackage * EXPRESS_PRICE_FOR_KG_LESS_THAN_10_KG_PER_KM;
        } else if (kgOfPackage < 40) {
            overprice = kgOfPackage * EXPRESS_PRICE_FOR_KG_LESS_THAN_40_KG_PER_KM;
        } else if (kgOfPackage < 90) {
            overprice = kgOfPackage * EXPRESS_PRICE_FOR_KG_LESS_THAN_90_KG_PER_KM;
        } else if (kgOfPackage < 150) {
            overprice = kgOfPackage * EXPRESS_PRICE_FOR_KG_LESS_THAN_150_KG_PER_KM;
        }
        priceForDelivery += distanceInKm * overprice;

    }

    cout.setf(ios::fixed);
    cout.precision(3);

    cout << "The delivery of your shipment with weight of " << kgOfPackage;

    cout.precision(2);
    cout<< " kg. would cost " << priceForDelivery <<" lv." << endl;


    return 0;
}
