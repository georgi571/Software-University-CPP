#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <climits>
#include <iterator>
using namespace std;


int main() {
    string input;

    vector<string> words;

    while (true) {
        getline(cin, input);

        if (input == "end") {
            break;
        }

        if (input == "empty") {
            words.push_back(" ");
        } else {
            words.push_back(input);
        }
    }

    while (true) {
        getline(cin, input);

        istringstream iss(input);
        string word;
        vector<string> elements;
        while (iss >> word) {
            elements.push_back(word);
        }

        if (elements[0] == "P") {

        } else if (elements[0] == "M") {
            int oldIndex = stoi(elements[1]) - 1;
            int newIndex = stoi(elements[2]) - 1;
            string curr = words[oldIndex];
            words.erase(words.begin() + oldIndex);
            words.insert(words.begin() + newIndex, curr);
        } else if (elements[0] == "L") {
            int index = stoi(elements[1]) - 1;
            words.erase(words.begin() + index);
        } else if (elements[0] == "E") {
            break;
        } else {
            continue;
        }
        cout << '|';
        copy(words.begin(), words.end(), ostream_iterator<string>(cout, "|"));
        cout << endl;
    }

    return 0;
}
