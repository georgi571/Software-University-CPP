#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> fillTargets(const string & sequence);

double findAverageNumber(vector<int> targets);

void printResult(vector<int> targets, double average);

int main() {

    string sequence;
    getline(cin, sequence);

    vector<int> targets = fillTargets(sequence);

    double average = findAverageNumber(targets);

    sort(targets.begin(), targets.end(), greater<int>());

    printResult(targets, average);

    cout << endl;

    return 0;
}

vector<int> fillTargets(const string & sequence) {
    vector<int> targets;
    istringstream iss(sequence);
    int target;
    while (iss >> target) {
        targets.push_back(target);
    }

    return targets;
}

double findAverageNumber(vector<int> targets) {
    double sum = 0;

    for (int target : targets) {
        sum += target;
    }

    return sum / targets.size();
}

void printResult(vector<int> targets, double average) {
    int counterPrintedNumbers = 0;
    for (int target : targets) {
        if (target > average) {
            cout << target << " ";
            counterPrintedNumbers++;
            if (counterPrintedNumbers == 5) {
                break;
            }
        }
    }

    if (counterPrintedNumbers == 0) {
        cout << "No";
    }
}
