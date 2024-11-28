#include <iostream>
#include <string>
#include <ostream>
#include <sstream>
using namespace std;

string reverseWord(string word);

int main() {
    string word;
    cin >> word;

    while (word != "end") {
        string reversed = reverseWord(word);

        cout << word << " = " << reversed << endl;

        cin >> word;
    }

    return 0;
}

string reverseWord(string word) {
    ostringstream ostr;

    string reversed;

    int index = word.length() - 1;

    for (int i = index; i >= 0; i--) {
        ostr << word[i];
    }

    return ostr.str();
}