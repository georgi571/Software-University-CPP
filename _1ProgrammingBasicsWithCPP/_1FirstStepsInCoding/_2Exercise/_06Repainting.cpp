#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int nylon;
    cin >> nylon;

    int paint;
    cin >> paint;

    int paintThinner;
    cin >> paintThinner;

    int hours;
    cin >> hours;

    double sumForNylon = (nylon + 2) * 1.50;
    double sumForPaint = (paint * 1.10) * 14.50;
    double sumForPaintThinner = paintThinner * 5.00;

    double sumForMaterials = sumForNylon + sumForPaint + sumForPaintThinner + 0.40;
    double pricePerHourWork = sumForMaterials * 0.30;

    double sumForWorkers = hours * pricePerHourWork;
    double totalSum = sumForMaterials + sumForWorkers;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << totalSum << endl;
    return 0;
}