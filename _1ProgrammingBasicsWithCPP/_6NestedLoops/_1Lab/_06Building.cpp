#include <iostream>
using namespace std;

int main() {
    int numberOfFloors;
    cin >> numberOfFloors;

    int numberOfRoomsInFlores = numberOfFloors;
    cin >> numberOfRoomsInFlores;

    char letter = ' ';
    for (int floor = numberOfFloors; floor > 0; floor--) {
        if (floor == numberOfFloors) {
            letter = 'L';
        } else if (floor % 2 == 0) {
            letter = 'O';
        } else {
            letter = 'A';
        }
        for (int room = 0; room < numberOfRoomsInFlores; room++) {
            cout << letter << floor << room << " ";
        }
        cout << endl;
    }

    return 0;
}
