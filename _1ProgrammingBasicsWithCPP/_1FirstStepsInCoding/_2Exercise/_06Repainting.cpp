#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    const double priceForNylon = 1.50;
    const double priceForPaint = 14.50;
    const double priceForPaintThinner = 5.00;
    const double priceForBags = 0.40;
    const double percentForWorkerHourWork = 0.30;

    int nylon;
    cin >> nylon;

    int paint;
    cin >> paint;

    int paintThinner;
    cin >> paintThinner;

    int hours;
    cin >> hours;

    double sumForNylon = (nylon + 2) * priceForNylon;
    double sumForPaint = (paint * 1.10) * priceForPaint;
    double sumForPaintThinner = paintThinner * priceForPaintThinner;

    double sumForMaterials = sumForNylon + sumForPaint + sumForPaintThinner + priceForBags;
    double pricePerHourWork = sumForMaterials * percentForWorkerHourWork;

    double sumForWorkers = hours * pricePerHourWork;
    double totalSum = sumForMaterials + sumForWorkers;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << totalSum << endl;
    return 0;
}