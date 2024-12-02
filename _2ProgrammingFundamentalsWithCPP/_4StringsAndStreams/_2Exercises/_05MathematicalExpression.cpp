#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string checkExpression(const string & expression);

int main() {
    string expression;
    cin >> expression;

    cout << checkExpression(expression) << endl;

    return 0;
}

string checkExpression(const string & expression) {
    string output = "correct";

    int bracketCount = 0;

    for (char c : expression) {
        if (c == '(') {
            bracketCount++;
        } else if (c == ')') {
            if (bracketCount == 0) {
                output = "incorrect";
                break;
            }
            bracketCount--;
        }
    }

    if (bracketCount != 0) {
        output = "incorrect";
    }

    return output;
}

