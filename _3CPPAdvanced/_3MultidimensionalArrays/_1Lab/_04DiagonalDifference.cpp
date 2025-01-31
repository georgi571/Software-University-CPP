#include <iostream>
#include <cmath>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int size;
    cin >> size;

    vector<vector<int> > matrix(size, vector<int>(size));

    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            cin >> matrix[r][c];
        }
    }

    int primary = 0;
    int secondary = 0;

    for (int i = 0; i < size; i++) {
        primary += matrix[i][i];
        secondary += matrix[i][size - 1 - i];
    }

    cout << abs(primary - secondary) << endl;

    return 0;
}
