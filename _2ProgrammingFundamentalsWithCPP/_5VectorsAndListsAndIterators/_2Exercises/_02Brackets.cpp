#include <iostream>
#include <sstream>
#include <vector>
using namespace std;


bool isCorrectExpression(const vector<char> & vector);

int main() {

    string buffer;
    getline(cin, buffer);

    istringstream iss(buffer);
    vector<char> expression;

    char c;
    while (iss >> c) {
        expression.push_back(c);
    }

    cout << (isCorrectExpression(expression) ? "valid" : "invalid") << endl;

    return 0;
}

bool isCorrectExpression(const vector<char> & vector) {
    int curlyCount = 0;
    int squareCount = 0;
    int roundCount = 0;
    for (char c : vector) {
        if (c == '(') {
            roundCount++;
        } else if (c == '{') {
            if (roundCount != 0 || squareCount != 0) {
                return false;
            }
            curlyCount++;
        } else if (c == '[') {
            if (roundCount != 0) {
                return false;
            }
            squareCount++;
        } else if (c == ')') {
            if (roundCount == 0) {
                return false;
            }
            roundCount--;
        } else if (c == '}') {
            if (roundCount != 0 || squareCount != 0) {
                return false;
            }
            curlyCount--;
        } else if (c == ']') {
            if (roundCount != 0) {
                return false;
            }
            if (squareCount == 0) {
                return false;
            }
            squareCount--;
        } else {
            return false;
        }

    }
    return curlyCount == 0 && squareCount == 0 && roundCount == 0;
}


