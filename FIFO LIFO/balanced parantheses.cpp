#include <iostream>
#include <stack>
#include <string>

using namespace std;
bool isBalanced(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) {
                return false; 
// Closing parenthesis without corresponding opening parenthesis
            }
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                return false; 
// Mismatched opening and closing parenthesis
            }
        }
    }
    return st.empty();
// If stack is empty, all parentheses are balanced
}

int main() {
    string input;
    cout << "Enter a string containing only parentheses: ";
    cin >> input;
    if (isBalanced(input)) {
        cout << "Parentheses are balanced." << endl;
    } else {
        cout << "Parentheses are not balanced." << endl;
    }
    return 0;
}