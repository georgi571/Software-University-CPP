#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int musalaNumberOfGroups =0;
    int monbalanNumberOfGroups =0;
    int kilimandjaroNumberOfGroups =0;
    int k2NumberOfGroups =0;
    int everestNumberOfGroups =0;

    int totalNumberOfPeoples =0;
    for (int i = 0; i < n; i++) {
        int numberOfPeople;
        cin >> numberOfPeople;

        totalNumberOfPeoples += numberOfPeople;

        if (numberOfPeople <= 5) {
            musalaNumberOfGroups += numberOfPeople;
        } else if (numberOfPeople <= 12) {
            monbalanNumberOfGroups += numberOfPeople;
        } else if (numberOfPeople <= 25) {
            kilimandjaroNumberOfGroups += numberOfPeople;
        } else if (numberOfPeople <= 40) {
            k2NumberOfGroups += numberOfPeople;
        } else if (numberOfPeople >= 41) {
            everestNumberOfGroups += numberOfPeople;
        }
    }

    double musalaPercent = (1.0 * musalaNumberOfGroups / totalNumberOfPeoples) * 100;
    double monbalPercent = (1.0 * monbalanNumberOfGroups / totalNumberOfPeoples) * 100;
    double kilimandjaroPercent = (1.0 * kilimandjaroNumberOfGroups / totalNumberOfPeoples) * 100;
    double k2Percent = (1.0 * k2NumberOfGroups / totalNumberOfPeoples) * 100;
    double everestPercent = (1.0 * everestNumberOfGroups / totalNumberOfPeoples) * 100;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << musalaPercent << "%" << endl;
    cout << monbalPercent << "%" << endl;
    cout << kilimandjaroPercent << "%" << endl;
    cout << k2Percent << "%" << endl;
    cout << everestPercent << "%" << endl;

    return 0;
}