#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<vector<int> > fillMatrix(int rows, int cols);

void printResult(vector<vector<int> > matrix);

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int> > matrix = fillMatrix(rows, cols);

    printResult(matrix);

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

void printResult(vector<vector<int> > matrix) {
    int maxSum = 0;
    int row = 0;
    int col = 0;
    for (int i = 0; i < matrix.size() - 2; i++) {
        for (int j = 0; j < matrix[i].size() - 2; j++) {
            int currentSum = matrix[i][j] + matrix[i + 1][j] + matrix[i + 2][j] +
                matrix[i][j + 1] + matrix[i + 1][j + 1] + matrix[i + 2][j + 1] +
                    matrix[i][j + 2] + matrix[i + 1][j + 2] + matrix[i + 2][j + 2];
            if (currentSum > maxSum) {
                maxSum = currentSum;
                row = i;
                col = j;
            }
        }
    }

    cout << "Sum = " << maxSum << endl;

    for (int i = row; i < row + 3; i++) {
        for (int j = col; j < col + 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
