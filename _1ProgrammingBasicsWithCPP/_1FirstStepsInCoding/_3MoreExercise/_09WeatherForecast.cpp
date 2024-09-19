#include <iostream>
using namespace std;

int main() {
    string weather;
    cin >> weather;

    if (weather == "sunny") {
        cout << "It's warm outside!" << endl;
    } else {
        cout << "It's cold outside!" << endl;
    }

    return 0;
}