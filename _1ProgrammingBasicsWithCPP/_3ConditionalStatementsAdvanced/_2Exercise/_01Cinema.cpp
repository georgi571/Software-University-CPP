#include <iostream>
using namespace std;

int main() {
    const double PREMIERE_PRICE = 12.00;
    const double NORMAL_PRICE = 7.50;
    const double DISCOUNT_PRICE = 5.00;

    string type;
    cin >> type;

    int numberOfRows;
    cin >> numberOfRows;

    int numberOfColumns;
    cin >> numberOfColumns;

    int numberOfSeats = numberOfRows * numberOfColumns;

    double totalPrice;

    if (type == "Premiere") {
        totalPrice = numberOfSeats * PREMIERE_PRICE;
    } else if (type == "Normal") {
        totalPrice = numberOfSeats * NORMAL_PRICE;
    } else if (type == "Discount") {
        totalPrice = numberOfSeats * DISCOUNT_PRICE;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalPrice << endl;

    return 0;
}