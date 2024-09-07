#include <iostream>
using namespace std;

int main() {
    string name;
    cin >> name;

    int numberOfProjects;
    cin >> numberOfProjects;

    int totalHours = numberOfProjects * 3;

    cout << "The architect " << name << " will need " << totalHours << " hours to complete " << numberOfProjects << " project/s." << endl;
    return 0;
}