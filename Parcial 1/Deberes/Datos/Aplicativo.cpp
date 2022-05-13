/*Universidad de las Fuerzas Armadas ESPE
Título: Funcion Ingresar
#Grupo
Autor/es: Kevin Condor, Christopher Diaz
Fecha de creacíon: 11/05/2022
Fecha de modificación: 11/05/2022
Ingeniería en Software
Estructura de Datos*/

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

#include "IngresoEnt.h"
#include "IngresoChar.h"
#include "IngresoFloat.h"

int main() {
	
	try{
		int opcion;
		printf("Ingrese 1 si desea ingresar un entero: \n");
		printf("Ingrese 2 si desea ingresar una cadena de caracteres: \n");
		printf("Ingrese 3 si desea ingresar un flotante: \n");
		scanf("%d",&opcion);
		if(opcion==1){
			IngresoEnt e;
			int  valor;
			char* dato=new char[10];
			
			strcpy(dato,e.ingresarE("Ingrese el valor numerico entero: "));
			valor=atoi(dato);
			printf("\nEl dato numerico ingresado es %d",valor);
		}
		if(opcion==2){
			IngresoChar c;
			char* dato=new char[10];
			
			strcpy(dato,c.ingresarC("Ingrese la palabra: "));
			printf("\nEl dato ingresado es %s",dato);
		}
		if(opcion==3){
			IngresoFloat f;
			char* dato=new char[10];
			float valor;
			
			strcpy(dato, f.ingresarF("Ingrese el valor flotante: "));
			valor=atof(dato);
			printf("\nEl valor ingresado es: %f",valor);
		}
		if(opcion<='0' || opcion>='4'){
			throw "\nNumero ingresado incorrecto";
		}
	}
	catch(const char* dato){
		printf("%s",dato);
	}
}
