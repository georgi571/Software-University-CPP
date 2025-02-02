#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

bool earliestLexicographically(const string & current, const string & result);

bool shortestString(const string & current, const string & result);

bool longestString(const string & current, const string & result);

int main() {
    string line;
    getline(cin, line);

    vector<string> words;
    istringstream iss(line);

    while (iss >> line) {
        words.push_back(line);
    }

    int operation;
    cin >> operation;

    bool (*func)(const string & current, const string & result);

    if (operation == 1) {
        func = earliestLexicographically;
    } else if (operation == 2) {
        func = shortestString;
    } else if (operation == 3) {
        func = longestString;
    }

    string result = words[0];

    for (auto word : words) {
        if (func(word, result)) {
            result = word;
        }
    }

    cout << result << endl;


    return 0;
}

bool earliestLexicographically(const string & current, const string & result) {
    return current < result;
}

bool shortestString(const string & current, const string & result) {
    return current.length() < result.length();
}

bool longestString(const string & current, const string & result) {
    return current.length() > result.length();
}
