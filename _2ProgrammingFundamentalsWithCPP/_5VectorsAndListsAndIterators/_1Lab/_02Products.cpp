#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {

    int count;
    string buffer;
    {
        getline(cin, buffer);
        istringstream iss(buffer);
        iss >> count;
    }

    vector<string> products;
    products.reserve(count);
    while (count--) {
        getline(cin, buffer);
        products.push_back(buffer);
    }

    sort(products.begin(), products.end());
    for (vector<string>::size_type i = 0; i < products.size(); ++i) {
        cout << i + 1 << "." << products[i] << endl;
    }

    return 0;
}