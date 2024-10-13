#include <iostream>
using namespace std;

int main() {
    int numberOfJudge;
    cin >> numberOfJudge;

    cin.ignore();

    string nameOfPresentation;
    getline(cin, nameOfPresentation);

    double totalScoreForAllPresentations = 0.0;
    int numberOfPresentations = 0;

    cout.setf(ios::fixed);
    cout.precision(2);

    while (nameOfPresentation != "Finish") {
        double totalScore = 0.0;
        for (int i = 0; i < numberOfJudge; i++) {
            double score;
            cin >> score;

            totalScore += score;
        }

        double averageScore = totalScore / numberOfJudge;
        totalScoreForAllPresentations += averageScore;
        numberOfPresentations++;

        cout << nameOfPresentation << " - " << averageScore << "." << endl;
        cin.ignore();
        getline(cin, nameOfPresentation);
    }

    double averageTotalScore = totalScoreForAllPresentations / numberOfPresentations;

    cout << "Student's final assessment is " << averageTotalScore << "." << endl;

    return 0;
}