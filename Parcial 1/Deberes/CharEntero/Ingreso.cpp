#include "Ingreso.h"

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

char* Ingreso::ingresarDatosE(char*msg){
	char* dato=new char[10];
	char c;
	int i=0;
	printf("%s\n",msg);
	while((c=getch()) !=13){
		if(c>='0' && c<='9'){
			printf("%c",c);
			dato[i++]=c;
		}
	}
	dato[i]='\0';
	return dato;
}

