#include <iostream>
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

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }

    cout << sum << endl;

    return 0;
}
