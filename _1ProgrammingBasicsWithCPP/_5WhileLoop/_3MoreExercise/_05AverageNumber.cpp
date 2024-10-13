#include <iostream>
using namespace std;

int main() {
    int count;
    cin >> count;

    int sumOfNumbers = 0;

    for (int i = 0; i < count; i++) {
        int number;
        cin >> number;

        sumOfNumbers += number;
    }

    double average = static_cast<double>(sumOfNumbers) / count;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << average << endl;

    return 0;
}
