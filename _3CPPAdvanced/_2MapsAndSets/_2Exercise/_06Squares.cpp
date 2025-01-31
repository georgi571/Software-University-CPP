#include <iostream>
#include <set>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    multiset<double, greater<>> numbers;

    istringstream iss(line);

    double number;
    while (iss >> number) {
        int sqr = sqrt(number);
        if (sqrt(number) == trunc(sqr)) {
            numbers.insert(number);
        }
    }

    for (auto curr : numbers) {
        cout << curr << " ";
    }
    cout << endl;

    return 0;
}
