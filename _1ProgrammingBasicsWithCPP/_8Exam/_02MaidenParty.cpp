#include <iostream>
using namespace std;

int main() {

    const double LOVE_MESSAGE_PRICE = 0.60;
    const double WAX_ROSE_PRICE = 7.20;
    const double KEYCHAIN_PRICE = 3.60;
    const double CARTOON_PRICE = 18.20;
    const double LUCKY_SURPRICE_PRICE = 22.00;
    const double PERCENT_DISCOUTN = 0.35;
    const double PERCENT_HOSTING = 0.10;

    double priceOfMaidenParty;
    cin >> priceOfMaidenParty;

    int numberOfLoveMessage;
    cin >> numberOfLoveMessage;

    int numberOfWaxRoses;
    cin >> numberOfWaxRoses;

    int numberOfKeychain;
    cin >> numberOfKeychain;

    int numberOfCartoon;
    cin >> numberOfCartoon;

    int numberOfLuckySurprise;
    cin >> numberOfLuckySurprise;

    double priceForLoveMessage = numberOfLoveMessage * LOVE_MESSAGE_PRICE;
    double priceForWaxRoses = numberOfWaxRoses * WAX_ROSE_PRICE;
    double priceForKeychain = numberOfKeychain * KEYCHAIN_PRICE;
    double priceForCartoon = numberOfCartoon * CARTOON_PRICE;
    double priceForLuckySurprise = numberOfLuckySurprise * LUCKY_SURPRICE_PRICE;

    double totalSum = priceForLoveMessage + priceForWaxRoses + priceForKeychain + priceForCartoon + priceForLuckySurprise;

    int totalArticle = numberOfLoveMessage + numberOfWaxRoses + numberOfKeychain + numberOfCartoon + numberOfLuckySurprise;

    double totalSumAfterDiscount = totalSum;
    if (totalArticle >= 25) {
        double discount = totalSum * PERCENT_DISCOUTN;
        totalSumAfterDiscount -= discount;
    }

    double hostingPrice = totalSumAfterDiscount * PERCENT_HOSTING;

    double totalProfit = totalSumAfterDiscount - hostingPrice;


    double diff = abs(totalProfit - priceOfMaidenParty);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalSum > priceOfMaidenParty) {
        cout << "Yes! " << diff << " lv left." << endl;
    } else {
        cout << "Not enough money! " << diff << " lv needed." << endl;
    }

    return 0;
}