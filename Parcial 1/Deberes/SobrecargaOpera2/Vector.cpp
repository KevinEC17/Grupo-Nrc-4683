#include <iostream>

#include "Vector.h"

using namespace std;

Vector::Vector(int dimension) {
	this->dimension = new int[dimension];
	this->tamano = dimension;
}

int& Vector::operator[](int numIndice) {
	static int error = -1;

	if(numIndice >= 0 && numIndice<tamano)
		return dimension[numIndice];
	else {
    	printf("Supero el limite de la matriz\n");
    	return error;
	}
}
