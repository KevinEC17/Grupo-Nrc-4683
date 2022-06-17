#include "Operaciones.h"
#include "Pila.h"
#include <iostream>

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

string Operaciones::infixToPrefix(const string &infix)
{
    Pila<char> operators;
 
    Pila<string> operands;
 
    for (int i = 0; i < infix.length(); i++) {
 
        if (infix[i] == '(') {
            operators.push(infix[i]);
        }
 
        else if (infix[i] == ')') {
            while (!operators.vacia() && operators.peek() != '(') {
 
                string op1 = operands.peek();
                operands.pop();
 
                string op2 = operands.peek();
                operands.pop();
 
                char op = operators.peek();
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
            while (!operators.vacia() && getPriority(infix[i]) <= getPriority(operators.peek())) {
            	
                string op1 = operands.peek();
                operands.pop();
 
                string op2 = operands.peek();
                operands.pop();
 
                char op = operators.peek();
                operators.pop();
 
                string tmp = op + op2 + op1;
                operands.push(tmp);
            }
 
            operators.push(infix[i]);
        }
    }
 
    while (!operators.vacia()) {
        string op1 = operands.peek();
        operands.pop();
 
        string op2 = operands.peek();
        operands.pop();
 
        char op = operators.peek();
        operators.pop();
 
        string tmp = op + op2 + op1;
        operands.push(tmp);
    }

    return operands.peek();
}

string Operaciones::infixToPostfix(const string &infix)
{
    string postfijo;
    Pila<char> operadores;
    char operador;
    for(char c : infix)
    {
        try
        {
            if(isOperator(c))
            {
                while( !operadores.vacia() && (operador = operadores.peek()) != '(' && getPriority(c) <= getPriority(operador))
                {
                    postfijo += operador;
                    operadores.pop();
                }
                operadores.push(c);
            }
            else if(c == '(')
            {
                operadores.push(c);
            }
            else if(c == ')')
            {
                while((operador = operadores.peek()) != '(')
                {
                    postfijo+=operador;
                    operadores.pop();
                }
                operadores.pop();

            }
            else
            {
                postfijo += c;
            }
        }
        catch(...)
        {
            cout << "La cadena no esta en el formato adecuado infijo" << endl;
            return "";
        }
    }
    while(!operadores.vacia())
    {
        postfijo += operadores.peek();
        operadores.pop();
    }
    return postfijo;
}