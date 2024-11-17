#include <iostream>
using namespace std;

void printRectangleArea(int a, int b);

int main() {
    int a;
    cin >> a;

    int b;
    cin >> b;

    printRectangleArea(a, b);

    return 0;
}

void printRectangleArea(int a, int b) {
    int area = a * b;
    cout << area << endl;
}