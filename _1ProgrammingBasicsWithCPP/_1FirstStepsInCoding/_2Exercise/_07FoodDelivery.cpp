#include <iostream>
using namespace std;

int main() {
    int numberOfChickenMenu;
    cin >> numberOfChickenMenu;

    int numberOfFishMenu;
    cin >> numberOfFishMenu;

    int numberOfVegetarianMenu;
    cin >> numberOfVegetarianMenu;

    double sumForChickenMenu = numberOfChickenMenu * 10.35;
    double sumForFishMenu = numberOfFishMenu * 12.40;
    double sumForVegetarian = numberOfVegetarianMenu * 8.15;

    double sumForAllMenu = sumForChickenMenu + sumForFishMenu + sumForVegetarian;
    double sumForDeserts = sumForAllMenu * 0.2;
    double totalSum = sumForAllMenu + sumForDeserts + 2.50;

    cout << totalSum << endl;
    return 0;
}
