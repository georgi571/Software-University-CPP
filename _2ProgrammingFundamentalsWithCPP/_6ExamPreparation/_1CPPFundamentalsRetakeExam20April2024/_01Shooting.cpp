#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> fillTargets(const string & sequence);

void shootingTargets(string sequence, vector<int> & targets, int & shootTargets);

int main() {

    string sequence;
    getline(cin, sequence);

    vector<int> targets = fillTargets(sequence);

    int shootTargets = 0;

    shootingTargets(sequence, targets, shootTargets);

    cout << "Shot targets: " << shootTargets << " -> ";

    for (int target : targets) {
        cout << target << ' ';
    }

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

void shootingTargets(string sequence, vector<int> & targets, int & shootTargets) {
    while (true) {
        getline(cin, sequence);
        istringstream iss(sequence);
        string command;
        iss >> command;

        if (command == "End") {
            break;
        }

        int index = stoi(command);
        if (index >= 0 && index < targets.size()) {
            int targetValue = targets[index];
            if (targetValue == -1) {
                continue;
            }
            for (int i = 0; i < targets.size(); i++) {
                if (targets[i] != -1) {
                    if (targets[i] > targetValue) {
                        targets[i] -= targetValue;
                    } else {
                        targets[i] += targetValue;
                    }
                }
            }
            targets[index] = -1;
            shootTargets++;
        }
    }
}
