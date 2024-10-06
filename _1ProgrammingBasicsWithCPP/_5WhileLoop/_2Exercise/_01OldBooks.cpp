#include <iostream>
using namespace std;

int main() {
    string favoriteBook;
    getline(cin, favoriteBook);

    string currentBook;
    getline(cin, currentBook);

    int count = 0;
    bool found = false;

    while (currentBook != "No More Books") {
        if (currentBook == favoriteBook) {
            found = true;
            break;
        }
        count++;
        getline(cin, currentBook);
    }

    if (found) {
        cout << "You checked " << count <<" books and found it." << endl;
    } else {
        cout << "The book you search is not here!" << endl;
        cout << "You checked " << count <<" books." << endl;
    }

    return 0;
}