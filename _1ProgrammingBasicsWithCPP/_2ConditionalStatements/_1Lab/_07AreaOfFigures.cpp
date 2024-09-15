#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string figureType;
    cin >> figureType;

    double area;
    if (figureType == "square") {
        double a;
        cin >> a;
        area = a * a;
    } else if (figureType == "rectangle") {
        double a;
        cin >> a;
        double b;
        cin >> b;
        area = a * b;
    } else if (figureType == "circle") {
        double r;
        cin >> r;
        area = r * r * M_PI;
    } else if (figureType == "triangle") {
        double a;
        cin >> a;
        double h;
        cin >> h;
        area = (a * h) / 2;
    }

    cout.setf(ios::fixed);
    cout.precision(3);

    cout << area << endl;

    return 0;
}