#include <iostream>
using namespace std;

int main() {
    string letter;
    cin >> letter;

    int counterForC = 0;
    int counterForO = 0;
    int counterForN = 0;

    string word = "";

    while (letter != "End") {
        char character = letter.at(0);

        if (isalpha(character)) {
            if (character != 'c' && character != 'o' && character != 'n') {
                word += character;
            } else {
                if (character == 'c') {
                    if (counterForC == 0) {
                        counterForC = 1;
                    } else {
                        word += character;
                    }
                } else if (character == 'o') {
                    if (counterForO == 0) {
                        counterForO = 1;
                    } else {
                        word += character;
                    }
                } else if (character == 'n') {
                    if (counterForN == 0) {
                        counterForN = 1;
                    } else {
                        word += character;
                    }
                }

                if (counterForC == 1 && counterForO == 1 && counterForN == 1) {
                    counterForC = 0;
                    counterForO = 0;
                    counterForN = 0;
                    cout << word << " ";
                    word = "";
                }
            }
        }

        cin >> letter;
    }

    return 0;
}