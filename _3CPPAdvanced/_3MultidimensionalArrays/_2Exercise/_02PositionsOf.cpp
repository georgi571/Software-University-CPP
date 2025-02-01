#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<vector<int> > fillMatrix(int rows, int cols);

void printIndexesOfTheNumber(int number, vector<vector<int>> matrix);

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int> > matrix = fillMatrix(rows, cols);

    int number;
    cin >> number;

    printIndexesOfTheNumber(number, matrix);

    return 0;
}

vector<vector<int> > fillMatrix(int rows, int cols) {
    vector<vector<int> > matrix(rows, vector<int>(cols));

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cin >> matrix[r][c];
        }
    }

    return matrix;
}

void printIndexesOfTheNumber(int number, vector<vector<int>> matrix) {
    bool found = false;
    for (int r = 0; r < matrix.size(); r++) {
        for (int c = 0; c < matrix[r].size(); c++) {
            if (matrix[r][c] == number) {
                cout << r << ' ' << c << endl;
                found = true;
            }
        }
    }
    if (!found) {
        cout << "not found" << endl;
    }
}
