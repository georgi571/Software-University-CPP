#include <iostream>
using namespace std;

int vowels(string word);

int main() {
    string word;
    cin >> word;

    int number = vowels(word);

    cout << number << endl;

    return 0;
}

int vowels(string word) {
    int number = 0;
    for (char character : word) {
        char letter = tolower(character);
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y') {
            number++;
        }
    }
    return number;
}