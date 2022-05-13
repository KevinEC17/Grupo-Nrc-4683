#include "Ingresar.h"

char* Ingresar::ingresarDatos(char* msg) {
	char dato[10];
	char c;
	int i = 0;
	printf("%s\n", msg);
	while ((c = getch()) != 13) {
		if (c >= '0' && c <= '9' || c == '.') {
			printf("%c", c);
			dato[i++] = c;
		}
	}
	dato[i] = '\0';
	return dato;
}
