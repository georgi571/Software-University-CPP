#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int size;
    cin >> size;

    vector<vector<char> > matrix(size, vector<char>(size));

    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            cin >> matrix[r][c];
        }
    }

    char symbol;
    cin >> symbol;

    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            if (matrix[r][c] == symbol) {
                cout << "(" << r << ", " << c << ")" << endl;
                return 0;
            }
        }
    }

    cout << symbol << " does not occur in the matrix" << endl;

    return 0;
}
