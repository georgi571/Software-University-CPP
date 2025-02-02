#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    map<string, int> words;
    map<char, int> punctuation;

    istringstream iss(line);

    string input;
    while (iss >> input) {
        string word;
        for (char curr: input) {
            if (curr == '.' || curr == '!' || curr == '?' || curr == ',') {
                if (punctuation.find(curr) != punctuation.end()) {
                    punctuation[curr]++;
                } else {
                    punctuation.insert(pair<char, int>(curr, 1));
                }
            } else {
                word += curr;
            }
        }
        if (!word.empty()) {
            if (words.find(word) != words.end()) {
                words[word]++;
            } else {
                words.insert(pair<string, int>(word, 1));
            }
        }
    }

    for (auto curr: punctuation) {
        cout << curr.first << " -> " << curr.second << endl;
    }

    for (auto curr: words) {
        cout << curr.first << " -> " << curr.second << endl;
    }

    return 0;
}