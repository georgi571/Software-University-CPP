#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int startingPoints;
    cin >> startingPoints;

    int winningPoints = 0;
    int winTournaments = 0;

    for (int i = 0; i < n; i++) {
        string position;
        cin >> position;

        if (position == "W") {
            winningPoints += 2000;
            winTournaments++;
        } else if (position == "F") {
            winningPoints += 1200;
        } else if (position == "SF") {
            winningPoints += 720;
        }
    }

    int finalPoints = winningPoints + startingPoints;
    int averagePoints = winningPoints / n;
    double percentWinner = (1.0 * winTournaments / n) * 100;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Final points: " << finalPoints << endl;
    cout << "Average points: " << averagePoints << endl;
    cout << percentWinner << "%" << endl;

    return 0;
}