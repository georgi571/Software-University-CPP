#include <iostream>
#include <sstream>
#include <queue>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    queue<string> que;

    while (line != "###") {
        istringstream linestream(line);
        string word;
        while (linestream >> word) {
            que.push(word);
        }
        getline(cin, line);
    }

    int size;
    cin >> size;

    while (!que.empty()) {
        string currRow;
        while (currRow.length() < size) {
            string newWord = " " + que.front();
            if (currRow.length() == 0) {
                currRow = que.front();
            } else {
                if (currRow.length() + newWord.length() > size) {
                    break;
                }
                currRow += newWord;
            }
            que.pop();
            if (que.empty()) {
                break;
            }
        }
        cout << currRow << endl;
    }

    return 0;
}
