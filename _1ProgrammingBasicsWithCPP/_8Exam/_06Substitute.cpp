#include <iostream>
using namespace std;

int main() {
    int K;
    cin >> K;

    int L;
    cin >> L;

    int M;
    cin >> M;

    int N;
    cin >> N;

    int numberOfSubstitute = 0;

    for (int k = K; k <= 8; k++) {
        if (k % 2 == 1) {
            continue;
        }
        for (int l = 9; l >= L; l--) {
            if (l % 2 == 0) {
                continue;
            }
            for (int m = M; m <= 8; m++) {
                if (m % 2 == 1) {
                    continue;
                }
                for (int n = 9; n >= N; n--) {
                    if (n % 2 == 0) {
                        continue;
                    }
                    if (k == m && l == n) {
                        cout << "Cannot change the same player." << endl;
                    } else {
                        cout << k << l << " - " << m << n << endl;
                        numberOfSubstitute++;
                        if (numberOfSubstitute == 6) {
                            return 0;
                        }
                    }
                }
            }
        }
    }

    return 0;
}
