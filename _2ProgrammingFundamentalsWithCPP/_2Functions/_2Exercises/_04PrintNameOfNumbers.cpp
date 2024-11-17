#include <iostream>
using namespace std;

string numberToString(int number);
string decimalsToString(int number);
string teensToString(int number);

int main() {
    int number;
    cin >> number;

    int n1 = number % 10;
    int n2 = (number / 10) % 10;
    int n3 = (number / 100) % 10;
    int n4 = number / 1000;


    if (number == 0) {
        cout << numberToString(number);
    }

    if(n4 > 0) {
        cout << numberToString(n4) << " thousand ";

    }

    if(n3 > 0) {
        cout << numberToString(n3) << " hundred ";
    }

    if(n2 >= 2) {
        cout << decimalsToString(n2) << " ";
    }

    if(n2 == 1) {
        int teenNumber = 10 + n1;
        cout << teensToString(teenNumber);
    } else {
        if(n1 > 0) {
            cout << numberToString(n1);
        }
    }

    cout << endl;

    return 0;
}

string numberToString(int number) {
    string result;
    if(number == 0) {
        result = "zero";
    } else if (number == 1) {
        result = "one";
    } else if (number == 2) {
        result = "two";
    } else if (number == 3) {
        result = "three";
    } else if (number == 4) {
        result = "four";
    } else if (number == 5) {
        result = "five";
    } else if (number == 6) {
        result = "six";
    } else if (number == 7) {
        result = "seven";
    } else if (number == 8) {
        result = "eight";
    } else if (number == 9) {
        result = "nine";
    }
    return result;
}

string decimalsToString(int number) {
    string result;
    if(number == 2) {
        result = "twenty";
    } else if (number == 3) {
        result = "thirty";
    } else if (number == 4) {
        result = "forty";
    } else if (number == 5) {
        result = "fifty";
    } else if (number == 6) {
        result = "sixty";
    } else if (number == 7) {
        result = "seventy";
    } else if (number == 8) {
        result = "eighty";
    } else if (number == 9) {
        result = "ninety";
    }
    return result;
}

string teensToString(int number) {
    string result;
    if(number == 10) {
        result = "ten";
    } else if (number == 11) {
        result = "eleven";
    } else if (number == 12) {
        result = "twelve";
    } else if (number == 13) {
        result = "thirteen";
    } else if (number == 14) {
        result = "fourteen";
    } else if (number == 15) {
        result = "fifteen";
    } else if (number == 16) {
        result = "sixteen";
    } else if (number == 17) {
        result = "seventeen";
    } else if (number == 18) {
        result = "eighteen";
    } else if (number == 19) {
        result = "nineteen";
    }
    return result;
}
