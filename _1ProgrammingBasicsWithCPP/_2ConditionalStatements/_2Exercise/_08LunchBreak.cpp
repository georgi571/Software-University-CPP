#include <cmath>
#include <iostream>
using namespace std;

int main() {
    const double TIME_FOR_LUNCH = 0.125;
    const double TIME_FOR_REST = 0.25;

    string movieName;
    getline(cin, movieName);

    int movieTime;
    cin >> movieTime;

    int breakTime;
    cin >> breakTime;

    double lunchTime = breakTime * TIME_FOR_LUNCH;
    double restTime = breakTime * TIME_FOR_REST;

    double leftTimeForMovie = breakTime - lunchTime - restTime;

    double diff = ceil(abs(leftTimeForMovie - movieTime));

    if (leftTimeForMovie >= movieTime) {
        cout << "You have enough time to watch " << movieName << " and left with " << diff << " minutes free time." << endl;
    } else {
        cout << "You don't have enough time to watch " << movieName <<", you need " << diff << " more minutes." << endl;
    }

    return 0;
}