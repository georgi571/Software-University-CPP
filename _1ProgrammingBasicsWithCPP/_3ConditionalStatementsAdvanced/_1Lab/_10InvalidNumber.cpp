#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    string output;
    if ((number < 100 || number > 200) && number != 0) {
        output = "invalid";
    }

    cout << output << endl;

    return 0;
}
