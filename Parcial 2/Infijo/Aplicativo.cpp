#include <iostream>
#include "Nodo.h"
#include "ListaDoble.h"
#include "Pila.h"

int main() {
	Pila p;
	p.push(5);
	p.push(15);
	p.push(25);
	p.mostrar();
	p.pop();
	p.mostrar();
}