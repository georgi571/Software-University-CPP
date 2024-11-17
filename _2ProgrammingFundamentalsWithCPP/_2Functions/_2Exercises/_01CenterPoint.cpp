#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double distanceToCenter(double x, double y);
void printCoordinates(double x, double y);

int main() {
    double x1;
    cin >> x1;

    double y1;
    cin >> y1;

    double x2;
    cin >> x2;

    double y2;
    cin >> y2;

    double distance1 = distanceToCenter(x1, y1);
    double distance2 = distanceToCenter(x2, y2);

    if (distance1 <= distance2 ) {
        printCoordinates(x1, y1);
    } else {
        printCoordinates(x2, y2);
    }

    return 0;
}

double distanceToCenter(double x, double y) {
    return sqrt(x * x + y * y);
}

void printCoordinates(double x, double y) {
    cout << "(" << x << ", " << y << ")" << endl;
}
