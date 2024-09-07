#include <iostream>
using namespace std;

int main() {
    int numberOfDogFood;
    cin >> numberOfDogFood;

    int numberOfCatFood;
    cin >> numberOfCatFood;

    double totalPriceForDogFood = numberOfDogFood * 2.5;
    double totalPriceForCatFood = numberOfCatFood * 4;

    double totalPriceForFood = totalPriceForDogFood + totalPriceForCatFood;
    cout << totalPriceForFood << " lv." << endl;
    return 0;
}