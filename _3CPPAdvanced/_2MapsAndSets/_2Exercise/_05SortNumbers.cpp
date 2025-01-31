#include <iostream>
#include <set>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    set<double> numbers;

    istringstream iss(line);

    double number;
    while (iss >> number) {
        numbers.insert(number);
    }

    bool isFirst = true;
    for (auto curr : numbers) {
        if (isFirst) {
            isFirst = false;
        } else {
            cout << " <= ";
        }
        cout << curr;
    }

    return 0;
}
