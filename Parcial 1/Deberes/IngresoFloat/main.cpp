/*Universidad de las Fuerzas Armadas ESPE
Título: Funcion Ingresar
#Grupo
Autor/es: Kevin Condor, Christopher Diaz
Fecha de creacíon: 11/05/2022
Fecha de modificación: 11/05/2022
Ingeniería en Software
Estructura de Datos*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Ingresar.h"

using namespace std;


int main() {
	Ingresar i;
	char* dato= new char[10];
	int valorEntero;
	float valorDecimal;
	strcpy(dato, i.ingresarDatos("Ingrese el valor numerico entero o decimal: "));
	valorEntero = atoi(dato);
	valorDecimal = atof(dato);
	cout << endl;
	cout << "Valor (int) -> " << valorEntero << endl;
	cout << "Valor (float) -> " << valorDecimal << endl;
}
