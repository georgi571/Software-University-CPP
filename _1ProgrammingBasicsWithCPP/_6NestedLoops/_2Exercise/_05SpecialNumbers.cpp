#include <iostream>
using namespace std;

int main() {

    int number;
    cin >> number;

    for (int i = 1111; i <= 9999; i++) {
        int divider = i;

        bool isSpecial = true;

        while (divider > 0) {
            int digit = divider % 10;

            if (digit == 0  || number % digit != 0) {
                isSpecial = false;
                break;
            }

            divider /= 10;
        }

        if (isSpecial) {
            cout << i << " ";
        }
    }

    return 0;
}
