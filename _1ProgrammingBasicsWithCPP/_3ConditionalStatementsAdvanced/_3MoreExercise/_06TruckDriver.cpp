#include <iostream>
using namespace std;

int main() {
    const double PRICE_PER_KM_FOR_SEASON_SPRING_AND_AUTUMN_FOR_0_TO_5000_KM = 0.75;
    const double PRICE_PER_KM_FOR_SEASON_SPRING_AND_AUTUMN_FOR_5001_TO_10000_KM = 0.95;
    const double PRICE_PER_KM_FOR_SEASON_SPRING_AND_AUTUMN_FOR_10001_TO_20000_KM = 1.45;
    const double PRICE_PER_KM_FOR_SEASON_SUMMER_FOR_0_TO_5000_KM = 0.90;
    const double PRICE_PER_KM_FOR_SEASON_SUMMER_FOR_5001_TO_10000_KM = 1.10;
    const double PRICE_PER_KM_FOR_SEASON_SUMMER_FOR_10001_TO_20000_KM = 1.45;
    const double PRICE_PER_KM_FOR_SEASON_WINTER_FOR_0_TO_5000_KM = 1.05;
    const double PRICE_PER_KM_FOR_SEASON_WINTER_FOR_5001_TO_10000_KM = 1.25;
    const double PRICE_PER_KM_FOR_SEASON_WINTER_FOR_10001_TO_20000_KM = 1.45;

    const double taxes = 0.10;

    string season;
    cin >> season;

    double kmPerMonth;
    cin >> kmPerMonth;

    double salaryPerMonth = 0.00;

    if (season == "Summer") {
        if (kmPerMonth <= 5000) {
            salaryPerMonth = kmPerMonth * PRICE_PER_KM_FOR_SEASON_SUMMER_FOR_0_TO_5000_KM;
        } else if (kmPerMonth <= 10000) {
            salaryPerMonth = kmPerMonth * PRICE_PER_KM_FOR_SEASON_SUMMER_FOR_5001_TO_10000_KM;
        } else if (kmPerMonth <= 20000) {
            salaryPerMonth = kmPerMonth * PRICE_PER_KM_FOR_SEASON_SUMMER_FOR_10001_TO_20000_KM;
        }
    } else if (season == "Winter") {
        if (kmPerMonth <= 5000) {
            salaryPerMonth = kmPerMonth * PRICE_PER_KM_FOR_SEASON_WINTER_FOR_0_TO_5000_KM;
        } else if (kmPerMonth <= 10000) {
            salaryPerMonth = kmPerMonth * PRICE_PER_KM_FOR_SEASON_WINTER_FOR_5001_TO_10000_KM;
        } else if (kmPerMonth <= 20000) {
            salaryPerMonth = kmPerMonth * PRICE_PER_KM_FOR_SEASON_WINTER_FOR_10001_TO_20000_KM;
        }
    } else if (season == "Autumn" || season == "Spring") {
        if (kmPerMonth <= 5000) {
            salaryPerMonth = kmPerMonth * PRICE_PER_KM_FOR_SEASON_SPRING_AND_AUTUMN_FOR_0_TO_5000_KM;
        } else if (kmPerMonth <= 10000) {
            salaryPerMonth = kmPerMonth * PRICE_PER_KM_FOR_SEASON_SPRING_AND_AUTUMN_FOR_5001_TO_10000_KM;
        } else if (kmPerMonth <= 20000) {
            salaryPerMonth = kmPerMonth * PRICE_PER_KM_FOR_SEASON_SPRING_AND_AUTUMN_FOR_10001_TO_20000_KM;
        }
    }

    double totalSalary = salaryPerMonth * 4;
    double totalSalaryAfterTaxes = totalSalary - (totalSalary * taxes);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalSalaryAfterTaxes << endl;

    return 0;
}