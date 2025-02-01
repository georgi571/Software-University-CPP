#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<vector<char> > fillMatrix(int rows, int cols, string word);

void printIndexesOfTheNumber(vector<vector<char> > matrix);

int main() {
    int rows, cols;
    string word;
    cin >> rows >> cols >> word;

    vector<vector<char> > matrix = fillMatrix(rows, cols, word);

    printIndexesOfTheNumber(matrix);

    return 0;
}

vector<vector<char> > fillMatrix(int rows, int cols, string word) {
    vector<vector<char> > matrix(rows, vector<char>(cols));
    int index = 0;

    for (int r = 0; r < rows; r++) {
        if (r % 2 == 0) {
            for (int c = 0; c < matrix[r].size(); c++) {
                matrix[r][c] = word[index++];
                if (index == word.length()) {
                    index = 0;
                }
            }
        } else {
            for (int c = matrix[r].size() - 1; c >= 0; c--) {
                matrix[r][c] = word[index++];
                if (index == word.length()) {
                    index = 0;
                }
            }
        }
    }

    return matrix;
}

void printIndexesOfTheNumber(vector<vector<char> > matrix) {
    for (auto & r : matrix) {
        for (char c : r) {
            cout << c;
        }
        cout << endl;
    }
}
