#include <iostream>
using namespace std;

int main() {
    double first;
    cin >> first;

    double second;
    cin >> second;

    double third;
    cin >> third;

    int negativeNumbers = 0;

    if (first == 0 || second == 0 || third == 0) {
        negativeNumbers = 0;
    } else {
        if (first < 0) {
            negativeNumbers++;
        }
        if (second < 0) {
            negativeNumbers++;
        }
        if (third < 0) {
            negativeNumbers++;
        }
    }

    if (negativeNumbers % 2 == 0) {
        cout << "+" << endl;
    } else {
        cout << "-" << endl;
    }

    return 0;
}