#include <iostream>
using namespace std;

int main() {
    const double greenPainSqmForOneLiterPaint = 3.4;
    const double redPainSqmForOneLiterPaint = 4.3;
    const double doorSqm = 2.4;
    const double windowSqm = 2.25;

    double x;
    cin >> x;

    double y;
    cin >> y;

    double h;
    cin >> h;

    double backSideWall = x * x;
    double frontSideWall = backSideWall - doorSqm;
    double sideWall = x * y - windowSqm;
    double bigSideRoof = x * y;
    double smallSideRoof = x * h / 2;

    double redColorSqm = 2 * (bigSideRoof + smallSideRoof);
    double greenColorSqm = 2 * sideWall + backSideWall + frontSideWall;

    double greenColorLiters = greenColorSqm / greenPainSqmForOneLiterPaint;
    double redColorLiters = redColorSqm / redPainSqmForOneLiterPaint;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << greenColorLiters << endl;
    cout << redColorLiters << endl;
    return 0;
}