#include <iostream>
using namespace std;

int main() {

    int days;
    cin >> days;

    int doctors = 7;

    int treatedPatients = 0;
    int untreatedPatients = 0;

    for (int i = 1; i <= days; i++) {
        int patientForTheDay;
        cin >> patientForTheDay;

        if (i % 3 == 0) {
            if (treatedPatients < untreatedPatients) {
                doctors++;
            }
        }

        if (patientForTheDay <= doctors) {
            treatedPatients += patientForTheDay;
        } else {
            treatedPatients += doctors;
            untreatedPatients += patientForTheDay - doctors;
        }

    }

    cout << "Treated patients: " << treatedPatients << "." << endl;
    cout << "Untreated patients: " << untreatedPatients << "." << endl;

    return 0;
}