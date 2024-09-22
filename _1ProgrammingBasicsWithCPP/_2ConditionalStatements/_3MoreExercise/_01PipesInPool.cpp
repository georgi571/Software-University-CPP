#include <iostream>
using namespace std;

int main() {
    int v;
    cin >> v;

    int p1;
    cin >> p1;

    int p2;
    cin >> p2;

    double h;
    cin >> h;

    double firstPipeWater = p1 * h;
    double secondPipeWater = p2 * h;
    double totalAmountOfWater = firstPipeWater + secondPipeWater;

    double diff = abs(v - totalAmountOfWater);
    double percent = (totalAmountOfWater / v) * 100;
    double percentP1 = (firstPipeWater / totalAmountOfWater) * 100;
    double percentP2 = (secondPipeWater / totalAmountOfWater) * 100;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (v >= totalAmountOfWater) {
        cout << "The pool is " << percent << "% full. Pipe 1: " << percentP1 << "%. Pipe 2: " << percentP2 << "%." << endl;
    } else {
        cout << "For " << h << " hours the pool overflows with " << diff << " liters." << endl;
    }

    return 0;
}