#include <iostream>
using namespace std;

int main() {
    double grade;
    cin >> grade;

    if (grade >= 3) {
        cout << "Passed!" << endl;
    } else {
        cout << "Failed!" << endl;
    }

    return 0;
}