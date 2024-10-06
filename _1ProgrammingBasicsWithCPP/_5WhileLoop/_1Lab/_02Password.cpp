#include <iostream>
using namespace std;

int main() {
    string username;
    cin >> username;

    string password;
    cin >> password;

    string input;
    cin >> input;

    while (input != password) {
        cin >> input;
    }

    cout << "Welcome " << username << "!" << endl;

    return 0;
}