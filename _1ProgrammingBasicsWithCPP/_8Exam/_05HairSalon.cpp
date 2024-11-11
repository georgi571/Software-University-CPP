#include <iostream>
using namespace std;

int main() {
    const int MENS_HAIRCUTPRICE = 15;
    const int LADIES_HAIRCUTPRICE = 20;
    const int KIDS_HAIRCUTPRICE = 10;

    const int TOUCH_UP_COLOR = 20;
    const int FULL_COLOR = 30;

    int targetForTheDay;
    cin >> targetForTheDay;

    string command;
    cin >> command;

    int totalAmountForTheDay = 0;

    while (command != "closed") {
        cin.ignore();
        string typeOfService;
        getline(cin, typeOfService);

        if (command == "haircut") {
            if (typeOfService == "mens") {
                totalAmountForTheDay += MENS_HAIRCUTPRICE;
            } else if (typeOfService == "ladies") {
                totalAmountForTheDay += LADIES_HAIRCUTPRICE;
            } else if (typeOfService == "kids") {
                totalAmountForTheDay += KIDS_HAIRCUTPRICE;
            }
        } else if (command == "color") {
            if (typeOfService == "touch up") {
                totalAmountForTheDay += TOUCH_UP_COLOR;
            } else if (typeOfService == "full color") {
                totalAmountForTheDay += FULL_COLOR;
            }
        }

        if (totalAmountForTheDay >= targetForTheDay) {
            break;
        }
        cin >> command;
    }

    int needMoreMoney = targetForTheDay - totalAmountForTheDay;

    if (totalAmountForTheDay >= targetForTheDay) {
        cout << "You have reached your target for the day!" << endl;
    } else {
        cout << "Target not reached! You need " << needMoreMoney << "lv. more." << endl;
    }

    cout << "Earned money: " << totalAmountForTheDay << "lv." << endl;

    return 0;
}
