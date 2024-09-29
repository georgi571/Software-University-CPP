#include <iostream>
#include <cmath>
#include <valarray>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n; i += 2) {
        int number = pow(2, i);
        cout << number << endl;
    }
    return 0;
}