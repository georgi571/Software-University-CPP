#include <iostream>
#include <sstream>
#include <list>
using namespace std;

void readTrain(istream& iss, list<int>& train);

void mergeTrain(list<int> & finalTrain,list<char> & finalOrder, list<int>::iterator & it, char trainId);

int main() {

    list<int> trainA;
    list<int> trainB;

    readTrain(cin, trainA);
    readTrain(cin, trainB);

    list<char> finalOrder;
    list<int> finalTrain;

    list<int>::iterator itA = trainA.begin();
    list<int>::iterator itB = trainB.begin();

    while (itA != trainA.end() || itB != trainB.end()) {
        if (itA == trainA.end()) {
            mergeTrain(finalTrain, finalOrder, itB, 'B');
        } else if (itB == trainB.end()) {
            mergeTrain(finalTrain, finalOrder, itA, 'A');
        } else {
            if (*itA < *itB) {
                mergeTrain(finalTrain, finalOrder, itA, 'A');
            } else {
                mergeTrain(finalTrain, finalOrder, itB, 'B');
            }
        }
    }

    for (char c : finalOrder) {
        cout << c;
    }
    cout << endl;

    for (int carNo : finalTrain) {
        cout << carNo << ' ';
    }
    cout << endl;

    return 0;
}

void readTrain(istream& input, list<int>& train) {
    string line;
    getline(input, line);

    istringstream iss(line);
    int carNo;

    while (iss >> carNo) {
        train.push_front(carNo);
    }
}

void mergeTrain(list<int> & finalTrain, list<char> & finalOrder, list<int>::iterator & it, char trainId) {
    finalOrder.push_back(trainId);
    finalTrain.push_front(*it);
    it++;
}

