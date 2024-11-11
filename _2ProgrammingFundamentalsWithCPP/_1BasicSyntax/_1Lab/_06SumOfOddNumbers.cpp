#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int currentNumber = 1;
    int sum = 0;

    for (int i = 1; i <= n ; i++) {
        cout << currentNumber << endl;
        sum += currentNumber;
        currentNumber += 2;
    }
    cout << "Sum: " << sum  << endl;

    return 0;
}