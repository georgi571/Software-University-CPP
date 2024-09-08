#include <iostream>
using namespace std;

int main() {
    const double percentPriceForShoes = 0.60;
    const double percentPriceForClothes = 0.80;
    const double percentPriceForBall = 0.25;
    const double percentPriceForAccessories = 0.20;


    int annualFee;
    cin >> annualFee;

    double basketballShoes = annualFee * percentPriceForShoes;
    double basketballClothes = basketballShoes * percentPriceForClothes;
    double basketballBall = basketballClothes * percentPriceForBall;
    double basketballAccessories = basketballBall * percentPriceForAccessories;

    double totalSum = annualFee + basketballShoes + basketballClothes + basketballBall + basketballAccessories;
    cout << totalSum << endl;
    return 0;
}