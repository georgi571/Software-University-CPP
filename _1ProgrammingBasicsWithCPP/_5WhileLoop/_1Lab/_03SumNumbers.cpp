#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int sum = 0;

    while (sum < number) {
        int input;
        cin >> input;

        sum += input;
    }

    cout << sum << endl;

    return 0;
}