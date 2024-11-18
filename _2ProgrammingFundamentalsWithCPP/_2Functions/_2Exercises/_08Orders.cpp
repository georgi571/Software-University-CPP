#include <iostream>
using namespace std;

double getPrice(string product);

int main() {
    string product;
    cin >> product;

    int quantity;
    cin >> quantity;

    double price = getPrice(product);
    double sum = price * quantity;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << sum << endl;

    return 0;
}

double getPrice(string product) {
    double price = 0.0;

    if (product == "coffee") {
        price = 1.50;
    } else if (product == "water") {
        price = 1.00;
    } else if (product == "coke") {
        price = 1.40;
    } else if (product == "snacks") {
        price = 2.00;
    }

    return price;
}