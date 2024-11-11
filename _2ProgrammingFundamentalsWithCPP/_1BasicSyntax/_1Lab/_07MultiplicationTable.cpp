#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= 10 ; i++) {
        int sum = n * i;
        cout << n << " X " << i << " = " << sum << endl;
    }

    return 0;
}