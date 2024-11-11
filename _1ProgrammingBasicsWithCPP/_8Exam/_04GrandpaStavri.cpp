#include <iostream>
using namespace std;

int main() {

    int numberOfDays;
    cin >> numberOfDays;

    double totalLiters = 0.0;

    double totalDegree = 0.0;

    for (int i = 0; i < numberOfDays; i++) {
        double litersOfRakia;
        cin >> litersOfRakia;

        double degreesOfRakia;
        cin >> degreesOfRakia;

        totalLiters += litersOfRakia;
        double totalDegreesForToday = litersOfRakia * degreesOfRakia;
        totalDegree += totalDegreesForToday;
    }

    double averageDegree = totalDegree / totalLiters;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Liter: " << totalLiters << endl;
    cout << "Degrees: " << averageDegree << endl;

    if (averageDegree < 38) {
        cout << "Not good, you should baking!" << endl;
    } else if (averageDegree > 42) {
        cout << "Dilution with distilled water!" << endl;
    } else {
        cout << "Super!" << endl;
    }

    return 0;
}
