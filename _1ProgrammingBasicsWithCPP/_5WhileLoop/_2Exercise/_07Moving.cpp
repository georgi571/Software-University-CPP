#include <iostream>
using namespace std;

int main() {
    int length;
    cin >> length;

    int width;
    cin >> width;

    int height;
    cin >> height;

    int totalCubicCm= length * width * height;

    string input;
    cin >> input;

    while (input != "Done") {
        int sizeOfBox = stoi(input);
        totalCubicCm -= sizeOfBox;

        if (totalCubicCm < 0) {
            break;
        }

        cin >> input;
    }

    if (totalCubicCm >= 0) {
        cout << totalCubicCm << " Cubic meters left." << endl;
    } else {
        cout << "No more free space! You need " << abs(totalCubicCm) << " Cubic meters more." << endl;
    }

    return 0;
}