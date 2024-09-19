#include <cmath>
#include <iostream>
using namespace std;

int main() {
    const double SLOWER_FOR_EVERY_15_METERS = 12.5;

    double recordInSeconds;
    cin >> recordInSeconds;

    double distanceInMeters;
    cin >> distanceInMeters;

    double metersInSecond;
    cin >> metersInSecond;

    double slowTimes = floor(distanceInMeters / 15);
    double secondsForNormalSwim = distanceInMeters * metersInSecond;
    double secondsSlow = slowTimes * SLOWER_FOR_EVERY_15_METERS;
    double totalTime = secondsForNormalSwim + secondsSlow;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalTime < recordInSeconds) {
        cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;
    } else {
        double secondsSlowerToBeatTheRecord = totalTime - recordInSeconds;
        cout << "No, he failed! He was " << secondsSlowerToBeatTheRecord << " seconds slower." << endl;
    }

    return 0;
}