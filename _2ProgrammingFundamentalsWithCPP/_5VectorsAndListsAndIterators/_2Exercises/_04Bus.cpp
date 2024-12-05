#include <iostream>
#include <climits>
#include <sstream>
#include <vector>
using namespace std;


int readTime(istream & input);

int main() {

    int n;
    cin >> n;

    vector<int> arriveTimes;

    for (int i = 0; i < n; i++) {
        int arrivalTime = readTime(cin);
        arriveTimes.push_back(arrivalTime);
    }

    int departTimes = readTime(cin);

    int bestWaitingTIme = INT_MAX;
    int bestWaitingIndex;

    for (int i = 0; i < arriveTimes.size(); i++) {
        int currentBusArrivalTime = arriveTimes[i];
        int diff = departTimes - currentBusArrivalTime;

        if (diff < 0) {
            diff += (24*60);
        }

        if (diff < bestWaitingTIme) {
            bestWaitingIndex = i;
            bestWaitingTIme = diff;
        }
    }

    cout << bestWaitingIndex + 1 << endl;
    return 0;
}

int readTime(istream & input) {
    string militaryTime;
    input >> militaryTime;

    int hour = (militaryTime[0] - '0') * 10 + (militaryTime[1] - '0');
    int minutes = (militaryTime[2] - '0') * 10 + (militaryTime[3] - '0');

    return hour * 60 + minutes;
}


