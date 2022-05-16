#pragma once
#include <iostream>

using namespace std;

class Vector{
	private:
		int *dimension;
		int tamano;
	public:
   		Vector(int);
   		int& operator[](int);
};
