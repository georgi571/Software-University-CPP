#include <iostream>
using namespace std;

int main() {
    const int GOAL_STEPS_PER_DAY = 10000;

    string input;
    getline(cin, input);

    int totalSteps = 0;
    bool isGoalReached = false;

    while (input != "Going home") {
        int steps = stoi(input);
        totalSteps += steps;

        if (totalSteps >= GOAL_STEPS_PER_DAY) {
            isGoalReached = true;
            break;
        }

        getline(cin, input);
    }

    if (!isGoalReached) {
        int stepsToGoHome;
        cin >> stepsToGoHome;

        totalSteps += stepsToGoHome;
        if (totalSteps >= GOAL_STEPS_PER_DAY) {
            isGoalReached = true;
        }
    }

    if (isGoalReached) {
        cout << "Goal reached! Good job!" << endl;
    } else {
        int diff = GOAL_STEPS_PER_DAY - totalSteps;
        cout << diff << " more steps to reach goal." << endl;
    }

    return 0;
}