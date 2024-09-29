#include <iostream>
using namespace std;

int main() {
    const int LILI_BROTHER_STEAL_MONEY = 1;
    int n;
    cin >> n;

    double washingMachinePrice;
    cin >> washingMachinePrice;

    int sellingPricePerToy;
    cin >> sellingPricePerToy;

    int numberOfToys = 0;
    int money = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            money += (i / 2) * 10;
            money -= LILI_BROTHER_STEAL_MONEY;
        } else {
            numberOfToys++;
        }
    }

    int moneyFromToys = numberOfToys * sellingPricePerToy;
    int totalMoney = money + moneyFromToys;

    double diff = abs(totalMoney - washingMachinePrice);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalMoney >= washingMachinePrice) {
        cout << "Yes! " << diff << endl;
    } else {
        cout << "No! " << diff << endl;
    }

    return 0;
}