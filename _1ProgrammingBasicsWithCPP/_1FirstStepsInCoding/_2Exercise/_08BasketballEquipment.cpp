#include <iostream>
using namespace std;

int main() {
    int annualFee;
    cin >> annualFee;

    double basketballShoes = annualFee * 0.60;
    double basketballClothes = basketballShoes * 0.80;
    double basketballBall = basketballClothes * 0.25;
    double basketballAccessories = basketballBall * 0.20;

    double totalSum = annualFee + basketballShoes + basketballClothes + basketballBall + basketballAccessories;
    cout << totalSum << endl;
    return 0;
}