#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>
using namespace std;

void fillVectors(const string & sequence,
    vector<string> & cowVector, vector<string> & sheepVector, vector<string> & otherVector,
    double & averageCowSize, double & averageSheepSize, double & averageOtherSize);

int main() {

    string sequence;
    getline(cin, sequence);

    vector<string> cowVector;
    vector<string> sheepVector;
    vector<string> otherVector;

    double averageCowSize = 0;
    double averageSheepSize = 0;
    double averageOtherSize = 0;

    fillVectors(sequence, cowVector, sheepVector, otherVector, averageCowSize, averageSheepSize, averageOtherSize);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (cowVector.empty()) {
        cout << "no cows!" << endl;
    } else {
        cout << cowVector.size() << " cows: ";
        copy(cowVector.begin(), cowVector.end(), ostream_iterator<string>(cout, " "));
        cout << "with avg. size " << averageCowSize << endl;
    }
    if (sheepVector.empty()) {
        cout << "no sheep!" << endl;
    } else {
        cout << sheepVector.size() << " sheep: ";
        copy(sheepVector.begin(), sheepVector.end(), ostream_iterator<string>(cout, " "));
        cout << "with avg. size " << averageSheepSize << endl;
    }
    if (otherVector.empty()) {
        cout << "no others!" << endl;
    } else {
        cout << otherVector.size() << " others: ";
        copy(otherVector.begin(), otherVector.end(), ostream_iterator<string>(cout, " "));
        cout << "with avg. size " << averageOtherSize << endl;
    }

    return 0;
}

void fillVectors(const string & sequence,
    vector<string> & cowVector, vector<string> & sheepVector, vector<string> & otherVector,
    double & averageCowSize, double & averageSheepSize, double & averageOtherSize) {

    double cowSize = 0;
    double sheepSize = 0;
    double otherSize = 0;

    istringstream iss(sequence);
    string target;
    while (iss >> target) {
        if (target[0] == 'C') {
            cowVector.push_back(target);
            cowSize += target[1] - '0';
        } else if (target[0] == 'S') {
            sheepVector.push_back(target);
            sheepSize += target[1] - '0';
        } else {
            otherVector.push_back(target);
            otherSize += target[1] - '0';
        }
    }

    averageCowSize = cowSize / cowVector.size();
    averageSheepSize = sheepSize / sheepVector.size();
    averageOtherSize = otherSize / otherVector.size();
}
