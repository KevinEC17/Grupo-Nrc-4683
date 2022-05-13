#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Ingreso.h"

int main() {
	Ingreso i;
	char* dato=new char[10];
	strcpy(dato,i.ingresarDatosE("Ingrese la palabra: "));
	printf("\nEl dato ingresado es %s",dato);
}
