#include <iostream>
using namespace std;

void printSmallestOfThreeNumber(int first, int second, int third);

int main() {
    int first;
    cin >> first;

    int second;
    cin >> second;

    int third;
    cin >> third;
    
    printSmallestOfThreeNumber(first, second, third);

    return 0;
}

void printSmallestOfThreeNumber(int first, int second, int third) {
    int smallest = first;
    if (second < smallest) {
        smallest = second;
    }
    if (third < smallest) {
        smallest = third;
    }

    cout << smallest << endl;
}