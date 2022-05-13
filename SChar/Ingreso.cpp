#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Ingreso.h"

char* Ingreso::ingresarDatosE(char*msg){
	char* dato=new char[10];
	char c;
	int i=0;
	printf("%s\n",msg);
	while((c=getch()) !=13){
		if(c>='a' && c<='z' || c==' '){
			printf("%c",c);
			dato[i++]=c;
		}
	}
	dato[i]='\0';

	return dato;
}

