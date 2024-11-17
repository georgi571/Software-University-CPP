#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        if (number < min) {
            min = number;
        }

        if (number > max) {
            max = number;
        }
    }

    cout << min << " " << max << endl;
    return 0;
}