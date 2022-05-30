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

#include "Ingreso.h"

int main() {
	Ingreso i;
	int  valor;
	char* dato=new char[10];
	
	strcpy(dato,i.ingresarDatosE("Ingrese el valor numerico entero: "));
	valor=atoi(dato);
	printf("\nEl dato numerico ingresado es %d",valor);

}