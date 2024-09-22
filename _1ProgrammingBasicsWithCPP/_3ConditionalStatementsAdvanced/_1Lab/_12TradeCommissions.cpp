#include <iostream>
using namespace std;

int main() {
    string city;
    cin >> city;

    double sales;
    cin >> sales;

    double commissionPercentage;

    if (city == "Sofia") {
        if (sales > 10000) {
            commissionPercentage = 0.12;
        } else if (sales > 1000) {
            commissionPercentage = 0.08;
        } else if (sales > 500) {
            commissionPercentage = 0.07;
        } else if (sales >= 0) {
            commissionPercentage = 0.05;
        } else {
            cout << "error" << endl;
            return 0;
        }
    } else if (city == "Varna") {
        if (sales > 10000) {
            commissionPercentage = 0.13;
        } else if (sales > 1000) {
            commissionPercentage = 0.10;
        } else if (sales > 500) {
            commissionPercentage = 0.075;
        } else if (sales >= 0) {
            commissionPercentage = 0.045;
        } else {
            cout << "error" << endl;
            return 0;
        }
    } else if (city == "Plovdiv") {
        if (sales > 10000) {
            commissionPercentage = 0.145;
        } else if (sales > 1000) {
            commissionPercentage = 0.12;
        } else if (sales > 500) {
            commissionPercentage = 0.08;
        } else if (sales >= 0) {
            commissionPercentage = 0.055;
        } else {
            cout << "error" << endl;
            return 0;
        }
    } else {
        cout << "error" << endl;
        return 0;
    }

    double commission = commissionPercentage * sales;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << commission << endl;

    return 0;
}
