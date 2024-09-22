#include <iostream>
using namespace std;

int main() {
    const double PRICE_FOR_BOYS_OR_GIRLS_GROUP_AT_WINTER_BREAK = 9.60;
    const double PRICE_FOR_BOYS_OR_GIRLS_GROUP_AT_SPRING_BREAK = 7.20;
    const double PRICE_FOR_BOYS_OR_GIRLS_GROUP_AT_SUMMER_BREAK = 15.00;
    const double PRICE_FOR_TOGETHER_GROUP_AT_WINTER_BREAK = 10.00;
    const double PRICE_FOR_TOGETHER_GROUP_AT_SPRING_BREAK = 9.50;
    const double PRICE_FOR_TOGETHER_GROUP_AT_SUMMER_BREAK = 20.00;

    const double DISCOUNT_IF_STUDENTS_ARE_50_OR_MORE = 0.50;
    const double DISCOUNT_IF_STUDENTS_ARE_20_TO_49 = 0.15;
    const double DISCOUNT_IF_STUDENTS_ARE_10_TO_19 = 0.05;

    const string SPORT_FOR_GIRLS_AT_WINTER_BREAK = "Gymnastics";
    const string SPORT_FOR_GIRLS_AT_SPRING_BREAK = "Athletics";
    const string SPORT_FOR_GIRLS_AT_SUMMER_BREAK = "Volleyball";
    const string SPORT_FOR_BOYS_AT_WINTER_BREAK = "Judo";
    const string SPORT_FOR_BOYS_AT_SPRING_BREAK = "Tennis";
    const string SPORT_FOR_BOYS_AT_SUMMER_BREAK = "Football";
    const string SPORT_FOR_TOGETHER_AT_WINTER_BREAK = "Ski";
    const string SPORT_FOR_TOGETHER_AT_SPRING_BREAK = "Cycling";
    const string SPORT_FOR_TOGETHER_AT_SUMMER_BREAK = "Swimming";

    string season;
    cin >> season;

    string typeOfGroup;
    cin >> typeOfGroup;

    int numberOfStudents;
    cin >> numberOfStudents;

    int numberOfNights;
    cin >> numberOfNights;

    double moneyForOneNightForGroup = 0.00;
    string sport;

    if (season == "Summer") {
        if (typeOfGroup == "boys") {
            moneyForOneNightForGroup = numberOfStudents * PRICE_FOR_BOYS_OR_GIRLS_GROUP_AT_SUMMER_BREAK;
            sport = SPORT_FOR_BOYS_AT_SUMMER_BREAK;
        } else if (typeOfGroup == "girls") {
            moneyForOneNightForGroup = numberOfStudents * PRICE_FOR_BOYS_OR_GIRLS_GROUP_AT_SUMMER_BREAK;
            sport = SPORT_FOR_GIRLS_AT_SUMMER_BREAK;
        } else if (typeOfGroup == "mixed") {
            moneyForOneNightForGroup = numberOfStudents * PRICE_FOR_TOGETHER_GROUP_AT_SUMMER_BREAK;
            sport = SPORT_FOR_TOGETHER_AT_SUMMER_BREAK;
        }
    } else if (season == "Winter") {
        if (typeOfGroup == "boys") {
            moneyForOneNightForGroup = numberOfStudents * PRICE_FOR_BOYS_OR_GIRLS_GROUP_AT_WINTER_BREAK;
            sport = SPORT_FOR_BOYS_AT_WINTER_BREAK;
        } else if (typeOfGroup == "girls") {
            moneyForOneNightForGroup = numberOfStudents * PRICE_FOR_BOYS_OR_GIRLS_GROUP_AT_WINTER_BREAK;
            sport = SPORT_FOR_GIRLS_AT_WINTER_BREAK;
        } else if (typeOfGroup == "mixed") {
            moneyForOneNightForGroup = numberOfStudents * PRICE_FOR_TOGETHER_GROUP_AT_WINTER_BREAK;
            sport = SPORT_FOR_TOGETHER_AT_WINTER_BREAK;
        }
    } else if (season == "Spring") {
        if (typeOfGroup == "boys") {
            moneyForOneNightForGroup = numberOfStudents * PRICE_FOR_BOYS_OR_GIRLS_GROUP_AT_SPRING_BREAK;
            sport = SPORT_FOR_BOYS_AT_SPRING_BREAK;
        } else if (typeOfGroup == "girls") {
            moneyForOneNightForGroup = numberOfStudents * PRICE_FOR_BOYS_OR_GIRLS_GROUP_AT_SPRING_BREAK;
            sport = SPORT_FOR_GIRLS_AT_SPRING_BREAK;
        } else if (typeOfGroup == "mixed") {
            moneyForOneNightForGroup = numberOfStudents * PRICE_FOR_TOGETHER_GROUP_AT_SPRING_BREAK;
            sport = SPORT_FOR_TOGETHER_AT_SPRING_BREAK;
        }
    }

    double totalMoneyForSchoolCamp = moneyForOneNightForGroup * numberOfNights;

    if (numberOfStudents >= 50) {
        totalMoneyForSchoolCamp = totalMoneyForSchoolCamp - (totalMoneyForSchoolCamp * DISCOUNT_IF_STUDENTS_ARE_50_OR_MORE);
    } else if (numberOfStudents >= 20) {
        totalMoneyForSchoolCamp = totalMoneyForSchoolCamp - (totalMoneyForSchoolCamp * DISCOUNT_IF_STUDENTS_ARE_20_TO_49);
    } else if (numberOfStudents >= 10) {
        totalMoneyForSchoolCamp = totalMoneyForSchoolCamp - (totalMoneyForSchoolCamp * DISCOUNT_IF_STUDENTS_ARE_10_TO_19);
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << sport << " " << totalMoneyForSchoolCamp << " lv." << endl;

    return 0;
}