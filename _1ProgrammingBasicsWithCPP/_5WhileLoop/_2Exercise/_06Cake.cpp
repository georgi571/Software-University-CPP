#include <iostream>
using namespace std;

int main() {
    int length;
    cin >> length;

    int width;
    cin >> width;

    int totalPieceOfCakes= length * width;

    string input;
    cin >> input;

    while (input != "STOP") {
        int numberOfPieces = stoi(input);
        totalPieceOfCakes -= numberOfPieces;

        if (totalPieceOfCakes < 0) {
            break;
        }

        cin >> input;
    }

    if (totalPieceOfCakes >= 0) {
        cout << totalPieceOfCakes << " pieces are left." << endl;
    } else {
        cout << "No more cake left! You need " << abs(totalPieceOfCakes) << " pieces more." << endl;
    }

    return 0;
}