#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<vector<char> > fillMatrix(int rows, int cols);

int findNumberOfEqualSquares(vector<vector<char>> matrix);

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<char> > matrix = fillMatrix(rows, cols);

    int equalSquares = findNumberOfEqualSquares(matrix);

    cout << equalSquares << endl;

    return 0;
}

vector<vector<char> > fillMatrix(int rows, int cols) {
    vector<vector<char> > matrix(rows, vector<char>(cols));

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cin >> matrix[r][c];
        }
    }

    return matrix;
}

int findNumberOfEqualSquares(vector<vector<char>> matrix) {
    int equalSquares = 0;
    for (int r = 0; r < matrix.size() - 1; r++) {
        for (int c = 0; c < matrix[r].size() - 1; c++) {
            if (matrix[r][c] == matrix[r][c + 1] &&
                matrix[r][c] == matrix[r + 1][c] &&
                matrix[r][c] == matrix[r + 1][c + 1]) {
                equalSquares++;
                }
        }
    }
    return equalSquares;
}

