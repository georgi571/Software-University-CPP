#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<vector<int> > fillMatrix(int size);

bool isMatrixEquals(vector<vector<int> > firstMatrix, vector<vector<int> > secondMatrix);

int main() {
    int size;
    cin >> size;
    cin.ignore();
    vector<vector<int> > firstMatrix = fillMatrix(size);

    cin >> size;
    cin.ignore();
    vector<vector<int> > secondMatrix = fillMatrix(size);

    if (isMatrixEquals(firstMatrix, secondMatrix)) {
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }

    return 0;
}

vector<vector<int> > fillMatrix(int size) {
    vector<vector<int>> matrix(size);

    for (int r = 0; r < size; r++) {
        string line;
        getline(cin, line);
        istringstream iss(line);

        int number;
        while (iss >> number) {
            matrix[r].push_back(number);
        }
    }

    return matrix;
}

bool isMatrixEquals(vector<vector<int> > firstMatrix, vector<vector<int> > secondMatrix) {
    if (firstMatrix.size() != secondMatrix.size()) {
        return false;
    }
    if (firstMatrix[0].size() != secondMatrix[0].size()) {
        return false;
    }
    for (int i = 0; i < firstMatrix.size(); i++) {
        if (firstMatrix[i] != secondMatrix[i]) {
            return false;
        }
    }
    return true;
}
