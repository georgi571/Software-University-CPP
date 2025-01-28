#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <climits>
#include <iterator>
using namespace std;


int main() {
    int n;
    cin >> n;

    int neededPoints;
    cin >> neededPoints;

    int swimmerCount;
    cin >> swimmerCount;

    double hotelRoomPricePerDay;
    cin >> hotelRoomPricePerDay;

    double participationFee;
    cin >> participationFee;

    double totalPoints = 0;
    double previousDayPoints = 0;

    for (int i = 0; i < n; i++) {
        double currentDayPoints;
        cin >> currentDayPoints;
        totalPoints += (previousDayPoints * 1.05);
        previousDayPoints = currentDayPoints;
    }

    totalPoints += previousDayPoints;

    double totalPrice = (swimmerCount * hotelRoomPricePerDay * n) + (swimmerCount * participationFee);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Money left to pay: ";
    if (totalPoints >= neededPoints) {
        totalPrice *= 0.75;
        cout << totalPrice << " BGN." << endl;
        cout << "The championship was successful!" << endl;
    } else {
        totalPrice *= 0.90;
        cout << totalPrice << " BGN." << endl;
        cout << "The championship was not successful." << endl;
    }

    return 0;
}
