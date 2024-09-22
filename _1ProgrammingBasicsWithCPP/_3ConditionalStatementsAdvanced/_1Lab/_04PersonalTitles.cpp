#include <iostream>
using namespace std;

int main() {
    double age;
    cin >> age;

    char gender;
    cin >> gender;

    string output;

    if (age >= 16) {
        if (gender == 'm') {
            output = "Mr.";
        } else if (gender == 'f') {
            output = "Ms.";
        }
    } else if (age < 16) {
        if (gender == 'm') {
            output = "Master";
        } else if (gender == 'f') {
            output = "Miss";
        }
    }

    cout << output << endl;

    return 0;
}
