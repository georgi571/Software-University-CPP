#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int odd = 0;
    int even = 0;

    for (int i = 1; i <= n; i++) {
        int number;
        cin >> number;

        if (i % 2 == 0) {
            odd += number;
        } else {
            even += number;
        }
    }

    int diff = abs(odd - even);

    if (odd == even) {
        cout << "Yes" << endl;
        cout << "Sum = " << odd << endl;
    } else {
        cout << "No" << endl;
        cout << "Diff = " << diff << endl;
    }

    return 0;
}