#include <iostream>
#include <set>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    set<string> words;

    transform(line.begin(), line.end(), line.begin(), ::tolower);

    istringstream iss(line);

    string word;
    while (iss >> word) {
        if (word.length() < 5) {
            words.insert(word);
        }
    }

    bool isFirst = true;
    for (auto curr : words) {
        if (isFirst) {
            isFirst = false;
        } else {
            cout << ", ";
        }
        cout << curr;
    }

    return 0;
}
