#include <iostream>
#include <set>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    set<double, greater<>> numbers;

    istringstream iss(line);

    double number;
    while (iss >> number) {
        numbers.insert(number);
    }

    int size = 3;
    for (double curr : numbers) {
        cout << curr << " ";
        size--;
        if (size == 0) {
            break;
        }
    }

    cout << endl;

    return 0;
}
