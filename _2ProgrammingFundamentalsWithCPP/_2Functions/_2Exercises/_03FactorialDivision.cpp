#include <iostream>
using namespace std;

long long factorial(unsigned a);
void printDivideFactorial(unsigned long long a, unsigned long long b);

int main() {
    int a;
    cin >> a;

    int b;
    cin >> b;

    unsigned long long aFactorial = factorial(a);
    unsigned long long bFactorial = factorial(b);

    printDivideFactorial(aFactorial, bFactorial);

    return 0;
}

long long factorial(unsigned a) {
    unsigned long long result = 1;

    for (unsigned i = 2; i <= a; ++i) {
        result *= i;
    }

    return result;
}

void printDivideFactorial(unsigned long long a, unsigned long long b) {
    double result = a / static_cast<double>(b);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << result << endl;
}