#include <iostream>
using namespace std;

int main() {
    string name;
    getline(cin, name);

    int age;
    cin >> age;

    double averageGrade;
    cin >> averageGrade;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Name: " << name << ", Age: " << age << ", Grade: " << averageGrade << endl;

    return 0;
}