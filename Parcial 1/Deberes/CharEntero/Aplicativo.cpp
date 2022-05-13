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
