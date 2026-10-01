#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

string infixToPostfix(string expr) {
    stack<char> st;
    string result = "";
    for (int i = 0; i < expr.size(); i++) {
        char c = expr[i];
        if (isdigit(c)) result += c;
        else if (c == '(') st.push(c);
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top(); st.pop();
            }
            st.pop();
        } else {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                result += st.top(); st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        result += st.top(); st.pop();
    }
    return result;
}

int evaluatePostfix(string expr) {
    stack<int> st;
    for (int i = 0; i < expr.size(); i++) {
        char c = expr[i];
        if (isdigit(c)) st.push(c - '0');
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            switch (c) {
                case '+': st.push(a + b); break;
                case '-': st.push(a - b); break;
                case '*': st.push(a * b); break;
                case '/': st.push(a / b); break;
            }
        }
    }
    return st.top();
}

int main() {
    string expr = "(3+5)*2";
    string postfix = infixToPostfix(expr);
    cout << "Postfix: " << postfix << endl;
    cout << "Result: " << evaluatePostfix(postfix);
}

