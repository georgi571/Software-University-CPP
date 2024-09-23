#include <cmath>
#include <iostream>
using namespace std;

int main() {
    const double PRICE_PER_MAGNOLIA = 3.25;
    const double PRICE_PER_HYACINTH = 4.00;
    const double PRICE_PER_ROSE = 3.50;
    const double PRICE_PER_CACTUS = 8.00;

    const double TAXEX = 0.05;

    int numberOfMagnolia;
    cin >> numberOfMagnolia;

    int numberOfHyacinth;
    cin >> numberOfHyacinth;

    int numberOfRose;
    cin >> numberOfRose;

    int numberOfCactus;
    cin >> numberOfCactus;

    double priceForGift;
    cin >> priceForGift;

    double priceForMagnolia = numberOfMagnolia * PRICE_PER_MAGNOLIA;
    double priceForHyacinth = numberOfHyacinth * PRICE_PER_HYACINTH;
    double priceForRose = numberOfRose * PRICE_PER_ROSE;
    double priceForCactus = numberOfCactus * PRICE_PER_CACTUS;

    double totalPrice = priceForMagnolia + priceForHyacinth + priceForRose + priceForCactus;
    double totalPriceAfterTax = totalPrice - (totalPrice * TAXEX);

    double moneyLeft = floor(totalPriceAfterTax - priceForGift);
    double moneyNeeded = ceil(priceForGift - totalPriceAfterTax);

    if (totalPriceAfterTax >= priceForGift) {
        cout << "She is left with " << moneyLeft << " leva." << endl;
    } else {
        cout << "She will have to borrow " << moneyNeeded << " leva." << endl;
    }
    
    return 0;
}