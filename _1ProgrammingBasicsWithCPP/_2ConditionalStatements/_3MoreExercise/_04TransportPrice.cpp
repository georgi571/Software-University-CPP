#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    const double TAXI_START_MONEY = 0.70;
    const double TAXI_PER_KM_AT_DAY = 0.79;
    const double TAXI_PER_KM_AT_NIGHT = 0.90;
    const double BUS_PER_KM = 0.09;
    const double TRAIN_PER_KM = 0.06;
    const int MINIMUM_KM_TO_USE_BUS = 20;
    const int MINIMUM_KM_TO_USE_TRAIN = 100;

    int km;
    cin >> km;

    string dayTime;
    cin >> dayTime;

    double totalPrice = 0.00;

    if (km >= MINIMUM_KM_TO_USE_TRAIN) {
        totalPrice = km *  TRAIN_PER_KM;
    } else if (km >= MINIMUM_KM_TO_USE_BUS) {
        totalPrice = km * BUS_PER_KM;
    } else {
        if (dayTime == "day") {
            totalPrice = km * TAXI_PER_KM_AT_DAY + TAXI_START_MONEY;
        } else if (dayTime == "night") {
            totalPrice = km * TAXI_PER_KM_AT_NIGHT + TAXI_START_MONEY;
        }
    }

    cout.setf(ios::fixed);
    cout << setprecision(2);

    cout << totalPrice << endl;

    return 0;
}