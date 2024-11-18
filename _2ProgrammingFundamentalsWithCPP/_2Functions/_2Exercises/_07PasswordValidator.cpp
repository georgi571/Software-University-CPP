#include <iostream>
using namespace std;

void passwordValidation(string password);

int main() {
    string password;
    cin >> password;

    passwordValidation(password);

    return 0;
}

void passwordValidation(string password) {
    bool isValid = true;

    if (password.length() < 6 || password.length() > 10) {
        isValid = false;
        cout << "Password must be between 6 and 10 characters" << endl;
    }

    bool isOnlyLettersAndDigits = true;
    int numberOfDigits = 0;

    for (char character : password) {
        if (!isalnum(character)) {
            isOnlyLettersAndDigits = false;
        }
        if (isdigit(character)) {
            numberOfDigits++;
        }
    }

    bool isHaveAtLeastTwoDigits = numberOfDigits >= 2;

    if (!isOnlyLettersAndDigits) {
        isValid = false;
        cout << "Password must consist only of letters and digits" << endl;
    }

    if (!isHaveAtLeastTwoDigits) {
        isValid = false;
        cout << "Password must have at least 2 digits" << endl;
    }

    if (isValid) {
        cout << "Password is valid" << endl;
    }
}