#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string buffer;
    getline(cin, buffer);

    vector<int> data;

    istringstream iss(buffer);
    int num;
    while (iss >> num) {
        data.push_back(num);
    }

    vector<int>::size_type start = 0, end = data.size() - 1;
    while (start <= end) {
        if (start == end) {
            cout << data[start] << " ";
            break;
        }

        cout << data[start] + data[end] << " ";

        start++;
        end--;
    }

    cout << endl;

    return 0;
}
