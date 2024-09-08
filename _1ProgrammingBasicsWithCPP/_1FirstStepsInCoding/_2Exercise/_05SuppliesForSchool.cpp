#include <iostream>
using namespace std;

int main() {
    const double priceForPen = 5.80;
    const double priceForMarkers = 7.20;
    const double priceForCleaner = 1.20;

    int packageOfPens;
    cin >> packageOfPens;

    int packageOfMarkers;
    cin >> packageOfMarkers;

    int litersOfCleaner;
    cin >> litersOfCleaner;

    int percentDiscount;
    cin >> percentDiscount;

    double sumForPens = packageOfPens * priceForPen;
    double sumForMarkers = packageOfMarkers * priceForMarkers;
    double sumForCleaner = litersOfCleaner * priceForCleaner;

    double sumBeforeDiscount = sumForCleaner + sumForMarkers + sumForPens;
    double discount = sumBeforeDiscount * (1.0 * percentDiscount / 100);
    double sumAfterDiscount = sumBeforeDiscount - discount;

    cout << sumAfterDiscount << endl;
    return 0;
}