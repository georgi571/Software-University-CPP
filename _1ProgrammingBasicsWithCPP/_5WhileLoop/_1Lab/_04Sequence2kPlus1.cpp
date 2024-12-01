#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int k = 1;

    while (k <= number) {
        cout << k << endl;

        k = (k * 2) + 1;
    }


    return 0;
}