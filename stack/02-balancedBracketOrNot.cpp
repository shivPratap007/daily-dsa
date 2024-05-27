#include <iostream>
#include <string>
#include <stack>

using namespace std;

// [(a + b) + {(c + d) * (e / f)}] => true


bool balancedOrNot(const string& str) {
    stack<char> myStack;

    for (char ch : str) {
        if (ch == '[' || ch == '(' || ch == '{') {
            myStack.push(ch);
        } else if (ch == ']' || ch == ')' || ch == '}') {
            if (myStack.empty()) {
                return false;
            }
            char top = myStack.top();
            if ((ch == ']' && top == '[') || 
                (ch == ')' && top == '(') || 
                (ch == '}' && top == '{')) {
                myStack.pop();
            } else {
                return false;
            }
        }
    }

    return myStack.empty();
}

int main() {
    string str;
    getline(cin, str); 
    if (balancedOrNot(str)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
