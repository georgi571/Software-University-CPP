#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cin >> a;

    double b;
    cin >> b;

    double c;
    cin >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        cout << "no roots";
    } else {
        cout << (-b + sqrt(discriminant)) / (2 * a);
        if (discriminant > 0) {
            cout << " " << (-b - sqrt(discriminant)) / (2 * a);
        }
    }

    cout << endl;

    return 0;
}
