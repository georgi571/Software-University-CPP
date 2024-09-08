#include <iostream>
using namespace std;

int main() {
    double deposit;
    cin >> deposit;

    int depositTime;
    cin >> depositTime;

    double depositRate;
    cin >> depositRate;

    double sum = deposit + depositTime * ((deposit * depositRate / 100)/ 12);
    cout << sum << endl;
    return 0;
}