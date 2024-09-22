#include <iostream>
using namespace std;

int main() {
    string product;
    cin >> product;

    string output;
    if (product == "banana" || product == "apple" || product == "kiwi" || product == "cherry" || product == "lemon" || product == "grapes") {
        output = "fruit";
    } else if (product == "tomato" || product == "cucumber" || product == "pepper" || product == "carrot") {
        output = "vegetable";
    } else {
        output = "unknown";
    }

    cout << output << endl;

    return 0;
}
