#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    stack<char> stack;

    for (char in : input) {
        stack.push(in);
    }

    while (!stack.empty()) {
        char c = stack.top();
        stack.pop();
        cout << c;
    }

    cout << endl;

    return 0;
}
