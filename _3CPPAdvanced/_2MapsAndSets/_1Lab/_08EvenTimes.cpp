#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {

    int n;
    cin >> n;

    map<int, int> numbers;

    while (n--) {
        int number;
        cin >> number;
        numbers[number]++;
    }

    for (auto pair : numbers) {
        if (pair.second % 2 == 0) {
            cout << pair.first << endl;
        }
    }

    return 0;
}
