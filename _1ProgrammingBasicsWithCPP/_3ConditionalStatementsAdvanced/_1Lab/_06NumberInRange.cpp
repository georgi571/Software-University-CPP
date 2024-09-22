#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    string output;
    if (number >= -100 && number <= 100 && number != 0) {
        output = "Yes";
    } else {
        output = "No";
    }

    cout << output << endl;

    return 0;
}
