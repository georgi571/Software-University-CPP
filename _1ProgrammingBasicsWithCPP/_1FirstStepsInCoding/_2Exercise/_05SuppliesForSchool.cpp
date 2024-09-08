#include <iostream>
using namespace std;

int main() {
    int packageOfPens;
    cin >> packageOfPens;

    int packageOfMarkers;
    cin >> packageOfMarkers;

    int litersOfCleaner;
    cin >> litersOfCleaner;

    int percentDiscount;
    cin >> percentDiscount;

    double sumForPens = packageOfPens * 5.80;
    double sumForMarkers = packageOfMarkers * 7.20;
    double sumForCleaner = litersOfCleaner * 1.20;

    double sumBeforeDiscount = sumForCleaner + sumForMarkers + sumForPens;
    double discount = sumBeforeDiscount * (1.0 * percentDiscount / 100);
    double sumAfterDiscount = sumBeforeDiscount - discount;

    cout << sumAfterDiscount << endl;
    return 0;
}