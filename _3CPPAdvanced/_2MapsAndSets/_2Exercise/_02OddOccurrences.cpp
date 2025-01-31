#include <iostream>
#include <set>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    set<string> words;
    vector<string> tokens;

    transform(line.begin(), line.end(), line.begin(), ::tolower);

    istringstream iss(line);

    string word;
    while (iss >> word) {
        if (words.find(word) == words.end()) {
            words.insert(word);
            if (find(tokens.begin(), tokens.end(), word) == tokens.end()) {
                tokens.push_back(word);
            }
        } else {
            words.erase(word);
        }
    }

    bool isFirst = true;
    for (auto token : tokens) {
        if (words.find(token) != words.end()) {
            if (isFirst) {
                isFirst = false;
            } else {
                cout << ", ";
            }
            cout << token;
        }
    }

    return 0;
}
