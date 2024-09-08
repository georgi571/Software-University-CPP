#include <iostream>
using namespace std;

int main() {
    const double priceForChickenMenu = 10.35;
    const double priceForFishMenu = 12.40;
    const double priceForVegetarianMenu = 8.15;
    const double percentForDesertPrice = 0.20;
    const double priceForDelivery = 2.50;

    int numberOfChickenMenu;
    cin >> numberOfChickenMenu;

    int numberOfFishMenu;
    cin >> numberOfFishMenu;

    int numberOfVegetarianMenu;
    cin >> numberOfVegetarianMenu;

    double sumForChickenMenu = numberOfChickenMenu * priceForChickenMenu;
    double sumForFishMenu = numberOfFishMenu * priceForFishMenu;
    double sumForVegetarianMenu = numberOfVegetarianMenu * priceForVegetarianMenu;

    double sumForAllMenu = sumForChickenMenu + sumForFishMenu + sumForVegetarianMenu;
    double sumForDeserts = sumForAllMenu * percentForDesertPrice;
    double totalSum = sumForAllMenu + sumForDeserts + priceForDelivery;

    cout << totalSum << endl;
    return 0;
}
