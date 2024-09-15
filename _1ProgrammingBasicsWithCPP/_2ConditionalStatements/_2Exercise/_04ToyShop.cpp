#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const double PUZZLE_PRICE = 2.60;
    const double DOLL_PRICE = 3.00;
    const double BEAR_PRICE = 4.10;
    const double MINION_PRICE = 8.20;
    const double TRUCK_PRICE = 2.00;

    const double DISCOUNT_PERCENT_FOR_BUYING_MORE_THAN_50_TOYS = 0.25;
    const double PERCENT_FOR_RENT = 0.10;

    double priceForTrip;
    cin >> priceForTrip;

    int numberOfPuzzles;
    cin >> numberOfPuzzles;

    int numberOfDolls;
    cin >> numberOfDolls;

    int numberOfBears;
    cin >> numberOfBears;

    int numberOfMinions;
    cin >> numberOfMinions;

    int numberOfTrucks;
    cin >> numberOfTrucks;

    int numberOfToys = numberOfPuzzles + numberOfDolls + numberOfBears + numberOfMinions + numberOfTrucks;

    double puzzlePrice = numberOfPuzzles * PUZZLE_PRICE;
    double dollPrice = numberOfDolls * DOLL_PRICE;
    double bearPrice = numberOfBears * BEAR_PRICE;
    double minionPrice = numberOfMinions * MINION_PRICE;
    double truckPrice = numberOfTrucks * TRUCK_PRICE;

    double totalPrice = puzzlePrice + dollPrice + bearPrice + minionPrice + truckPrice;

    if (numberOfToys >= 50) {
        totalPrice -= totalPrice * DISCOUNT_PERCENT_FOR_BUYING_MORE_THAN_50_TOYS;
    }

    totalPrice -= totalPrice * PERCENT_FOR_RENT;

    cout.setf(ios::fixed);
    cout.precision(2);

    double diff = abs(totalPrice - priceForTrip);
    if (totalPrice >= priceForTrip) {
        cout << "Yes! " << diff << " lv left." << endl;
    } else {
        cout << "Not enough money! " << diff << " lv needed." << endl;
    }

    return 0;
}