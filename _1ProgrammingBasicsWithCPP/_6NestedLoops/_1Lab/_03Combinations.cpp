#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int count = 0;
    for (int i = 0; i <= number; i++) {
        for (int j = 0; j <= number; j++) {
            for (int k = 0; k <= number; k++) {
                if (i + j + k == number) {
                    count++;
                    break;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}
