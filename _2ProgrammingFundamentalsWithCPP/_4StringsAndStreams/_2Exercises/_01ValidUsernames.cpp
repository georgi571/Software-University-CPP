#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isValidUsername(const string & username);

int main() {
    string line;
    getline(cin, line);

    while (!line.empty()) {
        static const string divider = ", ";
        int pos = line.find(divider);

        string username;
        if (pos != string::npos) {
            username = line.substr(0, pos);
            line.erase(0, pos + divider.length());
        } else {
            username = line;
            line.erase();
        }

        if (isValidUsername(username)) {
            cout << username << endl;
        }
    }

    return 0;
}

bool isValidUsername(const string & username) {
    static constexpr unsigned minUsernameLength = 3;
    static constexpr unsigned maxUsernameLength = 16;

    if (username.length() < minUsernameLength || username.length() > maxUsernameLength) {
        return false;
    }

    for (char c : username) {
        bool cIsValid = (c == '-' || c == '_' || isalnum(c));
        if (!cIsValid) {
            return false;
        }
    }

    return true;
}
