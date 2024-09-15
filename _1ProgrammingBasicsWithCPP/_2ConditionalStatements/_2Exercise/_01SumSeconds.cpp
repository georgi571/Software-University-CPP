#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int firstTime;
    cin >> firstTime;

    int secondTime;
    cin >> secondTime;

    int thirdTime;
    cin >> thirdTime;

    int totalTimeInSeconds = firstTime + secondTime + thirdTime;
    int minutes = totalTimeInSeconds / 60;
    int seconds = totalTimeInSeconds % 60;

    cout << minutes << ":" << setw(2) << setfill('0') << seconds << endl;

    return 0;
}