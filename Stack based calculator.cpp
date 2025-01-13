#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

// Function to get precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

// Function to apply an operator to two operands
double applyOperator(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : throw runtime_error("Division by zero");
        case '^': return pow(a, b);
        default: throw runtime_error("Invalid operator");
    }
}

// Function to evaluate an expression
double evaluateExpression(const string& expression) {
    stack<double> values; // Stack to store numbers
    stack<char> operators; // Stack to store operators

    for (size_t i = 0; i < expression.length(); ++i) {
        char current = expression[i];

        // Skip whitespace
        if (isspace(current)) continue;

        // If the current character is a number
        if (isdigit(current) || current == '.') {
            string num;
            while (i < expression.length() && (isdigit(expression[i]) || expression[i] == '.')) {
                num += expression[i];
                i++;
            }
            i--; // Adjust index after loop
            values.push(stod(num));
        }
        // If the current character is an operator
        else if (isOperator(current)) {
            while (!operators.empty() && precedence(operators.top()) >= precedence(current)) {
                double b = values.top(); values.pop();
                double a = values.top(); values.pop();
                char op = operators.top(); operators.pop();
                values.push(applyOperator(a, b, op));
            }
            operators.push(current);
        }
        // If the current character is an opening parenthesis
        else if (current == '(') {
            operators.push(current);
        }
        // If the current character is a closing parenthesis
        else if (current == ')') {
            while (!operators.empty() && operators.top() != '(') {
                double b = values.top(); values.pop();
                double a = values.top(); values.pop();
                char op = operators.top(); operators.pop();
                values.push(applyOperator(a, b, op));
            }
            if (!operators.empty() && operators.top() == '(') {
                operators.pop(); // Remove '(' from the stack
            }
        }
    }

    // Process remaining operators in the stack
    while (!operators.empty()) {
        double b = values.top(); values.pop();
        double a = values.top(); values.pop();
        char op = operators.top(); operators.pop();
        values.push(applyOperator(a, b, op));
    }

    return values.top(); // The final result
}

int main() {
    cout << "Stack-Based Scientific Calculator" << endl;
    cout << "Enter a mathematical expression (or type

