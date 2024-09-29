#include <iostream>
using namespace std;

int main() {
    const int VALUE_OF_A = 1;
    const int VALUE_OF_E = 2;
    const int VALUE_OF_I = 3;
    const int VALUE_OF_O = 4;
    const int VALUE_OF_U = 5;

    string word;
    getline(cin, word);

    int sum = 0;

    for (int i = 0; i < word.length(); i++) {
        char symbol = word[i];
        if (symbol == 'a' ) {
            sum += VALUE_OF_A;
        } else if(symbol == 'e') {
            sum += VALUE_OF_E;
        } else if(symbol == 'i') {
            sum += VALUE_OF_I;
        } else if(symbol == 'o') {
            sum += VALUE_OF_O;
        } else if(symbol == 'u') {
            sum += VALUE_OF_U;
        }
    }

    cout << sum << endl;

    return 0;
}