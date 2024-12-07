#include <iostream>
#include <sstream>
using namespace std;

int main() {

    string input;
    getline(cin, input);

    int previousValue = 0;
    int currentValue = 0;

    istringstream iss(input);
    string token;
    while (iss >> token) {
        if (token == "+") {
            int oldValue = currentValue;
            currentValue += previousValue;
            previousValue = oldValue;
        } else if (token == "-") {
            int oldValue = currentValue;
            currentValue = previousValue - currentValue;
            previousValue = oldValue;
        } else if (token == "*") {
            int oldValue = currentValue;
            currentValue *= previousValue;
            previousValue = oldValue;
        } else if (token == "/") {
            int oldValue = currentValue;
            currentValue = previousValue / currentValue;
            previousValue = oldValue;
        } else {
            int value = stoi(token);
            previousValue = currentValue;
            currentValue = value;
        }
    }

    cout << currentValue << " " << previousValue << endl;

    return 0;
}
