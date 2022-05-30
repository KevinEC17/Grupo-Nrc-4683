/*Universidad de las Fuerzas Armadas ESPE
Título: Funcion Ingresar
#Grupo
Autor/es: Kevin Condor, Christopher Diaz
Fecha de creacíon: 29/05/2022
Fecha de modificación: 29/05/2022
Ingeniería en Software
Estructura de Datos*/
#include <iostream>
#include "Lista.h"

int main(){
	Lista lst;
	lst.insertarCola(77);
	lst.insertarCola(88);
	lst.insertarCola(99);
	lst.insertarCola(55);
	lst.mostrar();
	//lst.buscar(88);
	lst.eliminar(88);
	lst.mostrar();
}
