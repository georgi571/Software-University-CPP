#include <iostream>
using namespace std;

int main() {
    int first;
    cin >> first;

    int second;
    cin >> second;

    int sum = 0;

    for (int i = first; i <= second; i++) {
        cout << i << " ";
        sum += i;
    }
    cout << endl;

    cout << "Sum: " << sum << endl;

    return 0;
}
