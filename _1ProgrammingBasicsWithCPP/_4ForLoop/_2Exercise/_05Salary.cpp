#include <iostream>
using namespace std;

int main() {
    const int FINE_FOR_TAB_FACEBOOK = 150;
    const int FINE_FOR_TAB_INSTAGRAM = 100;
    const int FINE_FOR_TAB_REDDIT= 50;
    int n;
    cin >> n;

    int salary;
    cin >> salary;

    for (int i = 0; i <= n; i++) {
        string tabName;
        cin >> tabName;

        if (tabName == "Facebook") {
            salary -= FINE_FOR_TAB_FACEBOOK;
        } else if (tabName == "Instagram") {
            salary -= FINE_FOR_TAB_INSTAGRAM;
        } else if (tabName == "Reddit") {
            salary -= FINE_FOR_TAB_REDDIT;
        }

        if (salary <= 0) {
            cout << "You have lost your salary." << endl;
            return 0;
        }
    }

    cout << salary << endl;

    return 0;
}