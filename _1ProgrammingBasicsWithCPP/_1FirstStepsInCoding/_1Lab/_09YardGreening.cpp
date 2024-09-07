#include <iostream>
using namespace std;

int main() {
    double squareMeters;
    cin >> squareMeters;

    double price = squareMeters * 7.61;
    double discount = price * 0.18;
    double finalPrice = price - discount;

    cout << "The final price is: " << finalPrice << " lv." << endl;
    cout << "The discount is: " << discount << " lv." << endl;
    return 0;
}
