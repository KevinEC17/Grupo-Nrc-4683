#pragma once
#include <iostream>
#include "Pila.h"

using namespace std;

class Operaciones{
	public:
		Operaciones()=default;
		static bool isOperator(char);
		static int getPriority(char);
		static string infixToPrefix(const string &);
		static string infixToPostfix(const string &);
};