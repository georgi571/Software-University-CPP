#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<string> fillVectors(const string & sequence);

int main() {

    string firstSequence;
    getline(cin, firstSequence);

    string secondSequence;
    getline(cin, secondSequence);

    vector<string> firstRow = fillVectors(firstSequence);
    vector<string> secondRow = fillVectors(secondSequence);

    int firstLength = firstRow.size();
    int secondLength = secondRow.size();
    int greatestLength = 0;
    if (firstLength > secondLength) {
        greatestLength = firstLength;
    } else {
        greatestLength = secondLength;
    }

    for (int i = 0; i < greatestLength; ++i) {
        if (firstLength <= i) {
            cout << '-';
        } else if (secondLength <= i) {
            cout << '+';
        } else if (firstRow[i] == secondRow[i]) {
            cout << '=';
        } else if (firstRow[i].length() > secondRow[i].length()) {
            cout << '<';
        } else if (firstRow[i].length() < secondRow[i].length()) {
            cout << '>';
        } else if (firstRow[i] > secondRow[i]) {
            cout << '<';
        } else if (firstRow[i] < secondRow[i]) {
            cout << '>';
        }
    }

    cout << endl;

    return 0;
}

vector<string> fillVectors(const string & sequence) {
    vector<string> targets;
    istringstream iss(sequence);
    string target;
    while (iss >> target) {
        targets.push_back(target);
    }

    return targets;
}