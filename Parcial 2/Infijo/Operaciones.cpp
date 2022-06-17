#include "Operaciones.h"

#include "Pila.h"

using namespace std;

bool Operaciones::isOperator(char c)
{
    return (!isalpha(c) && !isdigit(c));
}

int Operaciones::getPriority(char C)
{
    if (C == '-' || C == '+')
        return 1;
    else if (C == '*' || C == '/')
        return 2;
    else if (C == '^')
        return 3;
    return 0;
}

string Operaciones::infixToPrefix(string infix)
{
    stack<char> operators;
 
    stack<string> operands;
 
    for (int i = 0; i < infix.length(); i++) {
 
        if (infix[i] == '(') {
            operators.push(infix[i]);
        }
 
        else if (infix[i] == ')') {
            while (!operators.empty() &&
                   operators.top() != '(') {
 
                string op1 = operands.top();
                operands.pop();
 
                string op2 = operands.top();
                operands.pop();
 
                char op = operators.top();
                operators.pop();
 
                string tmp = op + op2 + op1;
                operands.push(tmp);
            }
 
            operators.pop();
        }
 
        else if (!isOperator(infix[i])) {
            operands.push(string(1, infix[i]));
        }
 
        else {
            while (!operators.empty() &&
                   getPriority(infix[i]) <=
                     getPriority(operators.top())) {
 
                string op1 = operands.top();
                operands.pop();
 
                string op2 = operands.top();
                operands.pop();
 
                char op = operators.top();
                operators.pop();
 
                string tmp = op + op2 + op1;
                operands.push(tmp);
            }
 
            operators.push(infix[i]);
        }
    }
 
    while (!operators.empty()) {
        string op1 = operands.top();
        operands.pop();
 
        string op2 = operands.top();
        operands.pop();
 
        char op = operators.top();
        operators.pop();
 
        string tmp = op + op2 + op1;
        operands.push(tmp);
    }

    return operands.top();
}