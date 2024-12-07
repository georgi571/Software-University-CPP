#include <iostream>
#include <sstream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int vowelsCount = 0;
    int nonVowelsCount = 0;

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;

        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u' || tolower(c) == 'y') {
            vowelsCount++;
        } else if (isalpha(c)) {
            nonVowelsCount++;
        }
    }

    cout << vowelsCount << ' ' << nonVowelsCount << endl;

    return 0;
}
