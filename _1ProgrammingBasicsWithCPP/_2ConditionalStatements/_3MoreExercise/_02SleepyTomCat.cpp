#include <iostream>
using namespace std;

int main() {
    const int TOM_TIME_TO_PLAY_TO_CAN_SLEEP_ENOUGH = 30000;
    const int TIME_TO_PLAY_IN_WORKING_DAYS = 63;
    const int TIME_TO_PLAY_IN_HOLIDAY_DAYS = 127;
    const int DAYS_IN_ONE_YEAR = 365;

    int holidays;
    cin >> holidays;

    int workingDays = DAYS_IN_ONE_YEAR - holidays;

    int timeToPlayInHolidays = holidays * TIME_TO_PLAY_IN_HOLIDAY_DAYS;
    int timeToPlayInWorkingDays = workingDays * TIME_TO_PLAY_IN_WORKING_DAYS;

    int totalTimeToPlay = timeToPlayInHolidays + timeToPlayInWorkingDays;

    int diff = abs(TOM_TIME_TO_PLAY_TO_CAN_SLEEP_ENOUGH - totalTimeToPlay);
    int hours = diff / 60;
    int minutes = diff % 60;

    if (totalTimeToPlay > TOM_TIME_TO_PLAY_TO_CAN_SLEEP_ENOUGH) {
        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << minutes << " minutes more for play" << endl;
    } else {
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;
    }

    return 0;
}