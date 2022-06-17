#pragma once
#include <iostream>
using namespace std;

class Operaciones{
	public:
		bool isOperator(char c);
		int getPriority(char C);
		string infixToPrefix(string infix);
};