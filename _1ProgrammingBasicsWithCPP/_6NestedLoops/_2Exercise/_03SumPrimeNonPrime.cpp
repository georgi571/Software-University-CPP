#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;

    int sumOfPrimeNumbers = 0;
    int sumOfNonPrimeNumbers = 0;

    while (input != "stop") {
        int number = stoi(input);
        bool isPrime = true;

        if (number < 0) {
            cout << "Number is negative." << endl;
            cin >> input;
            continue;
        }

        for (int i = 2; i < number; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            sumOfPrimeNumbers += number;
        } else {
            sumOfNonPrimeNumbers += number;
        }

        cin >> input;
    }

    cout << "Sum of all prime numbers is: " << sumOfPrimeNumbers << endl;
    cout << "Sum of all non prime numbers is: " << sumOfNonPrimeNumbers << endl;

    return 0;
}