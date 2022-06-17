#include "Nodo.h"
#include "ListaDoble.h"
#include "Pila.h"
#include "Operaciones.h"

#include <iostream>

using namespace std;

int main() {
	string salida= "1+1";
	cout<<Operaciones::infixToPostfix(salida)<<endl;
	cout<<Operaciones::infixToPrefix(salida)<<endl;
}