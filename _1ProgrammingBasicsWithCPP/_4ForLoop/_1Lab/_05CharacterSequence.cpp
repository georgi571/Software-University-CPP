#include <iostream>
using namespace std;

int main() {
    string word;
    getline(cin, word);

    for (int i = 0; i < word.length(); i++) {
        char symbol = word[i];
        cout << symbol << endl;
    }
    return 0;
}