#include <iostream>
using namespace std;

void getGreaterStringValue(string product);
void getGreaterIntValue(string product);
void getGreaterCharValue(string product);

int main() {
    string type;
    getline(cin, type);

    if (type == "string") {
        getGreaterStringValue(type);
    } else if (type == "int") {
        getGreaterIntValue(type);
    } else if (type == "char") {
        getGreaterCharValue(type);
    }

    return 0;
}

void getGreaterStringValue(string product) {
    string firstValue;
    getline(cin, firstValue);

    string secondValue;
    getline(cin, secondValue);

    if (firstValue > secondValue) {
        cout << firstValue << endl;
    } else {
        cout << secondValue << endl;
    }
}

void getGreaterIntValue(string product) {
    int firstValue;
    cin >> firstValue;

    int secondValue;
    cin >> secondValue;

    if (firstValue > secondValue) {
        cout << firstValue << endl;
    } else {
        cout << secondValue << endl;
    }
}

void getGreaterCharValue(string product) {
    char firstValue;
    cin >> firstValue;

    char secondValue;
    cin >> secondValue;

    if (firstValue > secondValue) {
        cout << firstValue << endl;
    } else {
        cout << secondValue << endl;
    }
}
