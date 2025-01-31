#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cin >> matrix[r][c];
        }
    }

    for (int c = 0; c < cols; c++) {
        int sum = 0;
        for (int r = 0; r < rows; r++) {
            sum += matrix[r][c];
        }
        cout << sum << endl;
    }

    return 0;
}
