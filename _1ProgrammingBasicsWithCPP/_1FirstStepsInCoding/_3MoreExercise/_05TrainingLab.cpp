#include <iostream>
using namespace std;

int main() {
    double length;
    cin >> length;

    double width;
    cin >> width;

    int widthNumber = (width - 1) / 0.70;
    int lengthNumber = length / 1.20;

    int totalWorkPlace = widthNumber * lengthNumber - 3;

    cout << totalWorkPlace << endl;
    return 0;
}