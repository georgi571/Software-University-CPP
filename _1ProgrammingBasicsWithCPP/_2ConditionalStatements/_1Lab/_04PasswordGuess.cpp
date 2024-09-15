#include <iostream>
using namespace std;

int main() {
    string password;
    cin >> password;

    string correctPassword = "s3cr3t!P@ssw0rd";

    if (password == correctPassword) {
        cout << "Welcome" << endl;
    } else {
        cout << "Wrong password!" << endl;
    }
    return 0;
}