#include "Numeros.h"
#include <iostream>


Numeros operator<(const Numeros &a, const Numeros &b){
	Numeros r;
	r.x = a.x < b.x;
	return r;
	
}
