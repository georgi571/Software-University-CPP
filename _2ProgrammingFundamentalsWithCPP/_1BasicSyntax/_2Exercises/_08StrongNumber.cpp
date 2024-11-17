#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int leftNumber = number;
    int sumOfFact = 0;

    while (leftNumber > 0) {
        int lastNumber = leftNumber % 10;
        int fact = 1;
        for (int i = 1; i <= lastNumber; i++) {
            fact = fact * i;
        }
        sumOfFact += fact;
        leftNumber = leftNumber / 10;
    }
    if (sumOfFact == number) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
