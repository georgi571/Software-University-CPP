#include <iostream>
using namespace std;

int main() {
    const double NEED_POINTS_FOR_NOMINATION = 1250.5;
    string actorName;
    getline(cin, actorName);

    double pointFromAcademy;
    cin >> pointFromAcademy;

    int numberOfJudges;
    cin >> numberOfJudges;
    cin.ignore();

    double totalPoints = pointFromAcademy;

    cout.setf(ios::fixed);
    cout.precision(1);

    for (int i = 0; i < numberOfJudges; i++) {
        string judgeName;
        getline(cin, judgeName);

        double points;
        cin >> points;
        cin.ignore();

        int judgeLengthName = judgeName.length();

        double pointsFromJudge = (1.0 * points * judgeLengthName) / 2;
        totalPoints += pointsFromJudge;

        if (totalPoints >= NEED_POINTS_FOR_NOMINATION) {
            cout << "Congratulations, " << actorName << " got a nominee for leading role with " << totalPoints << "!" << endl;
            return 0;
        }
    }

    double diff = NEED_POINTS_FOR_NOMINATION - totalPoints;

    cout << "Sorry, " << actorName << " you need " << diff << " more!" << endl;

    return 0;
}