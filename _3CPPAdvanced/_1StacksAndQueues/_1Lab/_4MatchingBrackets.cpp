#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    stack<int> index;

    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == '(') {
            index.push(i);
        } else if (input[i] == ')') {
            int lastOperantIndex = index.top();
            index.pop();
            string output = input.substr(lastOperantIndex, i - lastOperantIndex + 1);
            cout << output << endl;
        }
    }

    return 0;
}
