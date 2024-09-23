#include <cmath>
#include <iostream>
using namespace std;

int main() {
    const double PERCENT_TO_MAKE_WINE = 0.40;
    const double GRAPES_NEED_FOR_1_LITER_WINE = 2.50;

    int squareMetersOfVineyard;
    cin >> squareMetersOfVineyard;

    double grapesForOneSquareMeter;
    cin >> grapesForOneSquareMeter;

    int neededLitersOfWine;
    cin >> neededLitersOfWine;

    int numberOfWorkers;
    cin >> numberOfWorkers;

    double grapes = squareMetersOfVineyard * grapesForOneSquareMeter;
    double grapesForWine = grapes * PERCENT_TO_MAKE_WINE;
    double wine = grapesForWine / GRAPES_NEED_FOR_1_LITER_WINE;

    double totalWine = floor(wine);
    double diff = abs(floor(neededLitersOfWine - wine));
    double winePerWorker = ceil(diff / numberOfWorkers);

    if (wine >= neededLitersOfWine) {
        cout << "Good harvest this year! Total wine: " << totalWine << " liters." << endl;
        cout << diff << " liters left -> " << winePerWorker << " liters per person." << endl;
    } else {
        cout << "It will be a tough winter! More " << diff << " liters wine needed. " << endl;
    }
    
    return 0;
}