#include <iostream>
using namespace std;

int main() {
    int numberOfPageInBook;
    cin >> numberOfPageInBook;

    int numberOfPagesReadInOneHour;
    cin >> numberOfPagesReadInOneHour;

    int numberOfDaysForWhichNeedToReedTheBook;
    cin >> numberOfDaysForWhichNeedToReedTheBook;

    int neededHoursToReedTheBook = numberOfPageInBook / numberOfPagesReadInOneHour;
    int numberOfHoursPerDayToCanFinishReading = neededHoursToReedTheBook / numberOfDaysForWhichNeedToReedTheBook;

    cout << numberOfHoursPerDayToCanFinishReading << endl;
    return 0;
}
