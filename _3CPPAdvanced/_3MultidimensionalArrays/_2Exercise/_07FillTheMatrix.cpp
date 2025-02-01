#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<vector<int> > fillMatrix(int size, string type);

void printMatrix(vector<vector<int> > matrix);

int main() {
    string input, type;
    cin >> input >> type;

    int size = stol(input.substr(0, input.length() - 1));

    vector<vector<int> > matrix = fillMatrix(size, type);

    printMatrix(matrix);

    return 0;
}

vector<vector<int> > fillMatrix(int size, string type) {
    vector<vector<int> > matrix(size, vector<int>(size));

    int number = 1;

    for (int c = 0; c < size; c++) {
        if (c % 2 == 0 || type == "A") {
            for (int r = 0; r < size; r++) {
                matrix[r][c] = number++;
            }
        } else {
            for (int r = size - 1; r >= 0; r--) {
                matrix[r][c] = number++;
            }
        }
    }

    return matrix;
}

void printMatrix(vector<vector<int> > matrix) {
    for (auto row : matrix) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << endl;
    }
}
