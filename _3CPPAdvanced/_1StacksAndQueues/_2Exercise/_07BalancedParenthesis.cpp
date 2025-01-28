#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

int main() {
    string input;
    cin >> input;

    stack<char> st;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '(' || input[i] == '{' || input[i] == '[') {
            st.push(input[i]);
        } else if (input[i] == ')' || input[i] == '}' || input[i] == ']') {
            if (st.empty()) {
                cout << "NO" << endl;
                return 0;
            }
            if (st.top() == '(' && input[i] == ')') {
                st.pop();
            } else if (st.top() == '{' && input[i] == '}') {
                st.pop();
            } else if (st.top() == '[' && input[i] == ']') {
                st.pop();
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    if (st.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
