#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    int p4 = 0;
    int p5 = 0;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        if (number < 200) {
            p1++;
        } else if (number < 400) {
            p2++;
        } else if (number < 600) {
            p3++;
        } else if (number < 800) {
            p4++;
        } else if (number >= 800) {
            p5++;
        }
    }

    double percentP1 = (1.0 * p1 / n) * 100;
    double percentP2 = (1.0 * p2 / n) * 100;
    double percentP3 = (1.0 * p3 / n) * 100;
    double percentP4 = (1.0 * p4 / n) * 100;
    double percentP5 = (1.0 * p5 / n) * 100;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << percentP1 << "%" << endl;
    cout << percentP2 << "%" << endl;
    cout << percentP3 << "%" << endl;
    cout << percentP4 << "%" << endl;
    cout << percentP5 << "%" << endl;

    return 0;
}