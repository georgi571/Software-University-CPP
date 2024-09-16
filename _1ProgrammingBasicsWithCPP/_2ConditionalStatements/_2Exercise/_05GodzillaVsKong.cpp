#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const double PERCENT_FOR_DECOR_PRICE = 0.10;
    const double PERCENT_DISCOUNT_FOR_MORE_THAN_150_ACTORS = 0.10;

    double budged;
    cin >> budged;

    double numberOfActors;
    cin >> numberOfActors;

    double priceForClothesForOneActor;
    cin >> priceForClothesForOneActor;

    double priceForDecor = budged * PERCENT_FOR_DECOR_PRICE;
    double priceForClothes = priceForClothesForOneActor * numberOfActors;

    if (numberOfActors > 150) {
        priceForClothes -= priceForClothes * PERCENT_DISCOUNT_FOR_MORE_THAN_150_ACTORS;
    }

    double totalPrice = priceForClothes + priceForDecor;
    double diff = abs(budged - totalPrice);

    cout.setf(ios::fixed);
    cout.precision(2);


    if (totalPrice <= budged) {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << diff << " leva left." << endl;
    } else {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << diff << " leva more." << endl;
    }
    return 0;
}