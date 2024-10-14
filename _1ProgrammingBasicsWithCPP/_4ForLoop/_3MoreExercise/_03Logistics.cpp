#include <iostream>
using namespace std;

int main() {

    const int PRICE_PER_TON_WITH_BUS = 200;
    const int PRICE_PER_TON_WITH_TIR = 175;
    const int PRICE_PER_TON_WITH_TRAIN = 120;

    int numberOfCargos;
    cin >> numberOfCargos;

    int cargoTransportedWithBus = 0;
    int cargoTransportedWithTir = 0;
    int cargoTransportedWithTrain = 0;

    for (int i = 0; i < numberOfCargos; i++) {
        int cargo;
        cin >> cargo;

        if (cargo >= 12) {
            cargoTransportedWithTrain += cargo;
        } else if (cargo >= 4) {
            cargoTransportedWithTir += cargo;
        } else {
            cargoTransportedWithBus += cargo;
        }
    }

    int totalCargo = cargoTransportedWithBus + cargoTransportedWithTir + cargoTransportedWithTrain;
    int priceWithBus = cargoTransportedWithBus * PRICE_PER_TON_WITH_BUS;
    int priceWithTir = cargoTransportedWithTir * PRICE_PER_TON_WITH_TIR;
    int priceWithTrain = cargoTransportedWithTrain * PRICE_PER_TON_WITH_TRAIN;
    int totalPrice = priceWithBus + priceWithTir + priceWithTrain;
    double averagePrice = static_cast<double>(totalPrice) / totalCargo;

    double percentTransportedWithBus = static_cast<double>(cargoTransportedWithBus) / totalCargo * 100;
    double percentTransportedWithTir = static_cast<double>(cargoTransportedWithTir) / totalCargo * 100;
    double percentTransportedWithTrain = static_cast<double>(cargoTransportedWithTrain) / totalCargo * 100;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << averagePrice << endl;
    cout << percentTransportedWithBus << "%" << endl;
    cout << percentTransportedWithTir << "%" << endl;
    cout << percentTransportedWithTrain << "%" << endl;

    return 0;
}
